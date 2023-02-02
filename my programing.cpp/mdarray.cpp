#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    int x[3][2] = {{0, 1}, {2, 3}, {4, 5}};

    // output each array element's value
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j] << endl;
        }
    }

    return 0;
}
