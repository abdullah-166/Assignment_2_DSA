#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node* next;
        Node(int value)
        {
            this->value=value;
            this->next=NULL;
        }
};
void insert_at_tail(Node *&head, Node *&tail, int a)
{
    Node *newnode = new Node(a);
    if(head==NULL)
    {
        //head=newnode;
       // tail=newnode;
        return;
    }
   tail->next=newnode;
   tail=newnode;
}
void find_middle(Node* head) 
{
    if (head == NULL) 
    {
        return;
    }
    Node* newnode = head;
    Node* newnode1 = head;
    Node* newnode2 = NULL;
    while (newnode1 != NULL && newnode1->next != NULL) 
    {
        newnode1 = newnode1->next->next;
        newnode2 = newnode;
        newnode = newnode->next;
    }
    if (newnode1 == NULL) 
    {
        cout << newnode2->value << " " << newnode->value << endl;
    } 
    else 
    {
        cout << newnode->value << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_at_tail(head,tail, v);
    }
    find_middle(head);
    return 0;
}