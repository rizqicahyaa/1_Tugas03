#include <iostream>

using namespace std;

int main(){
	char nama[100], nik[16];
	int jenis_kelamin, status_pernikahan, tunjangan, kendaraan,transport, gaji_pokok, uang_makan, gaji_kotor, pajak, gaji_bersih;
	
	cout<<"Menghitung Gaji Karyawan";
	cout<<"\nMasukkan Nama = "; gets(nama);
	cout<<"Masukkan Nik = ";cin>>nik;
	cout<<"\nJenis Kelamin \n [0]Perempuan \n [1]Laki-Laki";
	cout<<"\nPilih Jenis Kelamin [0/1] = "; cin>>jenis_kelamin;
	cout<<"\nStatus Menikah \n [0]Single \n [1]Menikah";
	cout<<"\nPilih Status Menikah [0/1] = "; cin>>status_pernikahan;
	
	if(jenis_kelamin==1 && status_pernikahan==1){
		tunjangan = 500;
	}
	else{
		tunjangan = 0;
	}
	
	cout<<"\nKendaraan \n [0]Motor \n [1]Mobil \n [2]lainnya";
	cout<<"\nPilih Kendaraan [0/1/2] = "; cin>>kendaraan;
	
	if(kendaraan==0){
		transport = 500;
	}
	else if(kendaraan==1){
		transport = 1000;
	}
	else if(kendaraan==2){
		transport = 0;
	}
	cout<<"\nMasukkan Besar Gaji Pokok = Rp.";	cin>>gaji_pokok;
	cout<<"Masukkan Besar Uang Makan = Rp."; cin>>uang_makan;
	cout<<"Besar Uang Tunjangan = Rp."<<tunjangan;
	cout<<"\nBesar Uang Transport = Rp."<<transport;
	
	gaji_kotor=gaji_pokok+tunjangan+uang_makan+transport;
	cout<<"\nBesar Gaji Kotor = Rp."<<gaji_kotor;
	
	pajak=0.05*gaji_kotor;
	cout<<"\nPajak = Rp."<<pajak;
	
	gaji_bersih=gaji_kotor-pajak;
	cout<<"\nTotal Gaji Bersih = Rp."<<gaji_bersih;
	
	return 0;
}
