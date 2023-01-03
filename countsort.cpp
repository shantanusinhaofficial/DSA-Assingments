#include <iostream>
#include <vector>
using namespace std;

// Function to sort the array using count sort
void countSort(vector<int>& arr)
{
    // find the maximum element in the array
    int max = max_element(arr.begin(), arr.end());

    // create a count array to store the count of each element
    // and initialize the count array to 0
    vector<int> count(max + 1, 0);

    // store the count of each element in the count array
    for (int i = 0; i < arr.size(); i++)
        count[arr[i]]++;

    // modify the count array such that each element at each index
    // stores the sum of previous counts
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];

    // create a temporary array to store the sorted elements
    :vector<int> temp(arr.size());

    // copy the elements from the original array to the temporary array
    // based on the position in the count array
    for (int i = 0; i < arr.size(); i++)
    {
        temp[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // copy the sorted elements from the temporary array
    // to the original array
    for (int i = 0; i < arr.size(); i++)
        arr[i] = temp[i];
}

int main()
{
    // input array
    vector<int> arr = { 5, 2, 9, 5, 2, 3, 5 };

    // sort the array
    countSort(arr);

    // print the sorted array
    for (int i : arr)
        cout << i << " ";

    return 0;
}
