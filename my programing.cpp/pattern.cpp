#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // rows
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++) // columns
        {
            if (j >= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}