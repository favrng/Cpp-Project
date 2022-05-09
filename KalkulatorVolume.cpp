#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14;

int main(){
    int nomor_bangun;
    double d, h, l, luas_permukaan, volume;
    cout << "Masukkan kode bangunan (1 = tabung; 2 = kerucut): ";
    cin >> nomor_bangun;

   if (nomor_bangun >= 1 && nomor_bangun <= 2){
        cout << "Masukkan diameter bangunan: ";
        cin >> d;
        cout << "Masukkan tinggi bangunan: ";
        cin >> h;
         if (nomor_bangun == 1){
            luas_permukaan = 2*pi*(d/2)*h + 2*pi*(d/2)*(d/2);
            volume = pi*(d/2)*(d/2)*h;
        }
        else if (nomor_bangun == 2){
            l = sqrt(h*h + (d/2)*(d/2));
            luas_permukaan = pi*(d/2)*((d/2)+l);
            volume = (pi*(d/2)*(d/2)*h)/3;
        }
        cout << "Luas permukaan: " << luas_permukaan << endl;
        cout << "Volume: " << volume << endl;
    }
    else{
        cout << "Mohon masukkan kode bangunan yang valid." << endl;
    }
    return 0;
}