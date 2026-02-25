#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>
#include <sstream>
using namespace std;

// Forward declarations
class MenuItem;
class Order;
class Menu;
class Customer;
class Admin;

// ==================== MenuItem Class ====================
class MenuItem {
private:
    int itemId;
    string name;
    string category;
    double price;
    bool available;

public:
    MenuItem() : itemId(0), name(""), category(""), price(0.0), available(true) {}

    MenuItem(int id, string n, string cat, double p, bool avail = true)
        : itemId(id), name(n), category(cat), price(p), available(avail) {}

    // Getters
    int getItemId() const { return itemId; }
    string getName() const { return name; }
    string getCategory() const { return category; }
    double getPrice() const { return price; }
    bool isAvailable() const { return available; }

    // Setters
    void setPrice(double p) { price = p; }
    void setAvailable(bool avail) { available = avail; }
    void setName(string n) { name = n; }
    void setCategory(string cat) { category = cat; }

    void display() const {
        cout << left << setw(5) << itemId 
             << setw(25) << name 
             << setw(15) << category 
             << setw(10) << fixed << setprecision(2) << price 
             << setw(12) << (available ? "Available" : "Not Available") << endl;
    }

    string toString() const {
        stringstream ss;
        ss << itemId << "," << name << "," << category << "," 
           << fixed << setprecision(2) << price << "," << available;
        return ss.str();
    }

    static MenuItem fromString(const string& line) {
        stringstream ss(line);
        string token;
        vector<string> tokens;

        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        if (tokens.size() >= 5) {
            return MenuItem(
                stoi(tokens[0]),
                tokens[1],
                tokens[2],
                stod(tokens[3]),
                tokens[4] == "1"
            );
        }
        return MenuItem();
    }
};

// ==================== OrderItem Class ====================
class OrderItem {
private:
    MenuItem item;
    int quantity;

public:
    OrderItem() : quantity(0) {}
    OrderItem(MenuItem mi, int qty) : item(mi), quantity(qty) {}

    MenuItem getItem() const { return item; }
    int getQuantity() const { return quantity; }
    double getSubtotal() const { return item.getPrice() * quantity; }

    void display() const {
        cout << left << setw(25) << item.getName() 
             << setw(10) << quantity 
             << setw(10) << fixed << setprecision(2) << item.getPrice() 
             << setw(10) << getSubtotal() << endl;
    }

    string toString() const {
        stringstream ss;
        ss << item.getItemId() << "," << quantity;
        return ss.str();
    }
};

// ==================== Order Class ====================
class Order {
private:
    int orderId;
    string customerName;
    vector<OrderItem> items;
    double totalAmount;
    string orderDate;
    string status;

public:
    Order() : orderId(0), customerName(""), totalAmount(0.0), status("Pending") {}

    Order(int id, string name) : orderId(id), customerName(name), 
                                  totalAmount(0.0), status("Pending") {
        time_t now = time(0);
        orderDate = ctime(&now);
        orderDate.pop_back(); // Remove newline
    }

    void addItem(const OrderItem& item) {
        items.push_back(item);
        calculateTotal();
    }

    void calculateTotal() {
        totalAmount = 0.0;
        for (const auto& item : items) {
            totalAmount += item.getSubtotal();
        }
    }

    int getOrderId() const { return orderId; }
    string getCustomerName() const { return customerName; }
    double getTotalAmount() const { return totalAmount; }
    string getOrderDate() const { return orderDate; }
    string getStatus() const { return status; }
    vector<OrderItem> getItems() const { return items; }

    void setStatus(string s) { status = s; }

    void displayBill() const {
        cout << "\n========================================" << endl;
        cout << "           ORDER BILL" << endl;
        cout << "========================================" << endl;
        cout << "Order ID: " << orderId << endl;
        cout << "Customer: " << customerName << endl;
        cout << "Date: " << orderDate << endl;
        cout << "Status: " << status << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(25) << "Item" 
             << setw(10) << "Qty" 
             << setw(10) << "Price" 
             << setw(10) << "Subtotal" << endl;
        cout << "----------------------------------------" << endl;

        for (const auto& item : items) {
            item.display();
        }

        cout << "----------------------------------------" << endl;
        cout << right << setw(35) << "Total: Rs. " 
             << fixed << setprecision(2) << totalAmount << endl;
        cout << "========================================\n" << endl;
    }

    string toString() const {
        stringstream ss;
        ss << orderId << "|" << customerName << "|" << orderDate 
           << "|" << status << "|" << fixed << setprecision(2) << totalAmount << "|";

        for (size_t i = 0; i < items.size(); i++) {
            ss << items[i].toString();
            if (i < items.size() - 1) ss << ";";
        }
        return ss.str();
    }
};

// ==================== Menu Class ====================
class Menu {
private:
    vector<MenuItem> items;
    string filename;

public:
    Menu(string file = "menu.txt") : filename(file) {
        loadFromFile();
    }

