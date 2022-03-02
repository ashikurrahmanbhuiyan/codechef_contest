#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n],count = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if (arr[i]>=10 && arr[i]<=60)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}	
}