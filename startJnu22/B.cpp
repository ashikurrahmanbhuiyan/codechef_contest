#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	  int n;cin>>n;
	  int x = 2;
	  while(x<n){
	  	x = x<<1;
	  }
	  for (int i = x; i < n+x; ++i)
	  {
	  	cout<<i<<" ";
	  }
	  cout<<""<<endl;
	}
	
}