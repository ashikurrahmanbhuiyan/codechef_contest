#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	   	int n;cin>>n;
	   	int arr[3],arr1[3],arr2[3],arr3[3];
	   	for (int i = 0; i < 3; ++i)
	   	{
	   		cin>>arr1[i];
	   	}
	   	for (int i = 0; i < 3; ++i)
	   	{
	   		cin>>arr2[i];
	   	}
	   	for (int i = 0; i < 3; ++i)
	   	{
	   		cin>>arr3[i];
	   	}
	   	arr[0] = arr1[0];arr[1]= arr2[1];arr[2] = arr3[2];
	   	sort(arr,arr+3);
	   	cout<<n-arr[0]<<endl;
	}
	
}