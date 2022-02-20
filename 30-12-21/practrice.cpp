#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("insert.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	int n;cin>>n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin>>v.push_back();
	}
	if (n == 1)
	{
		 cout<<"YES"<<endl;
	}
	int nn = n/2;
	int index = 0;
	for (int i = 0; i < nn; ++i)
	{
		if (arr[i] != arr[n-1-i]) 
		{
			cout<<"NO"<<endl;
			cout<<arr[i];
			break;
		}

		index++;
	}
	if (index == nn  && n > 1)
	{
		cout<<"YES"<<endl;
	}
  }
	return 0;
}