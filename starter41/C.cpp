#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		long n;cin>>n;
		long k;cin>>k;
		if (k == 1)
		{
			if (n%2==0)
			{
				cout<<"EVEN"<<endl;
			}
			else
				cout<<"ODD"<<endl;
		}
		else if(k==2){
			cout<<"ODD"<<endl;	
		}
		else if(k>2){
			cout<<"EVEN"<<endl;
		}
	}	
}
