#include <iostream>
using namespace std;

int main()
{
	string pass;
	cout<<"**********************"<<endl;
	cout<<"*					*"<<endl;
	cout<<"*-------Login--------*"<<endl;
	cout<<"*					*"<<endl;
	cout<<"*					*"<<endl;
	cout<<"**********************"<<endl;
	
	cout<<" Masukan Password: ";
	cin>>pass;
	
	if(pass == "kopi"){
		cout<<"selamat datang"<<endl;
	}else{
		cout<<"password anda salah"<<endl;
	}
	
	cout<<"Terimakasih"<<endl;
	return 0;
}
