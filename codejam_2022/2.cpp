#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int tc,r,c,n,ans=0;cin>>tc;
	for(int i=0;i<tc;i++){
		ans=0;
		cin>>n;
		vector<int> v(n);
		for(int f=0;f<n;f++) cin>>v[f]; sort(v.begin(), v.end());
		cout<<"Case #"<<i+1<<": ";
		int req=1;

		for(int i=0; i<n; i++){
			if(v[i] >= req ){
				ans++; req++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
