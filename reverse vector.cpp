#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{

    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

void print(vector<int> v)
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i);
    }

    vector<int> ans = reverse(v);

    cout << "Printing reverse Array" << endl;
    print(ans);

    return 0;
}
