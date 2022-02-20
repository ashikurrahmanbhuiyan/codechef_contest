#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//freopen("input4.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];
		for (int i = 1; i <= n; ++i)
		{
			arr[i] = i;
		}
		int h = n/2;
		int arr1[h],arr2[h];
		int j;
		//k = k % 4;
		while(k--){
		    j=1;
			for (int i = 1; i <= n; i = i+2)
			{
				arr1[j] = arr[i];
				j++;
			}
			j=1;
			for (int i = 2; i <= n; i = i+2)
			{
				arr2[j] = arr[i];
				j++;
			}
			for (int i = 1; i <=h ; ++i)
			{
				arr[i] = arr1[i];
			}
			j=1;
			for (int i = h+1; i <=n ; ++i)
			{
				arr[i] = arr2[j];
				j++;
			}
		}
		for (int i = 1; i <=n; ++i)
		{
			cout<<arr[i];
		}
		cout<<""<<endl;
	}
}