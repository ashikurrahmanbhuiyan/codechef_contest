#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int x,y;cin>>x>>y;
		int c = 0,l;
		while(x!=y){
			if (x<y)
			{
				c = c+(y-x);
				x = x+(y-x);
			}
			else if(y<x){
				l = (((x-y)+1)/2);
				c = c+l;
				y = y + (l*2);
		}
			}
			cout<<c<<endl;
		
	}	
}
