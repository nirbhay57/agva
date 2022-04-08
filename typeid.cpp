#include<iostream>
#include<typeinfo>

using namespace std;

int main(){
	int i;float f; double d; char cjj;long l; long long ll;long double ld;
	cout<<typeid(i).name()<<endl;
	cout<<typeid(f).name()<<endl;
	cout<<typeid(d).name()<<endl;
	cout<<typeid(cjj).name()<<endl;
	cout<<typeid(l).name()<<endl;
	cout<<typeid(ll).name()<<endl;
	cout<<typeid(ld).name()<<endl;
	return 0;
}
