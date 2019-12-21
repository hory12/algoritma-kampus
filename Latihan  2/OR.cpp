#include <iostream>
using namespace std;
 
int main(){
   int a, hasilSebenarnya, hasilNOT;
   cout<<"Masukan Nilai A = "; cin>>a;
 
    hasilSebenarnya = (a + 5 < 15);
    hasilNOT = !(a + 5 < 15);
 
   cout<<"= Program Ekspresi NOT ="<<endl;
   cout<<"========================"<<endl;
   cout<<"Nilai A               = "<<a<<endl;
   cout<<"Nilai hasilSebenarnya = (a + 4 < 10) = "<<hasilSebenarnya<<endl;
   cout<<"Nilai hasilNOT        = !(hasilSebenarnya) atau !(a + 5 < 15) = "<<hasilNOT;
   return 0;
}

