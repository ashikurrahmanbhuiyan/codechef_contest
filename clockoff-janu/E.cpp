#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,count = 0;cin>>n;
		for (int i = 2; count <n; i = i+2)
		{
			cout<<i<<" ";
			i++;
			count++;
		}
		cout<<""<<endl;
	}
	
}