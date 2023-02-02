#include <iostream>
using namespace std;
int main()
{
    cout << "enter two numbers" << endl;
    int n, i;
    cin >> n;
    for (int i = 2; i < n - 1; i++)
        if (n % i == 0)
            break;
    if (i == n)
        cout << "nonprime";
    else
        cout << "prime" << endl;
    return 0;
}