//Mengimpor library
#include <iostream>
using namespace std;

int main(){
    //Deklarasi variabel
    double bilangan1, bilangan2;
    //Meminta input bilangan pertama dan kedua dari user
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
    
    //Perbandingan bilangan
    if (bilangan1 > bilangan2){
        cout << bilangan1 << ">" << bilangan2 << endl;
    }
    else if (bilangan1 == bilangan2){
        cout << bilangan1 << "=" << bilangan2 << endl;
    }
    else{
        cout << bilangan1 << "<" << bilangan2 << endl;
    }
    return 0;
}