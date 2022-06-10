[problem link- CBSPEED](https://www.codechef.com/submit-v2/CBSPEED)
```
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin>>x>>y;
	if(y>x){
	    cout<<"Yes"<<endl;
	}
	else
	cout<<"No";
	
	return 0;
}
```

[problem link- FLOW001](https://www.codechef.com/submit-v2/FLOW001)
```
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   int a,b;
   while(t--){
    int sum=0;
    cin>>a>>b;
    sum=a+b;
    cout<<sum<<"\n";
   }
   return 0;
}
```

[problem link- PRACLIST](https://www.codechef.com/submit-v2/PRACLIST)
``` 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int countAllProblems,attempted;
	cin >> countAllProblems >> attempted;
	cout << countAllProblems-attempted;
	return 0;
}

```
[problem link- SEMCOURSES](https://www.codechef.com/submit-v2/SEMCOURSES)
```
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    int w;
	    cin>>x>>y>>z;
	    w=x*y*z;
	    cout<<w<<endl;   
	}
	
	return 0;
}

```

[problem link- VOLCONTROL ](https://www.codechef.com/submit-v2/VOLCONTROL)
```
#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	for(int i=1; i<=t; i++)
	{
	    cin>>x>>y;
	    if(x>y)
	    {
	        cout<<x-y<<endl;
	    }
	    else 
	    {
	        cout<<y-x<<endl;
	    }
	}
	return 0;
}

```
