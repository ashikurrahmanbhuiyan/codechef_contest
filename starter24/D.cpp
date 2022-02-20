#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<((134217727|134217728)&(134217727|n)&(134217728|n))<<endl;
	}
	
}