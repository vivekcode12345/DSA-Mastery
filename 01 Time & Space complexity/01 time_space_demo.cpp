#include <iostream>
#include <vector>
using namespace std;

int constantExample(int n) {
    return n * 2;
}

int linearExample(const vector<int>& values) {
    int sum = 0;
    for (int value : values) {
        sum += value;
    }
    return sum;
}

int quadraticExample(const vector<int>& values) {
    int count = 0;
    for (size_t i = 0; i < values.size(); ++i) {
        for (size_t j = 0; j < values.size(); ++j) {
            if (values[i] == values[j]) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Constant example: " << constantExample(10) << '\n';
    cout << "Linear example: " << linearExample(numbers) << '\n';
    cout << "Quadratic example: " << quadraticExample(numbers) << '\n';

    return 0;
}