    void loadFromFile() {
        ifstream file(filename);
        if (!file.is_open()) {
            // Create default menu if file doesn't exist
            initializeDefaultMenu();
            saveToFile();
            return;
        }

        items.clear();
        string line;
        while (getline(file, line)) {
            if (!line.empty()) {
                items.push_back(MenuItem::fromString(line));
            }
        }
        file.close();
    }

    void saveToFile() const {
        ofstream file(filename);
        for (const auto& item : items) {
            file << item.toString() << endl;
        }
        file.close();
    }

    void initializeDefaultMenu() {
        items.clear();
        items.push_back(MenuItem(101, "Veg Burger", "Burgers", 120.00));
        items.push_back(MenuItem(102, "Chicken Burger", "Burgers", 150.00));
        items.push_back(MenuItem(103, "Cheese Burger", "Burgers", 140.00));
        items.push_back(MenuItem(201, "Margherita Pizza", "Pizza", 250.00));
        items.push_back(MenuItem(202, "Pepperoni Pizza", "Pizza", 350.00));
        items.push_back(MenuItem(203, "Veggie Pizza", "Pizza", 300.00));
        items.push_back(MenuItem(301, "French Fries", "Sides", 80.00));
        items.push_back(MenuItem(302, "Onion Rings", "Sides", 90.00));
        items.push_back(MenuItem(401, "Coke", "Beverages", 50.00));
        items.push_back(MenuItem(402, "Fresh Juice", "Beverages", 80.00));
    }

    void displayMenu() const {
        cout << "\n========================================" << endl;
        cout << "              MENU" << endl;
        cout << "========================================" << endl;
        cout << left << setw(5) << "ID" 
             << setw(25) << "Name" 
             << setw(15) << "Category" 
             << setw(10) << "Price" 
             << setw(12) << "Status" << endl;
        cout << "----------------------------------------" << endl;

        for (const auto& item : items) {
            item.display();
        }
        cout << "========================================\n" << endl;
    }

    MenuItem* findItem(int id) {
        for (auto& item : items) {
            if (item.getItemId() == id) {
                return &item;
            }
        }
        return nullptr;
    }

    void addItem(const MenuItem& item) {
        items.push_back(item);
        saveToFile();
    }

    bool updateItem(int id, double newPrice) {
        MenuItem* item = findItem(id);
        if (item) {
            item->setPrice(newPrice);
            saveToFile();
            return true;
        }
        return false;
    }

    bool updateItemAvailability(int id, bool available) {
        MenuItem* item = findItem(id);
        if (item) {
            item->setAvailable(available);
            saveToFile();
            return true;
        }
        return false;
    }

    bool deleteItem(int id) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getItemId() == id) {
                items.erase(it);
                saveToFile();
                return true;
            }
        }
        return false;
    }

    vector<MenuItem> getItems() const { return items; }
};

// ==================== Customer Class ====================
class Customer {
private:
    string name;
    vector<Order> orderHistory;
    Menu* menu;
    int nextOrderId;

public:
    Customer(string n, Menu* m) : name(n), menu(m), nextOrderId(1) {
        loadOrderHistory();
    }

    void loadOrderHistory() {
        ifstream file("orders.txt");
        if (!file.is_open()) return;

        string line;
        while (getline(file, line)) {
            if (!line.empty() && line.find(name) != string::npos) {
                // Parse order (simplified parsing)
                orderHistory.push_back(Order());
            }
        }
        file.close();

        if (!orderHistory.empty()) {
            nextOrderId = orderHistory.back().getOrderId() + 1;
        }
    }

    void browseMenu() {
        menu->displayMenu();
    }

    Order placeOrder() {
        Order order(nextOrderId++, name);

        cout << "\n=== Place Your Order ===" << endl;
        cout << "Enter item IDs and quantities (0 to finish)" << endl;

        while (true) {
            int itemId, quantity;
            cout << "\nEnter Item ID (0 to finish): ";
            cin >> itemId;

            if (itemId == 0) break;

            MenuItem* item = menu->findItem(itemId);
            if (!item) {
                cout << "Invalid item ID! Please try again." << endl;
                continue;
            }

            if (!item->isAvailable()) {
                cout << "Sorry, this item is not available!" << endl;
                continue;
            }

            cout << "Enter quantity: ";
            cin >> quantity;

            if (quantity <= 0) {
                cout << "Invalid quantity!" << endl;
                continue;
            }

            order.addItem(OrderItem(*item, quantity));
            cout << "Added " << quantity << " x " << item->getName() << endl;
        }

        if (order.getItems().empty()) {
            cout << "No items in order!" << endl;
            return Order();
        }

        order.displayBill();
        orderHistory.push_back(order);
        saveOrder(order);

        cout << "Order placed successfully!" << endl;
        return order;
    }

    void saveOrder(const Order& order) {
        ofstream file("orders.txt", ios::app);
        file << order.toString() << endl;
        file.close();
    }

    void viewOrderHistory() {
        if (orderHistory.empty()) {
            cout << "\nNo order history found!" << endl;
            return;
        }

        cout << "\n=== Order History ===" << endl;
        for (const auto& order : orderHistory) {
            order.displayBill();
        }
    }
};

