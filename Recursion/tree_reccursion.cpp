#include <iostream> // cin, cout, endl
using namespace std;                       // std::cout
int fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
        fun(n-1);
    }else{

        return 0;
    }

}


int main(){
    int n=3;
    int r;
    r=fun(n);
    cout<<r<<endl;
    return 0;
}