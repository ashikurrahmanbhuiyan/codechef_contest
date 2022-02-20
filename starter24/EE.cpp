#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		for (int i = 0; i < n/2; ++i)
		{
			for (int j = i; j<(n/2); ++j)
		{
			if (s[i] != s[i+1])
			{
				swap(s[i],s[i+1]);
			}
		}
		}
		
		cout<<s<<endl;
	}
	
}