#include<iostream>
using namespace std;
int main(){
	int tc,r,c;cin>>tc;
	for(int i=0;i<tc;i++){
		cin>>r>>c;
		cout<<"Case #"<<i+1<<":"<<endl;

		for(int j=0;j<2*r+1;j++){
			if(j&1){//row odd | .
				for(int k=0;k<2*c+1;k++){
					if(j==0&&k==0 || j==0&&k==1 || j==1&&k==0){
						cout<<".";
					}else{
					if(k&1)
						cout<<".";
					else
						cout<<"|";}
				}cout<<"\n";
			}else{//row even + -
				for(int k=0;k<2*c+1;k++){
					if(j==0&&k==0 || j==0&&k==1 || j==1&&k==0){
						cout<<".";
					}else{
					if(k&1)
						cout<<"-";
					else
						cout<<"+";}
				}cout<<"\n";
			}
		}
	}
	return 0;
}
