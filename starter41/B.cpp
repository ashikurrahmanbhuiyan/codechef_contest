#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		if (n%2 == 0)
		{
			cout<<"YES"<<endl;
		}
		else{
			if (k == 1)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}

	}	
}