// ==================== Admin Class ====================
class Admin {
private:
    string username;
    string password;
    Menu* menu;

public:
    Admin(Menu* m) : username("admin"), password("admin123"), menu(m) {}

    bool login() {
        string uname, pass;
        cout << "\n=== Admin Login ===" << endl;
        cout << "Username: ";
        cin >> uname;
        cout << "Password: ";
        cin >> pass;

        return (uname == username && pass == password);
    }

    void adminMenu() {
        while (true) {
            cout << "\n=== Admin Panel ===" << endl;
            cout << "1. View Menu" << endl;
            cout << "2. Add New Item" << endl;
            cout << "3. Update Item Price" << endl;
            cout << "4. Update Item Availability" << endl;
            cout << "5. Delete Item" << endl;
            cout << "6. View All Orders" << endl;
            cout << "7. Logout" << endl;
            cout << "Enter choice: ";

            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    menu->displayMenu();
                    break;
                case 2:
                    addMenuItem();
                    break;
                case 3:
                    updateMenuItem();
                    break;
                case 4:
                    updateItemAvailability();
                    break;
                case 5:
                    deleteMenuItem();
                    break;
                case 6:
                    viewAllOrders();
                    break;
                case 7:
                    return;
                default:
                    cout << "Invalid choice!" << endl;
            }
        }
    }

    void addMenuItem() {
        int id;
        string name, category;
        double price;

        cout << "\n=== Add New Menu Item ===" << endl;
        cout << "Enter Item ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Category: ";
        getline(cin, category);

        cout << "Enter Price: ";
        cin >> price;

        menu->addItem(MenuItem(id, name, category, price));
        cout << "Item added successfully!" << endl;
    }

    void updateMenuItem() {
        int id;
        double newPrice;

        cout << "\n=== Update Item Price ===" << endl;
        cout << "Enter Item ID: ";
        cin >> id;

        cout << "Enter New Price: ";
        cin >> newPrice;

        if (menu->updateItem(id, newPrice)) {
            cout << "Price updated successfully!" << endl;
        } else {
            cout << "Item not found!" << endl;
        }
    }

    void updateItemAvailability() {
        int id, choice;

        cout << "\n=== Update Item Availability ===" << endl;
        cout << "Enter Item ID: ";
        cin >> id;

        cout << "Select Status:" << endl;
        cout << "1. Available" << endl;
        cout << "2. Not Available" << endl;
        cout << "Enter choice (1 or 2): ";
        cin >> choice;

    bool available = (choice == 1) ? true : false;
        if (menu->updateItemAvailability(id, available)) {
            cout << "Availability updated successfully!" << endl;
            cout << "Item is now " << (available ? "Available" : "Not Available") << endl;
        } else {
            cout << "Item not found!" << endl;
        }
    }
    void deleteMenuItem() {
        int id;

        cout << "\n=== Delete Menu Item ===" << endl;
        cout << "Enter Item ID: ";
        cin >> id;

        if (menu->deleteItem(id)) {
            cout << "Item deleted successfully!" << endl;
        } else {
            cout << "Item not found!" << endl;
        }
    }

    void viewAllOrders() {
        ifstream file("orders.txt");
        if (!file.is_open()) {
            cout << "\nNo orders found!" << endl;
            return;
        }

        cout << "\n=== All Orders ===" << endl;
        string line;
        int count = 0;

        while (getline(file, line)) {
            if (!line.empty()) {
                count++;
                cout << "Order #" << count << ": " << line << endl;
            }
        }

        if (count == 0) {
            cout << "No orders found!" << endl;
        }

        file.close();
    }
};

// ==================== Main Function ====================
int main() {
    Menu menu;
    cout << "\n****************************************" << endl;
    cout << "   ONLINE FOOD ORDERING SYSTEM" << endl;
    cout << "****************************************" << endl;

    while (true) {
        cout << "\n=== Main Menu ===" << endl;
        cout << "1. Customer Login" << endl;
        cout << "2. Admin Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";

        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                string customerName;
                cout << "Enter your name: ";
                getline(cin, customerName);

                Customer customer(customerName, &menu);

                while (true) {
                    cout << "\n=== Customer Menu ===" << endl;
                    cout << "1. Browse Menu" << endl;
                    cout << "2. Place Order" << endl;
                    cout << "3. View Order History" << endl;
                    cout << "4. Logout" << endl;
                    cout << "Enter choice: ";

                    int custChoice;
                    cin >> custChoice;

                    switch (custChoice) {
                        case 1:
                            customer.browseMenu();
                            break;
                        case 2:
                            customer.placeOrder();
                            break;
                        case 3:
                            customer.viewOrderHistory();
                            break;
                        case 4:
                            goto customer_logout;
                        default:
                            cout << "Invalid choice!" << endl;
                    }
                }
                customer_logout:
                break;
            }
            case 2: {
                Admin admin(&menu);
                if (admin.login()) {
                    cout << "Login successful!" << endl;
                    admin.adminMenu();
                } else {
                    cout << "Invalid credentials!" << endl;
                }
                break;
            }
            case 3:
                cout << "\nThank you for using our service!" << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
