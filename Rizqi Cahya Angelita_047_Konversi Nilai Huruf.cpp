#include <iostream>

using namespace std;

int main(){
	string hasil;
	int nilai;
	
	cout<<"Konversi Nilai Angka ke Nilai Huruf" ;
	cout<<"\nMasukkan Nilai Angka = "; cin>>nilai;
	
		switch(nilai){
		case 0 ... 34: 
		hasil="Nilai E";
		break;
		case 35 ... 49: 
		hasil="Nilai D";
		break;
		case 50 ... 64: 
		hasil="Nilai C";
		break;
		case 65 ... 79: 
		hasil="Nilai B";
		break;
		case 80 ... 100:
		hasil="Nilai A";
		break;
		
		default :
		cout<<"Nilai Yang di Inputkan Salah";
		}
	
	cout<<"Hasil Konversi = "<<hasil;
	
	return 0;
}
