#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int value) : val(value), next(nullptr) {}
    ListNode(int value, ListNode* next) : val(value), next(next) {}
};

// Solution 1
// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     vector<int> n1, n2, result;
//     while(l1) { n1.push_back(l1->val); l1 = l1->next; }
//     while(l2) { n2.push_back(l2->val); l2 = l2->next; }
//     int carry = 0;
//     auto i = n1.rbegin(), j = n2.rbegin();
//     while (i!= n1.rend() || j!=n2.rend() || carry) {
//         int sum = carry;
//         if(i!=n1.rend()) {sum+=*i;++i;}
//         if(j!=n2.rend()) {sum+=*j;++j;}
//         carry = sum / 10;
//         result.push_back(sum % 10);
//     }
//     ListNode* head = new ListNode(result[0]);
//     ListNode* current = head;
//     for(int i = 1; i < result.size(); ++i) {
//         current->next = new ListNode(result[i]);
//         current = current->next;
//     }
//     return head;
// }

// Best Solution
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode(0);
    ListNode* current = head;
    int carry = 0;
    while (l1 || l2 || carry) {
        int sum = carry + (l1?l1->val:0) + (l2?l2->val:0);
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        if(l1) l1=l1->next;
        if(l2) l2=l2->next;
    }
    return head->next;
}

int main(int argc, char const *argv[])
{
}
