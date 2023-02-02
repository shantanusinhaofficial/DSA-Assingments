#include <bits/stdc++.h>
using namespace std;
void firstocc(vector<int> arr, int n, int key)
{
    int s = 0;
    int e = arr.size() - 1;

    int ans = -1;
    vector<int> array;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            array.push_back(mid);
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }
    }

    for (int i = 0; i < array.size(); i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{

    vector<int> array1;
    int n;
    cin >> n;
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }
    firstocc(array1, n, key);
    return 0;
}
