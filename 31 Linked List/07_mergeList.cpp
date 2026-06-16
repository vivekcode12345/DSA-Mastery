#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {

        ListNode* tempA = a;
        ListNode* tempB = b;

        ListNode* c = new ListNode(-1);
        ListNode* tempC = c;

        while (tempA != NULL && tempB != NULL) {

            if (tempA->val <= tempB->val) {

                ListNode* t = new ListNode(tempA->val);
                tempC->next = t;
                tempC = t;
                tempA = tempA->next;

            } else {

                ListNode* t = new ListNode(tempB->val);
                tempC->next = t;
                tempC = t;
                tempB = tempB->next;
            }
        }

        if (tempA == NULL)
            tempC->next = tempB;
        else
            tempC->next = tempA;

        return c->next;
    }
};

void display(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // List 1: 1 -> 2 -> 4
    ListNode* a = new ListNode(1);
    a->next = new ListNode(2);
    a->next->next = new ListNode(4);

    // List 2: 1 -> 3 -> 4
    ListNode* b = new ListNode(1);
    b->next = new ListNode(3);
    b->next->next = new ListNode(4);

    Solution obj;

    ListNode* ans = obj.mergeTwoLists(a, b);

    display(ans);

    return 0;
}