#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << arr.at(3) << endl;
    return 0;
}