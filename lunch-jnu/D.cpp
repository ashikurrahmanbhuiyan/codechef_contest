#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		 int n, k;cin>>n>>k;
		 string s;cin>>s;
		 int arr[n];
		 for (int i = 0; i < n; ++i)
		 {
		 	arr[i] = s[i]-48;
		 }
		 int i = 0;
		 while(k>=0 && i<=n){
		 	k = k-((10-arr[i])%10);
		 	i++;
		 }
		 cout<<i-1<<endl;
	}
	
}
/*
6
3 5
380
3 9
380
4 2
0123
5 13
78712
6 10
051827
8 25
37159725


0
3
1
3
2
5

*/