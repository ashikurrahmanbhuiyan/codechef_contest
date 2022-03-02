#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if (n <= 2)
		{
			cout<<-1<<endl;
		}
		else if (n % 2 != 0)
		{
			for (int i = 1; i <=n ; ++i)
			{
				cout<<i<<" ";
			}
			cout<<"\n";
		}
		else{
			cout<<2<<" "<<3<<" "<<1<<" ";
			for (int i = 4; i <= n; ++i)
			{
				cout<<i<<" ";
			}
			cout<<"\n";
		}
	}	
}