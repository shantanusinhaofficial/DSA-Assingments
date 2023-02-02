#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector{1, 2, 3, 4, 5};
    myvector.pop_back();

    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << ' ' << *it;
}