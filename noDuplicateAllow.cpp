#include <bits/stdc++.h>
#include <vector>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};  
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr ) return head;
        ListNode* temp = head;
        while ((temp!= nullptr)&&(temp ->next !=nullptr )){
            if(temp ->val == temp ->next ->val)
            {
                ListNode* duplicate = temp ->next;
                delete duplicate;
                temp -> next = temp ->next ->next;
                
            }
            else temp  = temp ->next;
        }
        return head;
        
    }
};

int main(){
    Solution s;
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(1);
    head -> next -> next = new ListNode(2);
    head -> next -> next -> next = new ListNode(3);
    head -> next -> next -> next -> next = new ListNode(3);
    head -> next -> next -> next -> next -> next = new ListNode(4);
    head -> next -> next -> next -> next -> next ->next = new ListNode(5);
    head -> next -> next -> next -> next -> next ->next->next = new ListNode(5);
    
    ListNode* newhead = s.deleteDuplicates(head);
    while(newhead != nullptr){
        cout << newhead->val << " ";
        newhead = newhead->next;
    }
    return 0;
}