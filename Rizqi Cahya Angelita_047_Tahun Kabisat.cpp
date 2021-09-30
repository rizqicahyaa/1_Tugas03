#include <iostream>

using namespace std;

int main(){
	int tahun;
	
	cout<<"Perhitungan Tahun Kabisat";
	cout<<"\nMasukkan Tahun =  "; cin>>tahun;
	cout<<"Hasil Perhitungan Menunjukkan Pada Tahun "<<tahun;
	if (tahun%4==0){
		cout<<" Termasuk Tahun Kabisat";
	} else {
		cout<<" Bukan Termasuk Tahun Kabisat";
	}
		return 0;
	
}
