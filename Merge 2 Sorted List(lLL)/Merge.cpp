#include <bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1 == nullptr) return list2;

//         if(list2 == nullptr) return list1;

//         if(list1->val <= list2->val) {
//             list1->next = mergeTwoLists(list1->next, list2);
//             return list1;
//         } else {
//             list2->next = mergeTwoLists(list1, list2->next);
//             return list2;
//         }
//     }
// };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* newNode = &dummy;

        while(list1 && list2) {
            if(list1->val <= list2->val) {
                newNode->next = list1;
                list1 = list1->next;
            } else {
                newNode->next = list2;
                list2 = list2->next;
            }

            newNode = newNode->next;
        }

        if(list1 != nullptr) newNode = list1->next;
        else newNode = list2->next;

        return dummy.next;
    }
};

int main() {

}