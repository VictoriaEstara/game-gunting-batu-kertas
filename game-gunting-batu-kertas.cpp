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
