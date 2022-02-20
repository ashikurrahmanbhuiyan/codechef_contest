#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int a[3],p[3];
		for (int i = 0; i < 3; ++i)
		{
			cin>>a[i];
		}
		int allsum = 0;
		for (int i = 0; i < 3; ++i)
		{
			cin>>p[i];
			allsum = allsum + p[i];
		}
		allsum = allsum/2;
		int max = 0;
		int m = 0;
		for (int i = 0; i < 3; ++i)
		{
			if ((p[i] - a[i])>max)
			{
				max = p[i] - a[i];
				m = i;
			}
			
		}
		a[m] = p[m];
		if ((a[0]+a[1]+ a[2])>allsum)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;

	}
	
}