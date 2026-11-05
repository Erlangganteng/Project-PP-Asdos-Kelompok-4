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
        double totalTidur = 0;
            int totalAir = 0;
            int totalOlahraga = 0;
        
            for (int i = 0; i < hari; i++) {
                totalTidur += tidur[i];
                totalAir += air[i];
                totalOlahraga += olahraga[i];
            }
        
          
            double rataTidur = totalTidur / hari;
            double rataAir = (double)totalAir / hari;
            double rataOlahraga = (double)totalOlahraga / hari;
        
            double skorTidur = rataTidur / targetTidur * 100;
            if (skorTidur > 100) {
                skorTidur = 100;
            }
        
            double skorAir = rataAir / targetAir * 100;
            if (skorAir > 100) {
                skorAir = 100;
            }
        
            double skorOlahraga = rataOlahraga / targetOlahraga * 100;
            if (skorOlahraga > 100) {
                skorOlahraga = 100;
            }
        
            double skor = (skorTidur * 0.4) + (skorAir * 0.3) + (skorOlahraga * 0.3);

    cout << "==========================================\n";
    cout << "          REKAP DATA MINGGUAN\n";
    cout << "==========================================\n";
    cout << "Hari\tTidur(jam)\tAir(gelas)\tOlahraga(mnt)\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < hari; i++) {
        cout << (i + 1) << "\t" << tidur[i] << "\t\t" << air[i] << "\t\t" << olahraga[i] << "\n";
    }
    cout << "------------------------------------------\n";
    cout << "Rata-rata tidur     : " << rataTidur << " jam/hari\n";
    cout << "Total air           : " << totalAir << " gelas (rata-rata " << rataAir << "/hari)\n";
    cout << "Total olahraga      : " << totalOlahraga << " menit (rata-rata " << rataOlahraga << "/hari)\n";
    cout << "Skor kesehatan      : " << skor << "%\n";
    if (rataTidur < 6) {
        cout << "[PERINGATAN] Rata-rata tidur kurang dari 6 jam!\n";
        cout << "  Saran: Kurangi begadang dan usahakan tidur 7-8 jam per hari.\n";
    } else if (rataTidur < 7) {
        cout << "[INFO] Tidur cukup, namun belum ideal.\n";
        cout << "  Saran: Tambah durasi tidur hingga 7-8 jam per hari.\n";
    } else {
        cout << "[BAIK] Durasi tidur sudah ideal. Pertahankan!\n";
    }
    if (rataAir < targetAir) {
        cout << "[PERINGATAN] Konsumsi air di bawah target (" << targetAir << " gelas/hari)!\n";
        cout << "  Saran: Bawa botol minum dan biasakan minum secara rutin.\n";
    } else {
        cout << "[BAIK] Konsumsi air sudah memenuhi target. Pertahankan!\n";
    }
}