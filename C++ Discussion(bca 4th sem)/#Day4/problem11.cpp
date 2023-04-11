// by prathana
#include<iostream>
using namespace std;

int main(){
	int passmark=30;
	cout<<"enter your mark";
	int yourmark;
	
	cin>>yourmark;
     
	// 16   > 30  false
	if(yourmark > passmark){
		cout<<"you are pass"<<endl;
	}else{
		cout<<"you are fail"<<endl;
	}
	return 0;
}