#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int > s;  // set is used for store unique key values
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       int str;
        cin>>str;
        s.insert(str);     // insertion   or accessing complexity: log(n) 
    }
    
    for(auto value: s){
        cout<<value<<endl;
    }
    cout<<"done"<<endl;

    int q;
    cin>>q;
    while (q--)
    {
        int k;
        cin>>k;
    if (s.find(k)==s.end())
    {
        cout<<"No"<<endl;
    }
    else{

    cout<<"yes"<<endl;
    }
        
    }
    
    
   
    return 0;
}