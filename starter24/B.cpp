#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,a;cin>>n>>a;
		int count = 0;
		for (int i = 0; i < a ; ++i)
		 {
		 	count = count + 2;
		 }
		 if (n == a)
		 {
		 	count = count -1;
		 }
		 for (int i = 0; i < n-a; ++i)
		 {
		 	count++;
		 }
		 cout<<count<<endl;
	}
	
}