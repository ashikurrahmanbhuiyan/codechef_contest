#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,count = 8;cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if (arr[i]!=6 && arr[i]!=7 && arr[i]!=13 && arr[i]!=14 && arr[i]!=20 && arr[i]!=21 && arr[i]!=27 && arr[i]!=28)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}	
}