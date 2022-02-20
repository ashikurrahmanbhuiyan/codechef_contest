#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());
		int sum= 0,r = -1;
		for (int i = 0; i < n; ++i)
		{
			sum = sum +arr[i];
			if (sum >= x)
			{
				r = i+1;
				break;
			}
		}
		cout<<r<<endl;
	}
}