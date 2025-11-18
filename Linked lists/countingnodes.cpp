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

int count(struct Node *p)  
{  
    int l=0;  
    while(p!=NULL)  
    {  
        l++;  
        p=p->next;  
    }  
    return l;  
}
int counts(struct Node *p)  
{  
    if(p==NULL)  
    {  
        return 0;  
    }  
    else  
    {  
        return count(p->next)+1;  
    }  
}

int Add(struct Node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return p->data+Add(p->next);
    }
}

int max(struct Node *p){
    int m=INT32_MIN;
    while(p){
        if(p->data>m){
            m=p->data;
        }
        p=p->next;
    }
    return m;
    //OR Recursively
    /*if(p==NULL){
        return INT32_MIN;
    }
    else{
        int x=max(p->next);
        return (x>p->data)?x:p->data;
    }*/
}
int main()  
{

    int A[]={3,5,7,10,15};  
    create(A,5);  
    cout<<"\nCount of nodes is: "<<counts(first);
    cout<<"\nSum of nodes is: "<<Add(first);
    cout<<"\nMax of nodes is: "<<max(first);
    return 0;  
}