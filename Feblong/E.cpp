#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n],count = 0,max = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if (max<arr[i])
			{
				max = arr[i];
			}
		}
		if (n%2 == 0)
		{
			
		}
	}
}