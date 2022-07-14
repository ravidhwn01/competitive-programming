#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// method 3
int binaryExpRecur(int a,int b){
  if (b==0)  
  {
    return 1;
  }
  int res  = binaryExpRecur(a,b/2);
  if (b&1)
  {
    return a*res*res;

  }
  else{
    return res*res;
  }
  
}
int main()
{
    // method 1
    int x = 2,y=13;
    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans*=x;
    }
    cout<<ans<<endl;
    cout<<binaryExpRecur(2,13)<<endl;
    cout<<pow(2,13);  // method 2 do not use bcz it gives inaccurate value
    return 0;
}