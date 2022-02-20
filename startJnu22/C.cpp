#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,k,x;cin>>n>>k>>x;
		int xx = x;
		int arr[n];
		if (x>k)
		{
			cout<<-1;
		}
		else{
			for (int i = 0; i < n; ++i)
			{
				xx--;
				arr[i] = xx;

				if (xx == 0)
				{
					xx = x;
				}
			}
			
			for (int i = 0; i < n; ++i)
			{
				cout<<arr[i]<<" ";
			}
	 }
		cout<<""<<endl;
	}
	
}