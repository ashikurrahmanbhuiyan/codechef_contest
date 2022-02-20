#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		char a = 'a';
		for (int i = 0; i < n; ++i)
		{
			cout<<a;
			if (a == 'z')
			{
				a = 'a';
			}
			a++;                                                                                                 
		}
		cout<<""<<endl;
	}
	
}