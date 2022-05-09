// Nomor 5
// Fiorella Averina Gunawan
// 19/443579/TK/48775

//Mengimpor library
#include <iostream>
using namespace std;

int main(){
    //Deklarasi variabel
    int jumlahTeman;
    long tagihanPerOrang[99999], potongan[99999], sisa[99999];
    double n;
    int i = 1;
    
    //Meminta input dari user dan mendefinisikan batas variabel yang diterima
    cout << "Masukkan jumlah teman: ";
    cin >> jumlahTeman;
    if (jumlahTeman>1 && jumlahTeman<=99999){
        cout << "Diskon: ";
        cin >> n;
        if (n>1 && n<50){
            for (i=1; i<=jumlahTeman; i++){
                cout << "Tagihan teman " << i << ": ";
                cin >> tagihanPerOrang[i];
                if (tagihanPerOrang[i] >= 1000) {
                    potongan[i] = (n/100)*tagihanPerOrang[i]; //Potongan harga
                    sisa[i] = tagihanPerOrang[i]-potongan[i]; //Harga setelah diskon
                    cout << "Potongan: " << potongan[i] << endl;
                    cout << "Total tagihan teman " << i << ": " << sisa[i] << endl;
                }
                else {
                    cout << "Di luar jangkauan tagihan" << endl;
                }
            }
        }
        else {
            cout << "Di luar jangkauan besar diskon" << endl;
        }
    }
    else {
        cout << "Di luar jangkauan jumlah teman" << endl;
    }
    
    return 0;
}