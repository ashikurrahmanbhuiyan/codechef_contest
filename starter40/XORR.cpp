#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,c=0;cin>>n;
		int a[n],b[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		for (int i = 0; i < n; ++i)
			cin>>b[i];
		for (int i = 0; i < n; ++i)
		{
			if ((a[i]^a[i+1]) == (b[i]^b[i+1]))
			{
				c++;
			}
		}
		cout<<c<<endl;
	}	
}
