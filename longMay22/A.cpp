#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int x, y;cin>>x>>y;
		int r = (10*x)+(90*y);
		cout<<r<<endl;
	}	
}
