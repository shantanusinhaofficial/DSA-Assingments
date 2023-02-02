#include <bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        //swap hua
        swap(arr[minindex], arr[i]);
      
    }
}
int main()
{
    selectionsort(vector<int> & arr, int n) 
    vector<int,5>arr={7,8,5,4,2};
    
}