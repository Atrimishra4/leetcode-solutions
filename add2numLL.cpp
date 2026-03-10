#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node *next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* addNode(Node *head , vector<int>& arr)
{
int n = arr.size();
Node* move = head;
for(int i = 1 ; i<n;i++)
{
    Node* temp = new Node(arr[i]);
    move -> next = temp;
    move = temp;
}
return head;
}
void print(Node *head){
    Node* temp = head;
    while(temp)
    {
        cout << temp -> data<<" ";
        temp = temp -> next;
    }
   cout << ""<<endl;
}
Node* addTwoNum(Node *head1,Node *head2)
{   Node* head = new Node(0);
    Node* move = head;
    Node* temp1 = head1;
    Node* temp2 = head2;
    int carry = 0;
    while((temp1) || (temp2) || (carry))
    { 
        int sum = carry;
        if(temp1)
        {  sum += temp1 ->data;
           temp1= temp1 ->next;
        }
        if(temp2)
        {
            sum += temp2 ->data;
            temp2 = temp2 ->next;
        }
        Node* newNode;
        if(sum >= 10)
        {
            newNode = new Node(sum%10);
            carry = sum/10;
        }
        else
        {
            newNode = new Node(sum);
            carry = 0;
        }
        move -> next = newNode;
        move = newNode;
    }
    if(carry)
    {
        Node* newNode = new Node(carry);
        move -> next = newNode;
        move = newNode;
    }
    return head -> next;
}

int main(){
    vector <int> arr1 = {3,5};
    vector <int> arr2 = {4,5,9,9};

    Node* head1 = new Node(arr1[0]);
    Node* head2 = new Node(arr2[0]);
    addNode(head1,arr1);
    addNode(head2,arr2); 
    print(head1);
    print(head2);
    print(addTwoNum(head1,head2));


}