#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int u[m],v[m];

		int l = n , max = 1;
		for (int i = 0; i < m; ++i)
		{
			cin>>u[i];
			cin>>v[i];
			if (u[i]<l)
			{
				l = u[i];
			}
			if (v[i]<l)
			{
				l = v[i];
			}
			if (u[i]>max)
			{
				max = u[i];
			}
			if (v[i]>max)
			{
				max = v[i];
			}
		}
	
		if (m == 0) {
			cout<<l-1<<endl;
		}
		else if (l == 1 && max == n)
		{
			cout<<0<<endl;
		}
		else if (l == 1 && max < n)
		{
			cout<<n-max<<endl;
		}
		else if (l > 1 && max == n)
		{
			cout<<l-1<<endl;
		}
		else
			cout<<(n-max)+(l-1)<<endl;
	}	
}