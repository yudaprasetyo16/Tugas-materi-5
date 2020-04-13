#include <iostream>
using namespace std;

int tambah (int r, int t){
	int volume;
	
	volume = (3.14*r*r*t) ;
	cout<<"volume tabung adalah : "<<volume<<endl;
	return volume;
}
int main()
{
	float r;
	float t;
	float volume;
	
	cout<<"masukkan jari-jari tabung : " ;
	cin>>r;
    cout<<"masukkan tinggi tabung : " ;
	cin>>t;
	
	volume = tambah (r,t);
	cout<<"volume tabung adalah : "<<volume<<endl;
	
	system ("pause") ;
	return 0;
		 
}
