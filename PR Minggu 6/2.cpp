// Nomor 2
// Fiorella Averina Gunawan
// 19/443579/TK/48775

//Mengimpor library
#include <iostream>
using namespace std;

int main(){
    //Deklarasi variabel
    int n, i;
    //Meminta input jumlah mahasiswa dari user
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    //Mendeklarasikan array nilai dan selisih sebanyak n elemen untuk n mahasiswa
    int nilai[n], selisih[n];
    
    //Meminta input nilai mahasiswa dari user
    for (i = 1; i<=n; i++) {
        cout << "Masukkan nilai mahasiswa " << i << ": ";
        cin >> nilai[i];
        if (nilai[i]>=1 && nilai[i]<=100){
            if (nilai[i]>=38){
                selisih[i] = 5-(nilai[i]%5);
                if(selisih[i]<3){
                    nilai[i] = nilai[i]+5-(nilai[i]%5);
                    //Nilai dibulatkan menjadi angka kelipatan 5 terdekat di atas nilai
                }
                else{
                    nilai[i] = nilai[i]; //Tidak dibulatkan
                }
            }
            else {
                nilai[i] = nilai[i]; //Tidak dibulatkan
            }
        //Menampilkan nilai mahasiswa
        cout << "Nilai mahasiswa " << i << ": " << nilai[i] << endl;
        }
        else{
            cout << "Di luar jangkauan nilai" << endl;
        }
    }
    return 0;
}