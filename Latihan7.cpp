//Mengimpor library
#include <iostream>
using namespace std;

int main(){
    //Deklarasi variabel
    double bilangan1, bilangan2, bilangan3;
    double max, min;
    //Meminta input bilangan 1, 2, 3 dari user
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
    cout << "Masukkan bilangan ketiga: ";
    cin >> bilangan3;

    //Perbandingan bilangan untuk mencari max dan min
    if (bilangan1 > bilangan2){
        if (bilangan1 > bilangan3){
            max = bilangan1;
            if(bilangan2 > bilangan3){
                min = bilangan3;
            }
            else{
                min = bilangan2;
            }
        }
        else{
            max = bilangan3;
            min = bilangan2;
        }
    }
    else if (bilangan2 > bilangan3){
        max = bilangan2;
        if (bilangan1 > bilangan3){
            min = bilangan3;
        }
        else{
            min = bilangan1;
        }
    }
    else {
        max = bilangan3;
        min = bilangan1;
    }
    //Print hasil bilangan
    cout << "Bilangan terbesar: " << max << endl;
    cout << "Bilangan terkecil: " << min << endl;

    return 0;
}
