#include<iostream>
using namespace std;
int sun(int n);
int fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        sun(n-1);
    }
}

int sun(int n)
{
    if(n>1)
    {
        cout<<n<<endl;
        fun(n/2);
    }
}

int main()
{
    int n=20;
    fun(n);
    cout<<"----"<<endl;
    sun(n);
    return 0;
}