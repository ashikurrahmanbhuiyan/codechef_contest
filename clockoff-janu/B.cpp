#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int x,y,z;cin>>x>>y>>z;
		if (x < y && x < z)
		{
			cout<<"NOTHING\n";
		}
		else if (x<y && x>=z)
		{
			cout<<"BURGER\n";
		}
		else
			cout<<"PIZZA"<<endl;
	}
	
}