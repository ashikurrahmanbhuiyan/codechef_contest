#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,k,m;cin>>n>>k>>m;
		vector<int> v1,v2;
		string s;cin>>s;
		for (int i = 0; i < n; ++i)
			v1.push_back(s[i]-48);

		for (int i = 0; i < m; ++i)
		{
			for (vector<int>::iterator i = v1.begin(); i != v1.end(); ++i)
			{
				*i = (*i) * k;
				if (*i == 0)
				{
					v2.push_back(0);
				}
				while(*i>0){
					v2.push_back((*i)%10);
					*i = *i/10;
				}
			}
			v1 = v2;
			v2.clear();
		}
		cout<<v1.size()<<endl;
	}
}