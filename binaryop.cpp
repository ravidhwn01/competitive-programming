#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 3; i >=0; i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
    
}
int main()
{
    printBinary(9);
    cout<<(9>>10)<<endl;
    cout<<(9>>9)<<endl;
    cout<<(9>>8)<<endl;
    cout<<(9>>7)<<endl;
    cout<<(9>>6)<<endl;
    cout<<(9>>5)<<endl;
    cout<<(9>>4)<<endl;
    cout<<(9<<3)<<endl;
    cout<<(9>>2)<<endl;
    cout<<(9>>1)<<endl;
    cout<<(9>>0)<<endl;
    cout<<(1&1)<<endl;
    cout<<(2&1)<<endl;
    cout<<(4&1)<<endl;
    cout<<(72&3)<<endl;
    cout<<(9&72)<<endl;
    
    
    return 0;
}
