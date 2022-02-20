#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		vector<int> v;
		vector<char> v1;
		vector<char> v2;
		int n;cin>>n;
		string s;cin>>s;
		if ((n%2) != 0)
		{
			cout<<"NO"<<endl;
		}
		else{
		sort(s.begin(),s.end());
		char a = 'a'; 
		while(1){
			if (s[0] == a)
			{
				break;
			}
			a++;}
		int max = 1,m = 1; 
		int i = 0;
		while(i<n)
	    {
			for (int j = i+1; j < n; ++j)
				{
					if (s[j] == s[i]){
						m++;
					}
					else
						break;
				}
				v.push_back(m);if(m>max){max = m;}
				i = i + m;
				m = 1;

	 	}

	 	if ((max*2)>n)
	 	{
	 		cout<<"NO"<<endl;
	 	}
	 	else{
	 		cout<<"YES"<<endl;
	 		int sum = 0;
	 		for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
	 		{
	 			if(((sum +(*i))*2)<=n){
	 			sum = sum +(*i);
	 			int nnn = *i;
	 			for (int i = 0; i < nnn; ++i)
	 			{
	 				v1.push_back(a);
	 			}
	 		}
	 			else
	 			{
	 				int lll = *i;
	 				for (int i = 0; i < lll; ++i)
	 				{
	 					v2.push_back(a);
	 				}
	 				
	 			}
	 			a++;
	 		}
	 		for (std::vector<char>::iterator i = v2.begin(); i != v2.end(); ++i)
	 		{
	 			cout<<*i;	
	 		}
	 		for (std::vector<char>::iterator i = v1.begin(); i != v1.end(); ++i)
	 		{
	 			cout<<*i;	
	 		}
	 		cout<<"\n";
	 	}
	 	
	 }
	}
	
}