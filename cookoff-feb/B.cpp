#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];
		if (k>n || k == 0)
		{
			cout<<-1<<endl;
		}
		else{
			if (n == k)
			{
				for (int i = 0; i < k; ++i)
			{
				cout<< i+1<<" ";
			}
			cout<<"\n";
			}
		    else if(n == k+1){
		    	arr[0] = n;
		    for (int i = 1; i < n; ++i)
		    {
		    	arr[i] = i+1;
		    }
		    arr[n-1] = 1;
		    for (int i = 0; i<n; ++i)
		    {
		    	cout<<arr[i]<<" ";
		    }
		    cout<<"\n";
		}
		  else{
		  	arr[0] = n;
		    for (int i = 1; i < n; ++i)
		    {
		    	arr[i] = i;
		    }
		    k--;
		    for (int i = 1; k-- ; ++i)
		    {
		    	swap(arr[i],arr[i+1]);
		    }
		    for (int i = 0; i < n; ++i)
		    {
		    	cout<<arr[i]<<" ";
		    }
		    cout<<"\n";
		  }


	}
	}	
}