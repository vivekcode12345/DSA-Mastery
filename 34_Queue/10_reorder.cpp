#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void display(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void reorder(queue<int>& q) {

    int n = q.size();

    stack<int> st;

    // Step 1: Push first half into stack
    for (int i = 0; i < n / 2; i++) {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Push stack back into queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // Step 3: Move first half to back
    for (int i = 0; i < n / 2; i++) {
        q.push(q.front());
        q.pop();
    }

    // Step 4: Push first half into stack again
    for (int i = 0; i < n / 2; i++) {
        st.push(q.front());
        q.pop();
    }

    // Step 5: Interleave stack and queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();

        q.push(q.front());
        q.pop();
    }
}

int main() {

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout << "Original Queue : ";
    display(q);

    reorder(q);

    cout << "Reordered Queue: ";
    display(q);

    return 0;
}