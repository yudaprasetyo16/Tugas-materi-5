#include <iostream>
using namespace std;

void tambah (int x, int y){
	int hasil;
	
	hasil = x + y;
	cout<<"Hasil : "<<hasil<<endl;
}
int main()
{
	int a,b;
	
	cout<<"masukkan bilangan pertama : " ;
	cin>>a;
    cout<<"masukkan bilangan kedua : " ;
	cin>>b;
	
	tambah (a,b) ;
	 
	
	return 0;
		 
}
