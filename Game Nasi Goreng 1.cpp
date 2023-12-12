#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string gameover (){
	return "\nGAME OVER";
}

char nasi(){
	
}

main (){
	
	char nasipil;
	
	cout << setw(62) <<"Membuat Nasi Goreng!" << endl
		 << setw(59) <<"A Game by Rhainy" << endl;
		 
	
	cout << endl << "\t1. Pilih Jenis Nasi" << endl
		 << "\t\t a. Nasi putih" << endl
		 << "\t\t b. Nasi merah" << endl
		 << "\t\t c. Tidak pakai nasi" << endl
		 << "\t   Mau yang mana? (a/b)";
	cin >> nasipil;
	
	if (nasipil == 'c' || nasipil == 'C'){
		
		cout << endl << "Buat apa bikin nasi goreng njir...";
		cout << gameover();
	}
}
