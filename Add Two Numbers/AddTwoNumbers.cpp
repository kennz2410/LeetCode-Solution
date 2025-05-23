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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* curr = result;
        int num = 0;
        while(l1 || l2 || num) {
            int carry = num;

            if(l1) {
                carry += l1->val;
                l1 = l1->next;
            }
            
            if(l2) {
                carry += l2->val;
                l2 = l2->next;
            }

            num = carry / 10;
            curr->next = new ListNode(carry % 10);
            curr = curr->next;
        }

        return result->next;
    }
};

int main() {

}