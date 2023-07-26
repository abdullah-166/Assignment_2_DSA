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
void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode;
}
void insert_at_tail1(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode;
}
bool compare(Node* head, Node* head1) 
{
    while (head != NULL && head1 != NULL) 
    {
        if (head->value != head1->value) 
        {
            return false;
        }
        head = head->next;
        head1 = head1->next;
    }
    if (head == NULL && head1 == NULL) 
    {
        return true;
    }
    return false;
}
int main()
{
    Node *head = NULL;
    int v,min,max;
    while(true)
    {
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_at_tail(head, v);
    }
    Node *head1 = NULL;
    int v1;
    while(true)
    {
        cin>>v1;
        if(v1==-1)
        {
            break;
        }
        insert_at_tail1(head1, v1);
    }
    if (compare(head, head1)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}