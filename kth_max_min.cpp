#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
   int arr[] = {5,3,5,6,7,4,3,33,0,1,2,5};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout<<"value of n is "<<n<<endl;
   sort(arr,arr+n);

     for (int  i = 0; i < n; i++)
     {
        cout<<i+1<<" ="<<arr[i]<<endl;
     }
    
     int k ,r;
     cin>>k>>r;
     cout<<k<<"th smallest element is :"<<arr[k-1]<<endl;
     cout<<r<<"th greatest element is :"<<arr[12-r]<<endl;
    return 0;
}