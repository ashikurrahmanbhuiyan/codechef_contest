#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	   	int n;cin>>n;
	   	int arr[n];
	   	for (int i = 0; i < n; ++i)
	   	{
	   		cin>>arr[i];
	   	}
	   	sort(arr,arr+n);
	   	int sum = 0;
	   	for (int i = 0; i < n-1; ++i)
	   	{
	   		sum = sum+arr[i];
	   	}
	   	cout<<(arr[n-1]/sum)-1<<endl;
	   	if (((arr[n-1]/sum)-1)>0)
	   	{
	   		cout<<n-1<<" "<<2<<endl;
	   	for (int i = 0; i < n-1; ++i)
	   	{
	   		cout<<arr[i]<<" ";
	   	}
	   	cout<<""<<endl;
	   	}
	   	

	}
	
}