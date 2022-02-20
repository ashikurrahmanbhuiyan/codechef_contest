#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		string a;
		int n;
		cin>>n;
		cin>>a;
		int l = n;
		int index1 = 0;
		int index2 = 0;
		for (int i = 0; i < l-3; ++i)
		{
			if (a[i] == 'c' && a[i+1] == 'o' && a[i+2]== 'd' && a[i+3] == 'e')
			{
				index1 = i;
				break;
			}
		}
		for (int i = 0; i < l-3; ++i)
		{
			if (a[i] == 'c' && a[i+1] == 'h' && a[i+2]== 'e' && a[i+3] == 'f')
			{
				index2 = i;
				break;
			}
		}
		if (index1 < index2)
		{
			cout<<"AC"<<endl;
		}
		else
			cout<<"WA"<<endl;
	}
}