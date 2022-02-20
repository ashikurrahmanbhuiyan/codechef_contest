#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input4.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int k=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if (arr[i]>0)
			{
			for (int j = 0; j < i; ++j)
			{
				k=k|arr[i]&arr[j];
			}
		}
		}
		cout<<k<<endl;

	}
	
	
}