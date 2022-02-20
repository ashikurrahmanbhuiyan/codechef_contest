#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	//freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	   	int n;cin>>n;
	   	int count =0;
	   	while( n!=1){
	   		n = n>>1;
	   		count++;
	   	}
	   	cout<<count<<endl;
	}
	
}