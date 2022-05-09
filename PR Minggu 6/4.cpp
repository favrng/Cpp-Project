// Nomor 4
// Fiorella Averina Gunawan
// 19/443579/TK/48775

//Mengimpor library
#include <iostream>
using namespace std;

int main(){
    //Deklarasi variabel
    int a, b, i;
    //Meminta input bilangan awal dari user
    cout << "Masukkan bilangan awal: ";
    cin >> a;
    
    //Jika syarat 1 < a < b < 9999... terpenuhi,
    if (a>1){
        cout << "Masukkan bilangan akhir: ";
        cin >> b;
        if (b>a){
            for (i=a; i<=b; i++){ //Loop untuk mencetak keterangan angka
                if (i>1 && i<=9){ 
                    //Saat angka lebih dari 1 dan kurang dari sama dengan 9
                    switch (i){
                        case 2:
                            cout << "Dua" << endl;
                            break;
                        case 3:
                            cout << "Tiga" << endl;
                            break;
                        case 4:
                            cout << "Empat" << endl;
                            break;
                        case 5:
                            cout << "Lima" << endl;
                            break;
                        case 6:
                            cout << "Enam" << endl;
                            break;
                        case 7:
                            cout << "Tujuh" << endl;
                            break;
                        case 8:
                            cout << "Delapan" << endl;
                            break;
                        case 9:
                            cout << "Sembilan" << endl;
                            break;
                    }
                }
                else if (i>9){
                    //Saat angka lebih besar dari 9
                    if (i%2 == 0){
                        cout << "Genap" << endl;
                    }
                    else if(b%2 == 1){
                        cout << "Ganjil" << endl;
                    }
                }
                else{
                    cout << "Di luar jangkauan bilangan" << endl;
                }
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