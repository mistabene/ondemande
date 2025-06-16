#include <iostream>
#include <string>
using namespace std;

class DATA_KTP {
private:
	struct KTP {
		string nama;
		string tempat_l;
		string agama;
		string gender;
		string status_p;
		string pekerjaan;
		string kewarganegaraan;
		string alamat;
		
		int nik;
		int tanggal_l;
		int bulan_l;
		int tahun_l;
		
		char jk;
		
	};
	
	KTP ktp[5];
	KTP sementara;
	
	int pil_agama;
	int jum_ktp = 0;

    void pilih_jk() {
        cout << "Jenis Kelamin (L/P) : ";
        cin >> ktp[jum_ktp].jk;

        if (ktp[jum_ktp].jk == 'L' || ktp[jum_ktp].jk == 'l') {
            ktp[jum_ktp].gender = "Laki-Laki";
        } else if (ktp[jum_ktp].jk == 'P' || ktp[jum_ktp].jk == 'p') {
            ktp[jum_ktp].gender = "Perempuan";
        } else {
            cout << "Input salah. Masukkan L atau P." << endl;
            pilih_jk();
        }
    }

    void pilih_agama() {
        cout << "Pilih Agama anda    :" << endl;
        cout << "1. Islam" << endl;
        cout << "2. Kristen" << endl;
        cout << "3. Katolik" << endl;
        cout << "4. Hindu" << endl;
        cout << "5. Buddha" << endl;
        cout << "6. Konghuchu" << endl;
        cout << "Pilihan (1-6): ";
        cin >> pil_agama;

        switch (pil_agama) {
            case 1:
				ktp[jum_ktp].agama = "Islam"; 
				break;
            case 2:
				ktp[jum_ktp].agama = "Kristen";
				break;
            case 3:
				ktp[jum_ktp].agama = "Katolik";
				break;
            case 4:
				ktp[jum_ktp].agama = "Hindu";
				break;
            case 5:
				ktp[jum_ktp].agama = "Buddha";
				break;
            case 6:
				ktp[jum_ktp].agama = "Konghuchu";
				break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
                pilih_agama();
                break;
        }
    }

public:
    void input() {
    	system("pause");
    	system("cls");
    	
    	cin.ignore();
        cout << "     Input Data KTP     " << endl;
        cout << "________________________" << endl;
        cout << "Nama                : ";
        getline(cin, ktp[jum_ktp].nama);
        cout << "NIK                 : ";
        cin >> ktp[jum_ktp].nik;
        cout << "Tempat Lahir        : ";
        cin.ignore();
        getline(cin, ktp[jum_ktp].tempat_l);
        cout << "Tanggal Lahir       : ";
        cin >> ktp[jum_ktp].tanggal_l;
        cout << "Bulan Lahir         : ";
        cin >> ktp[jum_ktp].bulan_l;
        cout << "Tahun Lahir         : ";
        cin >> ktp[jum_ktp].tahun_l;
        pilih_jk();
        cin.ignore();
        cout << "Alamat              : ";
        cin.ignore();
        getline(cin, ktp[jum_ktp].alamat);
        pilih_agama();
        cin.ignore();
        cout << "Status Perkawinan   : ";
        getline(cin, ktp[jum_ktp].status_p);
        cout << "Pekerjaan           : ";
        cin.ignore();
        getline(cin, ktp[jum_ktp].pekerjaan);
        cout << "Kewarganegaraan     : ";
        cin.ignore();
        getline(cin, ktp[jum_ktp].kewarganegaraan);
        
        jum_ktp++;
    }

    void tampil() {
    	system("pause");
    	system("cls");
    	
    	for (int i=0; i<jum_ktp; i++) {
        cout << "       Data KTP       " << endl;
        cout << "______________________" << endl;
        cout << "Nama                  : " << ktp[i].nama << endl;
        cout << "NIK                   : " << ktp[i].nik << endl;
        cout << "Tempat, Tanggal Lahir : " << ktp[i].tempat_l << ", " << ktp[i].tanggal_l << "-" << ktp[i].bulan_l << "-" << ktp[i].tahun_l << endl;
        cout << "Jenis Kelamin         : " << ktp[i].gender << endl;
        cout << "Alamat                : " << ktp[i].alamat << endl;
        cout << "Agama                 : " << ktp[i].agama << endl;
        cout << "Status Perkawinan     : " << ktp[i].status_p << endl;
        cout << "Pekerjaan             : " << ktp[i].pekerjaan << endl;
        cout << "Kewarganegaraan       : " << ktp[i].kewarganegaraan << endl << endl;
        
		}
    }
    
    void ganti_urut() {
	    if (jum_ktp < 2) {
	        cout << "Data belum cukup untuk diurutkan.\n";
	        return;
	    }
	
	    int pilihan;
	    cout << "\nUrutkan berdasarkan:" << endl;
	    cout << "1. Nama (A-Z)" << endl;
	    cout << "2. NIK (terkecil ke terbesar)" << endl;
	    cout << "Pilihan: ";
	    cin >> pilihan;
	
	    for (int i = 0; i < jum_ktp - 1; i++) {
	        for (int j = 0; j < jum_ktp - i - 1; j++) {
	            bool tukar = false;
	
	            if (pilihan == 1 && ktp[j].nama > ktp[j + 1].nama) {
	                tukar = true;
	            } else if (pilihan == 2 && ktp[j].nik > ktp[j + 1].nik) {
	                tukar = true;
	            }
	
	            if (tukar) {
	                // Tukar elemen dengan variabel sementara (bukan swap())
	                KTP temp;
	                temp = ktp[j];
	                ktp[j] = ktp[j + 1];
	                ktp[j + 1] = temp;
	            }
	        }
	    }
	
	    cout << "Data berhasil diurutkan." << endl;
	}
};

int main() {
    DATA_KTP orang;
    int pilih;
    
    do {
    	
    	cout << "          MENU KTP          " << endl;
		cout << "____________________________" << endl;
		cout << "1. Masukkan Data KTP Baru   " << endl;
		cout << "2. Lihat Data KTP           " << endl;
		cout << "3. Ganti Urutan Daftar KTP  " << endl;
		cout << "4. Keluar                   " << endl; 
		cout << "____________________________" << endl;
		cout << "Masukkan pilihan anda : ";
		cin >> pilih;
		
		switch (pilih) {
			case 1:
				orang.input();
				system("pause");
    			system("cls");
				break;
				
			case 2:
				orang.tampil();
				system("pause");
    			system("cls");
    			break;
    			
    		case 3:
    			orang.ganti_urut();
    			system("pause");
    			system("cls");
    			break;
    			
    		case 4:
    			cout << "Terimakasih telah menggunakan program ini!" << endl;
    			break;
    			
    		default:
    			cout << endl << "Pilihan tidak tersedia!" << endl;
    			system("pause");
    			system("cls");
    			break;
		}
	} while (pilih != 4);
    
    return 0;
}

