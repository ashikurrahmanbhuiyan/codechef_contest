#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//freopen("input1.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int z,y,a,b,c;
		cin>>z>>y>>a>>b>>c;
		if (z>=(y+a+b+c))
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	
	
}