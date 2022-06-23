#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;
    s.push("ravi");
    s.push("yash");
    s.push("vikash");
    s.push("kalu");
    s.push("raju");
    s.push("ajay");
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
     s.push("vikasgfsdgsh");
    s.push("kagsgdlu");
    s.push("rajfgu");
    s.push("ajadgsdgsy");
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}