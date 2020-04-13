#include <iostream>
using namespace std;

void tambah (int p, int l){
	int luas;
	luas = p * l;
	cout<<"luas persegi panjang adalah : "<<luas<<endl;
	
}
int main()
{
	float p;
	float l;
	float luas;
	
	cout<<"masukkan panjang persegi panjang : " ;
	cin>>p;
	
    cout<<"masukkan lebar persegi panjang : " ;
	cin>>l;
	
	tambah (p,l) ;
	 
	
	return 0;
		 
}
