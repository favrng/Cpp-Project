// Nomor 1
// Fiorella Averina Gunawan
// 19/443579/TK/48775

//Mengimpor library
#include <iostream>
using namespace std;

int main(){
    //Deklarasi variabel
    int n, last_digit;
    int i = 1; //Counter
    //Meminta input bilangan dari user
    cout << "Masukkan bilangan: ";
    cin >> n;
    
    //Decision, apakah habis dibagi 9 atau tidak
    if (n%9 == 0){
        cout << "Bilangan " << n << " habis dibagi 9" << endl;
    }
    else{
        cout << "Bilangan " << n << " tidak habis dibagi 9" << endl;
    }
    
    //Mencetak setiap digit angka
    while(n!=0){
        last_digit = n%10; //Menyimpan digit terakhir di variabel last_digit
        cout << "Digit ke-" << i << ": " << last_digit << endl;
        n = n/10; //Mengeliminasi digit terakhir
        i++;
    }
    return 0;
}