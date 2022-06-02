#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,s=0;cin>>n;
		if (n == 1)
		{
			cout<<0<<endl;
		}
		else{
			n = n-1;
			s = n/5;
			s = s*2;
			n = n%5;
			if (n == 4)
			{
				s = s+2;
			}
			else if (n == 1 || n ==2 || n == 3)
				s++;
		cout<<s<<endl;
	}
	}	
}
