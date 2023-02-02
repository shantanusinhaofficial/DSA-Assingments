#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> Arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    cout << " " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (Arr[i] + Arr[j]) % m << "  ";
        }
        cout << endl;
    }
    return 0;
}