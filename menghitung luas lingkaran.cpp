#include <iostream>
using namespace std;
int main(){
	//constanta untuk medeklarasikan nilai tetap
	const float phi =3.14;
	float L,r;
	
	//value r
	cout<<"masukkan jari jari lingkaran =";
	cin>>r;
	
	// proses perhitungan luas
	L = phi * r * r;
	
	//percantik bolh ga di bikin
	cout<<"diketahui lingaran dengan ="<<endl;
	cout<<"phi \t="<<phi<<endl;
	cout<<"r \t="<<r<<endl;
	cout<<"==================="<<endl;
	
	//penampilan hasil
	cout<<"luas lingkran dengan jari jari "<<r<<"cm"<<" adalah ";
	cout<<L<<"cm2";
	
}
