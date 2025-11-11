#include <iostream>
using namespace std;
void print(int n)
{
    if (n > 0)
    {   // Tail Recursion
        cout << n << endl;
        print(n - 1);

        // Head Recursion
        print(n - 1);
        cout << n << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}