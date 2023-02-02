#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, size;
    cout << "enteer the size of the vector " << endl;
    cin >> size;
    vector<int> shant;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element add to the vector";
        cin >> n;
        shant.push_back(n);
    }
    shant.pop_back(5);

    for (int i = 0; i < size; i++)
    {

        cout << shant[i];

        cout << endl;
    }

    return 0;
}