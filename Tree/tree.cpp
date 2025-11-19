#include<iostream>  
using namespace std;

struct Node{
    struct Node *left;
    int data;
    struct Node *right;
};

struct Queue{
    int size;
    int front;
    int rear;
    Node **Q;
};

void Create(struct Queue *q,int size){

    q->size = size;
    q->rear=q->front=0;
    q->Q = new Node*[q->size];
}

Node * enqueue(struct Queue *q,Node* x){
    if((q->rear+1)%q->size==q->front){
        cout<<"Queue Overflow"<<endl;
    } else{

        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}
Node * dequeue(struct Queue *q){
    Node* x=NULL;
    if(q->front==q->rear){
        cout<<"Queue Underflow"<<endl;
    } else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;   
}

int IsEmpty(struct Queue q){

    return q.front==q.rear;
}

struct Node *root=NULL;
void Create(){
 
    struct Node *p, *t;
    int x;
    struct Queue q;
    Create(&q,100);
    cout<<"Enter root value"<<endl;
    cin>>x;
    root=new Node;
    root->data=x;
    root->left=root->right=NULL;
    enqueue(&q,root);
    while(!IsEmpty(q)){
        p=dequeue(&q);
        cout<<"Enter left child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->left=t->right=NULL;
            p->left=t;
            enqueue(&q,t);
        }
        cout<<"Enter right child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->left=t->right=NULL;
            p->right=t;
            enqueue(&q,t);
        }
    }
}


void preorder(struct Node *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}
int main(){

    Create();
    preorder(root);
    return 0;
}