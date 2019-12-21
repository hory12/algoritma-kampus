#include <iostream>
#include <conio.h>
using namespace std;
main(){
int n,i=1;
float nilai,rata,jml=0;
cout<<"Input banyak nilai = ";cin>>n;
do
{cout<<"Input Nilai "<<i<<" = " ;cin>>nilai;
jml=jml+nilai;
rata=jml/n;
i++;}
while(i<=n);
cout<<"\nTotal nilai = "<<jml;
cout<<"\nRata nilai = "<<rata;
getch();}

