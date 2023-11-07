#include <iostream>
using namespace std;

main (){
	int matriks1[10][10], matriks2[10][10], hasil[10][10];
	int b1, k1, b2, k2, i, j, a, b, k, jumlah = 0;
	char x;
	
	cout << "\n\tProgram Menghitung 2 Matriks" << endl
	<< "===============================================";
	
	ulang:
		
	cout << endl << "\nMasukkan Jumlah Baris Matriks Pertama : ";
	cin >> b1;
	cout << "Masukkan Jumlah Kolom Matriks Pertama : ";
	cin >> k1;
	
	cout << "\tMatriks  " << b1 << " * " << k1 << endl;
	
	cout << endl << "Masukkan Jumlah Baris Matriks Kedua : ";
	cin >> b2;
	cout << "Masukkan Jumlah Kolom Matriks Kedua : ";
	cin >> k2;
	
	cout << "\tMatriks  " << b2 << " * " << k2 << endl;
	
	cout << "\nMasukkan Elemen Matriks Pertama: \n";
    for(i = 0; i < b1; i++){
      for(j = 0; j < k1; j++){
        cout << "Data Baris ke-" << i+1 << " & Kolom ke-" << j+1 << " = ";
		cin >> matriks1[i][j];
      }
    }
    
    cout << endl << "\tMatriks Pertama" << endl;
	for (int i = 0; i < b1; i++){
		cout << "\t\t";
        for (int j = 0;j < k1; j++){ 
                cout << matriks1[i][j] << " ";
    	}
		cout << endl;
	}
	
    cout << "\nMasukkan Elemen Matriks Kedua: \n";
    for(a = 0; a < b2; a++){
      for(b = 0; b < k2; b++){
        cout << "Data Baris ke-" << a+1 << " & Kolom ke-" << b+1 << " = ";
		cin >> matriks2[a][b];
      }
    }
    
    cout << endl << "\tMatriks Kedua" << endl;
	for (int a = 0; a < b2; a++){
		cout << "\t\t";
        for (int b = 0;b < k2; b++){ 
                cout << matriks2[a][b] << " ";
    	}
		cout << endl;
	}
    
    if (i != a && j != b){
    	cout << endl << "Jumlah Elemen Kedua Matriks TIDAK SAMA, tidak dapat melakukan Penjumlahan & Pengurangan\n";
	} else {
	    cout << endl << "\tPenjumlahan Matriks = " << endl;
	    for (i = 0; i < b1; i++){
	    	cout << "\t\t";
	    	for (j = 0; j < k1; j++){
	    		hasil[i][j] = matriks1[i][j] + matriks2[i][j];
				cout << hasil[i][j] << "\t";
	    	}
	    	cout << endl;
		}
		
		cout << endl << "\tPengurangan Matriks = " << endl;
	    for (i = 0; i < b1; i++){
	    	cout << "\t\t";
	    	for (j = 0; j < k1; j++){
	    		hasil[i][j] = matriks1[i][j] - matriks2[i][j];
				cout << hasil[i][j] << "\t";
	    	}
	    	cout << endl;
		}
	}
    
    if (k1 != b2) {
    	cout << endl << "\nKolom Matriks Pertama TIDAK SAMA dengan Baris Matriks Kedua, tidak dapat melakukan Perkalian\n";
	}else{
		cout << endl << "\tPerkalian Matriks = " << endl;
    	for (i = 0; i < b1; i++) {
	        cout << "\t\t";
	        for (j = 0; j < k2; j++) {
	            hasil[i][j] = 0;
	            for (k = 0; k < k1; k++) {
	                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
	            } 
	            cout << hasil[i][j] << "\t";
	        }
	        cout << endl;
    	}
	}

cout << "\nApakah anda ingin memakai program ini lagi? (y/t)" << endl;
cin >> x; 
if (x == 'y' || x =='Y'){
	goto ulang ;
}else if(x == 't' || x == 'T'){
	cout << "Program Selesai.";
}else{
	cout << "Tidak Valid. Program Selesai.";
}


}
