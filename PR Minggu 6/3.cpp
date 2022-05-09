// Nomor 3
// Fiorella Averina Gunawan
// 19/443579/TK/48775

//Mengimpor library
#include <iostream>
using namespace std;

int main(){
    //Deklarasi variabel
    int a, b;
    //Meminta input bilangan pertama dan kedua dari user
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    
    //Batas bilangan a
    if (a>=1 && a<=99){
        //Batas bilangan b
        if(b>=1 && b<=99){
          cout << "Sum: " << a+b << endl; //Menghitung jumlah a dan b
            //Perbandingan bilangan untuk menghitung selisih kedua bilangan
            if (a >= b){
                cout << "Difference: " << a-b << endl;
            }
            else {
                cout << "Difference: " << b-a << endl;
            }  
        }
        else{
            cout << "Di luar jangkauan bilangan" << endl;
        }
    }
    else {
        cout << "Di luar jangkauan bilangan" << endl;
    }

    return 0;
}