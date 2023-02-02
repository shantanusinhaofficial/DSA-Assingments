#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double pov(double x, long long int n)
    {
        return x * n;
    }
    double myPow(double x, long long int n)
    {
        if (n < 0)
        {
            int temp = abs(n);
            return 1 / (pov(x, temp));
        }
        return pov(x, n);
    }
};

int main()
{
    Solution ab;
    double n;
    long long int m;
    cin >> n >> m;
    cout << ab.pov(n, m);
    return 0;
}