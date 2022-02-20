#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		 int n,x,y;cin>>n>>x>>y;
		 int arr1[n],arr2[n],count = 0;
		 for (int i = 0; i < n; ++i)
		 {
		 	cin>>arr1[i];
		 }
		 for (int i = 0; i < n; ++i)
		 {
		 	cin>>arr2[i];
		 }
		 for (int i = 0; i < n; ++i)
		 {
		 	if ((arr2[i]-arr1[i] == x) || (arr2[i]-arr1[i] == y ))
		 	{
		 		count++;
		 	}
		 }
		 if (count == n)
		 {
		 	cout<<"YES"<<endl;
		 }
		 else
		 	cout<<"NO"<<endl;
	}
	
}