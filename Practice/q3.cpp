#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i];      // XOR of all elements it helps to find the unique one 
    }
    cout << unique << endl;
    return 0;
}