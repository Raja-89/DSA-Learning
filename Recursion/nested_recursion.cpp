#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11));
    }
}

int main()
{
    int n=95;
    int r=fun(n);
    
    cout<<r<<endl;
    return 0;
}