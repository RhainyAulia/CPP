/* Soal nomor 2
Program Terbilang
input : sebuah bilangan bulat (misalnya : 1546)
output: #seribu limaratus empatpuluh enam rupiah#

Kelompok 4
Astria Dwi Savitri 232310033
Rhainy Aulia 232310034
Widya Lintang Lestari 232310037
Layn Khaleed Bakrman 232310045

TI23PA Mei 2024*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> satuan = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
vector<string> belasan = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
vector<string> puluhan = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
vector<string> ribuan = {"", "ribu", "juta", "milyar", "triliun"};

string twoDigitsToWords(int num) {
    if (num < 10) {
        return satuan[num];
    } else if (num < 20) {
        return belasan[num - 10];
    } else {
        string result = puluhan[num / 10];
        if (num % 10 > 0) {
            result += " " + satuan[num % 10];
        }
        return result;
    }
}

string threeDigitsToWords(int num) {
    string result = "";

    if (num >= 100) {
        if (num / 100 == 1) {
            result += "seratus ";
        } else {
            result += satuan[num / 100] + " ratus ";
        }
        num %= 100;
    }

    if (num > 0) {
        result += twoDigitsToWords(num);
    }

    return result;
}

string convert(int num) {
    if (num == 0) return "nol";

    string result = "";
    int thousandCounter = 0;

    while (num > 0) {
        int part = num % 1000;
        if (part != 0) {
            string segment = threeDigitsToWords(part);
            if (thousandCounter > 0) {
                segment += " " + ribuan[thousandCounter] + " ";
            }
            result = segment + result;
        }
        num /= 1000;
        thousandCounter++;
    }

    while (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    return result;
}

int main() {
    int num;
    cout << "Masukkan bilangan bulat: ";
    cin >> num;

    cout << "#" << convert(num) << " rupiah#" << endl;
    return 0;
}
