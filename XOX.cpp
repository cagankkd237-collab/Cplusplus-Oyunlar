#include <iostream>

char tahta[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
};

void tahtayiCiz() {
    std::cout << "\n";
    std::cout << " " << tahta [0][0] << " | " << tahta [0][1] << " | " << tahta [0][2] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << tahta [1][0] << " | " << tahta [1][1] << " | " << tahta [1][2] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << tahta [2][0] << " | " << tahta [2][1] << " | " << tahta [2][2] << "\n";
    std::cout << "\n";

}

int main() {
    char sira = 'X';
    int secim;

    std::cout << "=== XOX OYUNUNA HOSGELDINIZ ===" << std::endl;

    while (true) {
        tahtayiCiz();

        std::cout << "Oyuncu " << sira << ", bir kutu sec (1-9): ";
        std::cin >> secim;

        if (secim == 1) tahta [0][0] = sira;
        else if (secim == 2) tahta [0][1] = sira;
        else if (secim == 3) tahta [0][2] = sira;
        else if (secim == 4) tahta [1][0] = sira;
        else if (secim == 5) tahta [1][1] = sira;
        else if (secim == 6) tahta [1][2] = sira;
        else if (secim == 7) tahta [2][0] = sira;
        else if (secim == 8) tahta [2][1] = sira;
        else if (secim == 9) tahta [2][2] = sira;
        else{
            std::cout << "Gecersiz secim!" << std::endl;
            continue;
        }
        bool kazandi = false;

        if (tahta [0][0] == tahta [0][1] && tahta [0][1] == tahta [0][2]) kazandi = true;
        else if (tahta [1][0] == tahta [1][1] && tahta [1][1] == tahta [1][2]) kazandi = true;
        else if (tahta [2][0] == tahta [2][1] && tahta [2][1] == tahta [2][2]) kazandi = true;
        else if (tahta [0][0] == tahta [1][0] && tahta [1][0] == tahta [2][0]) kazandi = true;
        else if (tahta [0][1] == tahta [1][1] && tahta [1][1] == tahta [2][1]) kazandi = true;
        else if (tahta [0][2] == tahta [1][2] && tahta [1][2] == tahta [2][2]) kazandi = true;
        else if (tahta [0][0] == tahta [1][1] && tahta [1][1] == tahta [2][2]) kazandi = true;
        else if (tahta [0][2] == tahta [1][1] && tahta [1][1] == tahta [2][0]) kazandi = true;

        if (kazandi == true) {
            tahtayiCiz();
        std::cout << "TEBRIKLER! Oyuncu " << sira << " kazandi!\n";
    break;
        }
        if (sira == 'X') {
            sira = 'O';
        } else {
            sira = 'X';
        }

        }
    }

