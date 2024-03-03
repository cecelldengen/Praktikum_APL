#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int i;
    string user,pass,choice;
 
    cout << endl << "Selamat datang di akun ceceldengen" << endl;
 
    for (i = 1; i < 4; i++) {
    cout << "Masukan username : ";
    cin >> user;
    cout << "Masukan password : ";
    cin >> pass;
  
        if(user == "cecel" && pass == "2309106003"){
            cout << "Anda berhasil login\n";
            break;
        }
        else {
            cout << "Username/Password anda salah" << i << "(x)" << endl;
        }
    }
    if (user != "cecel" && pass != "2309106003"){
	
    cout << "anda telah salah password sebanyak 3x \n"
         << "harap coba lagi dalam 81 jam kedepan";
         exit(EXIT_FAILURE);
	}
    double amount;
    
    do{
        // Mendapatkan jumlah uang dalam Rupiah
    cout << "tambahkan jumlah uang dalam Rupiah: ";
    cin >> amount;

    // Konversi Rupiah ke Dollar (1 USD = 15.700 IDR)
    double usdAmount = amount / 15700;

    // Konversi Rupiah ke Euro (1 EUR = 17.000 IDR)
    double eurAmount = amount / 17000;

    // Konversi Rupiah ke Yen (1 JPY = 104 IDR)
    double jpyAmount = amount / 104;

    // Menampilkan hasil konversi
    cout << "Jumlah dalam Dollar: $" << usdAmount << endl;
    cout << "Jumlah dalam Euro: €" << eurAmount << endl;
    cout << "Jumlah dalam Yen: ¥" << jpyAmount << endl;
    cout << "Apakah user ingin mengulang ? [y/n] ";
    cin >> choice;
    }
    while(choice == "y" || choice == "Y");
    return 0;
}