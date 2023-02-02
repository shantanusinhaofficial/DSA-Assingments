#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;
int unique(vector<int> input)
{
    int result = 0;

    map<int, int> aux;
    for (int i = 0; i < input.size(); i++)
    {
        aux[input[i]] = 0;
    }
    for (int i = 0; i < input.size(); i++)
    {
        aux[input[i]]++;
    }
    for (int i = 0; i < input.size(); i++)
    {
        if (aux[input[i]] == 1)
        {
            result += input[i];
        }
    }
    return result;
}
int main()
{
    int test;
    cin >> test;
    vector<int> input;
    for (int i = 0; i < test; i++)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    cout << unique(input);
}