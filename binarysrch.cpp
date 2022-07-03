#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
     for (int val:v)
    {
       cout<<val<<" ";
    }
    cout<<endl;
    int toFind;
    cin >> toFind;
    int lo = 0, hi = n - 1;
    int mid;
    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < toFind)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] == toFind)
    {
        cout << lo << endl;
    }
    else if (v[hi] == toFind)
    {
        cout << hi << endl;
    }
    else
    {
        cout << "Not found";
    }
   
}