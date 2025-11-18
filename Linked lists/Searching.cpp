#include<iostream>  
using namespace std;

struct Node  
{  
    int data;  
    struct Node *next; 
    
    
}*first=NULL;

void create(int A[],int n)  
{
    int i;  
    struct Node *t,*last;           
    first = new Node;  
    first->data=A[0];  
    first->next=NULL;  
    last=first;  

    for(i=1;i<n;i++)  
    {  
        t = new Node;  
        t->data=A[i];  
        t->next=NULL;  
        last->next=t;  
        last=t;  
    }   
}
void display(struct Node *p)  
{  
    while(p!=NULL)  
    {  
        cout<<p->data<<" ";  
        p=p->next;  
    }  
}

Node* Search(struct Node *p, int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return 0;

}

Node* Search(struct Node *p, int key){
    Node *q = NULL;
    while(p!=NULL){
        if(key==p->data){

            q->data=p->data;
            p->next = first;
            first=p;
        }
        q=p;
        p=p->next;
    }

}
int main()  
{

    int A[]={3,5,7,10,15};  
    create(A,5); 
    struct Node *temp; 
    temp=Search(first,7);
    if(temp){
        cout<<"Element "<<temp->data<<" found in the linked list.";
    } 

    return 0;  
}