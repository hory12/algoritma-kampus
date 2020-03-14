#include <iostream>
using namespace std;

int main (){
	
	cout<<"===Program Pembayaran===== "<<endl;
	unsigned int total_belanja;
	cout<< "Masukan Total Belanja : ";
	cin>>total_belanja;
	
	if(total_belanja > 100000){
		cout<<"Selamat anda dapat hadiah"<<endl;
		
	}else{
		cout<<"Terimaksih sudah berbelanja"<<endl;
	}
	return 0;
}
