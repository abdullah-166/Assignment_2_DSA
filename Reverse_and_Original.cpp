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
void insert_at_tail(Node *&head,Node *&tail, int a)
{
    Node *newnode = new Node(a);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
   tail->next=newnode;
   tail=newnode;
}
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Reverse(Node* head) 
{
    if (head == NULL)
    {
        return;
    }
    Reverse(head->next);
    cout << head->value << " ";
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
        insert_at_tail(head,tail,v);
    }
    Reverse(head);
    cout<<endl;
    print(head);
    return 0;
}