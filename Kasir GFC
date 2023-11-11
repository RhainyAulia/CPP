#include <iostream>
using namespace std;

int main (){
	
	string Kode[]={"D", "P", "S"}, 
		Potong[]={"Dada", "Paha", "Sayap"},
		jn[3];
	int Harga[]={2500, 2000, 1500},
		p[3],
		i,qj, j[3], Total, JB=0, p1=0;
		
	cout << "\t GEROBAK FRIED CHICHKEN" << endl <<
	"----------------------------------------" << endl <<
	"\tKode \tJenis \tHarga" << endl <<
	"----------------------------------------" << endl;
	
	for (i=0; i<3; i++){
		cout << "\t" << Kode[i] << " \t" << Potong[i] << "\t" << Harga [i];
		cout << endl;
	}
	
	cout << "\n\tBanyak Jenis = "; cin >> qj;
	for (i=0; i<qj; i++){
		cout << "\n\tJenis Potong Ke - " << i+1 << " [D/P/S] = "; cin >>jn[i];
		cout << "\tBanyak Potong Ke - " << i+1 << " = " ; cin >> p[i];
	}
	
	cout << "\n\t\t\t GEROBAK FRIED CHICKEN" << endl <<
	"------------------------------------------------------------------------" << endl <<
	"\tNo. \tJenis   \t Harga   \tBanyak   \tJumlah" << endl <<
	"\t \tPotong   \tSatuan   \t Beli \t\t Harga" << endl <<
	"------------------------------------------------------------------------" << endl ;
	
	for (i = 0; i < qj; i++) {
		
		Total = 0;
		
		if (jn[i] == "D"|| jn[i] == "d") {
    		j[i] = 0;
		} else if (jn[i] == "P" || jn[i] == "p") {
		    j[i] = 1;
		} else if (jn[i] == "S" || jn[i] == "s") {
		    j[i] = 2;
		} else {
		    cout << "Error";
		}
	
        cout << "\t" << i + 1 << ". \t" << Potong[j[i]] << "\t\t Rp. " << Harga[j[i]] << "\t   " << p[i] << "\t       Rp. ";

		Total += Harga[j[i]] * p[i];
		cout << Total << endl;
		JB += Total;

    }
	
	cout << "\n------------------------------------------------------------------------" << endl ;
	cout << "\t\t\t\t\t Jumlah Bayar \t       Rp. " << JB << endl;
	p1 = JB * 10 / 100;
	cout << "\t\t\t\t\t Pajak 10% \t       Rp. " << p1 << endl;
	cout << "\t\t\t\t\t Jumlah Bayar \t       Rp. " << JB+p1;

return 0;	
}
