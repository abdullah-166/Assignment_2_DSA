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
void insert_at_head(Node** head, Node** tail, int value) 
{
    Node* newNode = new Node(value);
    if (*head == NULL) 
    {
        *head = *tail = newNode;
    } 
    else 
    {
        newNode->next = *head;
        *head = newNode;
    }
}
void insert_at_tail(Node** head, Node** tail, int value) 
{
    Node* newNode = new Node(value);
    if (*head == NULL) 
    {
        *head = *tail = newNode;
    } 
    else 
    {
        (*tail)->next = newNode;
        *tail = newNode;
    }
}
void print(Node *head)
{
    Node *temp=head;
    if(head==NULL)
    {
        cout<<head->value<<" ";
    }
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
void print(Node* head, Node* tail) 
{
    cout<<head->value<<" "<<tail->value<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q,x,v;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>x>>v;
        if(x==0)
        {
            insert_at_head(&head,&tail,v);
        }
        else if(x==1)
        {
            insert_at_tail(&head,&tail,v);
        }
        print(head,tail);
    }
    return 0;
}