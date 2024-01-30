#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Kambing {
public:
  string nama;
  int beratAwal;
  int tinggiAwal;
  string status;

  Kambing(string nama, int beratAwal, int tinggiAwal, string status) {
    this->nama = nama;
    this->beratAwal = beratAwal;
    this->tinggiAwal = tinggiAwal;
    this->status = status;
  }

  void printInfo() {
    cout << "Nama kambing: " << nama << endl;
    cout << "Berat badan awal: " << beratAwal << " kg" << endl;
    cout << "Tinggi badan awal: " << tinggiAwal << " cm" << endl;
    cout << "Status: " << status << endl;
  }
};

int main() {
  vector<Kambing> kambing;

  // Menu program
  int pilihan;
  do {
    cout << "\nMenu program data kambing Pak Haji Slamet:" << endl;
    cout << "1. Tambah data kambing baru" << endl;
    cout << "2. Tampilkan data kambing" << endl;
    cout << "3. Keluar program" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1: {
        string nama;
        int beratAwal, tinggiAwal;
        string status;

        cout << "Masukkan nama kambing: ";
        getline(cin, nama);

        cout << "Masukkan berat badan awal (kg): ";
        cin >> beratAwal;

        cout << "Masukkan tinggi badan awal (cm): ";
        cin >> tinggiAwal;

        cout << "Masukkan status kambing (dijual/mati): ";
        getline(cin, status);

        kambing.push_back(Kambing(nama, beratAwal, tinggiAwal, status));
        cout << "Data kambing berhasil ditambahkan!" << endl;
        break;
      }
      case 2: {
        if (kambing.empty()) {
          cout << "Belum ada data kambing!" << endl;
        } else {
          for (Kambing k : kambing) {
            k.printInfo();
            cout << endl;
          }
        }
        break;
      }
      case 3: {
        cout << "Terima kasih telah menggunakan program data kambing Pak Haji Slamet!" << endl;
        break;
      }
      default: {
        cout << "Pilihan tidak valid!" << endl;
      }
    }
  } while (pilihan != 3);

  return 0;
}

