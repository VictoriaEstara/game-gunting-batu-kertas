## Gambaran Umum

Kode ini berfungsi untuk membuat game sederhana 1 vs 1 yang sering dimainkan oleh anak-anak indonesia, yakni game gunting, batu, dan kertas.

Fitur-fitur:

1️⃣ Mampu mengurutkan bilangan terkecil dan terbesar dari data array bertipe integer.  

2️⃣ Mampu mengurutkan nama-nama berdasarkan abjad secara ASC (Asceding) dari data array bertipe char atau string.

3️⃣ Mampu mengurutkan nama-nama berdasarkan abjad secara DESC (Descending) dari data array bertipe char atau string.

4️⃣ Mampu menampilkan jumlah data array.

## Bahasa Pemrograman

Kode proyek ini ditulis menggunakan bahasa pemrograman C++.

## Software Pendukung

Proyek ini dikembangkan menggunakan [Dev-C++ v5.11](https://sourceforge.net/projects/orwelldevcpp/). Pastikan Anda memiliki Dev-C++ terpasang sebelum menjalankan proyek.

## Cara Penggunaan

1. Buka proyek menggunakan Dev-C++.
2. Jalankan aplikasi dengan melakukan compile dan Run (shortcut F11).
3. Ikuti petunjuk.

## Contoh Penggunaan Program

```cpp
// Library yang digunakan
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Seed untuk generator angka acak
    srand(time(0));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        // Pilihan player 1 dan player 2
        int userChoice, computerChoice;

        cout << "Pilih:\n";
        cout << "1. Gunting\n";
        cout << "2. Batu\n";
        cout << "3. Kertas\n";
        cout << "\nMasukkan nomor pilihan Anda sebagai Player 1 (1-3): ";
        cin >> userChoice;

        // Validasi input player 1
        if (userChoice < 1 || userChoice > 3) {
            cout << "Pilihan tidak valid. Program berhenti.\n";
            return 1; 
        }

        // Pilihan player 2 (acak antara 1-3)
        computerChoice = rand() % 3 + 1;

        // Menampilkan pilihan player 1 dan player 2
        cout << "\nPlayer 1 memilih: ";
        switch (userChoice) {
            case 1:
                cout << "Gunting\n";
                break;
            case 2:
                cout << "Batu\n";
                break;
            case 3:
                cout << "Kertas\n";
                break;
        }

        cout << "Player 2 memilih: ";
        switch (computerChoice) {
            case 1:
                cout << "Gunting\n";
                break;
            case 2:
                cout << "Batu\n";
                break;
            case 3:
                cout << "Kertas\n";
                break;
        }

        // Menentukan winner
        if (userChoice == computerChoice) {
            cout << "\nHasil: Seri!\n";
        } else if (
            (userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)
        ) {
            cout << "\nHasil: Player 1 menang!\n";
        } else {
            cout << "\nHasil: Player 2 menang!\n";
        }

        // Menanyakan apakah pengguna ingin bermain lagi
        cout << "\nApakah Anda ingin bermain lagi? (y/n): ";
        cin >> playAgain;
    }

    cout << "Terima kasih telah bermain!\n";

    return 0;
}
