#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printmap(map<int ,string> &m){
    cout<<m.size()<<endl;
    for (auto &pr:m )
    {
       cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}
int main()
{
    map<int , string> m;
    m[1] ="abc";
    m[5] ="cdc";
    m[3] ="edf";
    m[6] ="ghi";
    // m.insert({4, "adf"});
    // for(auto &pt:m ){
    //     cout<<pt.first<<" "<<pt.second<<endl;  
    // }
    // // m.clear();
    // for(auto &pt:m ){
    //     cout<<pt.first<<" "<<pt.second<<endl;  
    // }
    printmap(m);
    return 0;
}