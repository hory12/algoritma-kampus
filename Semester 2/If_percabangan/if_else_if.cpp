#include  <iostream>
using namespace std;

int main (){
	string nilai;
	
	cout<<"==Program grade nilai=="<<endl;
	cout<<"Inputkan nilai Akhir : ";
	cin>>nilai;
	
	if(nilai >90){
		grade = "A";
	}elseif(nilai >= 80){
			grade = "B+";
	}elseif(nilai >= 70){
		grade = "B";
	}elseif(nilai >= 60){
		grade = "c+";
	}
	
	cout<<"Grade Nilai"<<nilai<<endl;
	return 0;
}
