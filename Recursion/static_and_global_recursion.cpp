#include <iostream> 
using namespace std;

int fun(int n){
    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}
int x;
int fun1(int n){
    if(n>0){
        x++;
        return fun1(n-1)+x;
    }
    return 0;
}

int main(){
    int r;
    int s;
    r=fun(5);
    s=fun1(5);
    cout<<r<<endl;
    cout<<s<<endl;
    return 0;
}