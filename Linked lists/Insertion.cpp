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

void Insert(int index,int x){

    Node *t= new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;
    }
    else{
        Node *temp=first;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t; 
    }
}

int main()  
{

    int A[]={3,5,7,10,15};  
    create(A,5); 
    struct Node *temp; 
    if(temp){
        cout<<"Element "<<temp->data<<" found in the linked list.";
    } 

    return 0;  
}