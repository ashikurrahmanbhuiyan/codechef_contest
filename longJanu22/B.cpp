#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input2.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	  	long long p,d;cin>>p>>d;
	  	long long int result = 0;
	  	if (d<=10)
	  	{
	  		result = pow(2,d);
	  	}
	  	else
	  		result = 1024*pow(3,(d-10));
	  	if (result<=p)
	  	{
	  		cout<<result<<endl;
	  	}
	  	else
	  		cout<<p<<endl;
	  	
	}
	
	
}