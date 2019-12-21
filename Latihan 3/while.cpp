#include <iostream>

using namespace std;

int main(){
  int n;
  cout<<"MELETAKAN ANGKA UNTUK MULAI:";
  cin>>n;
  while(n>0)
  {
  cout<<n<<",";
  --n;
  }
  cout<<"STOP!";
  return 0;
}

