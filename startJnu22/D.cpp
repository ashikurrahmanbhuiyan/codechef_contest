#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,d;cin>>n>>d;
		string s;cin>>s;
		int arr[n];
		vector<int> v;
		vector<int> v2;
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			arr[i] = (int)s[i]-48;
		}
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] == 0)
			{
				for (int j = i; j < n; ++j)
				{
					if (arr[j] == 1)
					{
						break;
					}
					count++;

				}
				i = i + count;
				if (arr[i+1] == 1)
				{
					v2.push_back(count);
				}
				else
				v.push_back(count);
				
				count = 0;
			}
		}
		sort(v.begin(), v.end(), greater<int>());
		sort(v2.begin(), v2.end(), greater<int>());
		int result;
		if (v.size()<2)
		{
			result = v[0]+1;
		}
		else
			result = v[0]+v[1]+1;
		if ( v2.size() > 0)
		{
			if (result< (v2[0]+1))
			{
				result = (v2[0]+1)/d;
			    cout<<result;
			}
			else
		   {
			result = result/d;
			cout<<result;
		    }
			
		}
		else
		{
			result = result/d;
			cout<<result;
		}
		cout<<""<<endl;
	}
	
}