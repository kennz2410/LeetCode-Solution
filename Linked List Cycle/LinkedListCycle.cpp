#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* newNode = head;
        ListNode* newNode2 = head;
        while(newNode && newNode->next) {
            newNode2 = newNode2->next;
            newNode = newNode->next->next;
            if(newNode == newNode2) return true;
        }

        return false;
    }
};

int main() {
    // Test case 1: List with no cycle: 1 -> 2 -> 3 -> nullptr
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);

    Solution solution;
    cout << "Test 1 (no cycle): " << (solution.hasCycle(head1) ? "Cycle detected" : "No cycle") << endl;

    // Test case 2: List with a cycle: 1 -> 2 -> 3 -> 4 -> 2 (cycle)
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    head2->next->next->next->next = head2->next; // Create cycle

    cout << "Test 2 (has cycle): " << (solution.hasCycle(head2) ? "Cycle detected" : "No cycle") << endl;

    // Lưu ý: không delete các node nếu có cycle, tránh lỗi
    return 0;
}