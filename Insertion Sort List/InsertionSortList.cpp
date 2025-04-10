#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* curr = head;
        ListNode* sorted = nullptr;
        while(curr){
            ListNode* next = curr->next;
            sorted = NodeInsertion(curr, sorted);

            curr = next;
        }

        return sorted;
    }

    ListNode* NodeInsertion(ListNode* newNode, ListNode* sorted){
        if (sorted == nullptr || sorted->val >= newNode -> val) {
            newNode->next = sorted;
            sorted = newNode;
        } else {
            ListNode* curr = sorted;

            while(curr->next && curr->next->val < newNode->val){
                curr = curr->next;
            }

            newNode->next = curr->next;
            curr->next = newNode;
    }

    return sorted;
    }
};

ListNode* arrayToList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); ++i) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    ListNode* head = arrayToList({4, 2, 1, 3});

    ListNode* sorted = solution.insertionSortList(head);

    printList(sorted);

    return 0;
}