#include  <iostream>
using namespace std; 

float persegi(float s, float L = 0){
	L = s*s;
	return L;	
};

float lingkaran (float r, float L = 0){
	L = r*r*3.14;
	return L;
}

float tabung (float r, float t, float L = 0){
	L = r*r*3.14*t;
	return L;
}

int main (){
	
	int Pil, i, Ulang=1;
	float s,r,t,L;
	
	cout << "===============================================================" << endl
		 << "Program Menghitung Luas Persegi, Luas Lingkaran & Volume Tabung" << endl 
		 << "===============================================================" << endl
		 << "\nPilih Program : " << endl
		 << "1. Luas Persegi"<< endl
		 << "2. Luas Lingkaran" << endl
		 << "3. Volume Tabung" << endl;
			 
	for (i=0; i<Ulang; i++){
		cout << "\nMasukkan Pilihan (1/2/3): ";
			 
		cin >> Pil;
		
		if (Pil==1){
			cout << "\nMemilih Luas Persegi" << endl 
				 << "Masukkan Panjang Sisi : ";
			cin >> s;
			cout << "Luas Persegi = " << persegi(s);
		}
		else if(Pil==2){
			cout << "\nMemilih Luas Lingkaran" << endl
				 << "Masukkan Jari-Jari : ";
			cin >> r;
			cout << "Luas Lingkaran = " << lingkaran(r);
		}
		else if (Pil==3){
			cout << "\nMemilih Volume Tabung" << endl
				 << "Masukkan Jari-Jari : ";
			cin >> r;
			cout << "Masukkan Tinggi : ";
			cin >> t;
			cout << "Volume Tabung = " << tabung(r,t);
		}
		else {
			cout << "Pilihan tidak ditemukan, mengulang program.";
			Ulang++;
		}
		
		char yn;
        cout << "\n\nApakah anda ingin menghitung lagi? (y/n) ";
        cin >> yn;

        if (yn == 'y' || yn == 'Y') {  
        	Ulang++;
		}else{
			cout << "Program Selesai.";
            Ulang = 0;
		}
	}
	
	return 0;
}
