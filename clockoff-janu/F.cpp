#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input1.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int arr1[n],arr2[m],count = 0;
		vector<int> v1;
		vector<int> v2;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr1[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin>>arr2[m];
		}
		for (int i = 0; i < n-1; ++i)
		{
			v1.push_back(arr1[i]);
			if (arr1[i]>arr1[i+1])
			{
				count++;
			}
			if (count>2)
			{
				break;
			}
		}
		for (int i = 0; i < m-1; ++i)
		{
			v2.push_back(arr2[i]);
			if (arr2[i]>arr2[i+1])
			{
				count++;
			}
			if (count>2)
			{
				break;
			}
		}
		int size = v1.size() + v2.size();
		cout<<size<<endl;
	}
	
}