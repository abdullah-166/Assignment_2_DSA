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
void insert_at_tail(Node *&head, int a)
{
    Node *newnode = new Node(a);
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
void max_min(Node* head, int& min, int& max) 
{
    min = head->value;
    max = head->value;
    Node* newnode = head->next;
    while (newnode != NULL) 
    {
        if (newnode->value < min) 
        {
            min = newnode->value;
        }
        else if (newnode->value > max) 
        {
            max = newnode->value;
        }
        newnode = newnode->next;
    }
    cout<<max<<" "<<min;
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
    max_min(head, min, max);
    return 0;
}