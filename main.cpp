#include <iostream>
using namespace std;

int main() {
    int hari = 7;

  
    int targetAir = 8;          
    double targetTidur = 8.0;   
    int targetOlahraga = 30;    

    
    double tidur[7];
    int air[7];
    int olahraga[7];

    cout << "PENCATAT KEBIASAAN HARIAN MAHASISWA\n";
   
    cout << "Masukkan data selama " << hari << " hari.\n\n";


    for (int i = 0; i < hari; i++) {
        cout << "--- Hari ke-" << (i + 1) << " ---\n";

        cout << "Durasi tidur (jam)      : ";
        cin >> tidur[i];
        while (tidur[i] < 0 || tidur[i] > 24) {
            cout << "Input tidak valid (0-24). Ulangi : ";
            cin >> tidur[i];
        }

        cout << "Jumlah minum air (gelas): ";
        cin >> air[i];
        while (air[i] < 0) {
            cout << "Input tidak valid. Ulangi        : ";
            cin >> air[i];
        }

        cout << "Durasi olahraga (menit) : ";
        cin >> olahraga[i];
        while (olahraga[i] < 0) {
            cout << "Input tidak valid. Ulangi        : ";
            cin >> olahraga[i];
        }
        cout << endl;
    }
}