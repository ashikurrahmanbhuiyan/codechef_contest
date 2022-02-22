#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];
		for (int i = 0; i < k; ++i)
			cin>>arr[i];
		int j= 0;
		for (int i = arr[j]; i > 0 ; i--)
		{
			cout<<i<< " ";
		}
		k--;
		j++;
		while(k--){
			for (int i = arr[j] ; i>arr[j-1] ; i--)
			{
				cout<<i<< " ";
				j++;
			}
		}
		cout<<"\n";

	}	
}