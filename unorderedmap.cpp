#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printmap( unordered_map<int ,string> &m){
    cout<<m.size()<<endl;
    for (auto &pr:m )
    {
       cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}
int main()
{
    // unordered map mein order maintain nahi rahta 

    unordered_map<int ,string> m;

m[3] = "abc";    // complexity O(1) for insertion or accessing
m[4] = "abc";
m[2] = "acdf";
m[0] = "abbbc";
m[8] = "aytybc";
m[34] = "abujc";
m[1] = "abyt5c";
 printmap(m);
    return 0;
}