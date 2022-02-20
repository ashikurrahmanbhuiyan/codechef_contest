#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input1.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			arr[i] = i+1;
		}
		int h = n/2;
		int arr1[h],arr2[h];
		int j;
		if (k == n-2)
		{
			for (int i = 0; i <n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		}
		else{
		k = k % (n-2);
		while(k--){
		    j=0;
			for (int i = 0; i < n; i = i+2)
			{
				arr1[j] = arr[i];
				j++;
			}
			j=0;
			for (int i = 1; i < n; i = i+2)
			{
				arr2[j] = arr[i];
				j++;
			}
			for (int i = 0; i <h ; ++i)
			{
				arr[i] = arr1[i];
			}
			j=0;
			for (int i = h; i <n ; ++i)
			{
				arr[i] = arr2[j];
				j++;
			}
		}
		for (int i = 0; i <n; ++i)
		{
			cout<<arr[i]<<" ";
		}
	}
	cout<<""<<endl;
}
}
//1 10 6 2 11 7 3 12 8 4 13 9 5 14