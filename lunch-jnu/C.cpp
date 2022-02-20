#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		 int n,k;cin>>n>>k;
		 if (n>1 && k<2)
		 {
		 	cout<<-1<<endl;
		 }
		 else
		 {
		 	for (int i = k; i <= n; ++i)
		 	{
		 		cout<<i<<" ";
		 	}
		 	for (int i = 1; i < k; ++i)
		 	{
		 		cout<<i<<" ";
		 	}
		 	cout<<""<<endl;
		 }
	}
	
}