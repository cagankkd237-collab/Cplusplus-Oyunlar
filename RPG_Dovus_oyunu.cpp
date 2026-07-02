#include <iostream>
#include <cstdlib>
#include <ctime>

void yeniden_oyna_kontrol(int &oyuncu_can, int &dusman_can) {
int tekrar_oyna;
std::cout << "Yeniden oynamak ister misiniz? (1: Evet, 2: Hayir): ";
std::cin >> tekrar_oyna;

if (tekrar_oyna == 1) {
    oyuncu_can = 100;
    dusman_can = 100;
    std::cout << "YENI OYUN BASLADI" << std::endl;
} else {
    std::cout << "OYUN BITTI." << std::endl;
    exit(0);
}
}
int main() {
    srand(time (0));
    int oyuncu_can = 100;
    int dusman_can = 100;
    int oyuncu_hasari;
    int dusman_hasari;
    int can_iksiri;
    int secim;

    std::cout << "SAVAS BASLADI!" << std::endl;

    while (true) {
        std::cout << "------------------------" << std::endl;
        std::cout << "Oyuncu Can: " << oyuncu_can << std::endl;
        std::cout << " ------------------------" << std::endl;
        std::cout << "Dusman Can: " << dusman_can << std::endl;
        std::cout << "------------------------" << std::endl;
        std::cout << "1. Saldir" << std::endl;
        std::cout << "2. Can iksiri kullan" << std::endl;
        std::cout << "3. Cikis" << std::endl;
        std::cin >> secim;

        if (secim == 1) {
            oyuncu_hasari = rand() % 16 + 5;
            dusman_can -= oyuncu_hasari;
            std::cout << "Dusmana " << oyuncu_hasari << " hasar verdiniz!" << std::endl;
            if (dusman_can <= 0) {
                std::cout << "DUSMAN YENILDI! KAZANDINIZ!" << std::endl;
                yeniden_oyna_kontrol(oyuncu_can, dusman_can);
                continue;
            }
            }
        
            else if (secim == 2) {
                can_iksiri = rand () % 16 + 5;
                oyuncu_can += can_iksiri;
                std::cout << "Caniniz " << can_iksiri << " arttirildi!" << std::endl;
            }
            else if (secim == 3) {
                std::cout << "Cikis yapildi." << std::endl;
                break;  
            }
            dusman_hasari = rand() % 16 + 5;
            oyuncu_can -= dusman_hasari;
            std::cout << "Dusman size " << dusman_hasari << " hasar verdi!" << std::endl;
            if (oyuncu_can <= 0) {
                std::cout << "OYUNCU YENILDI! KAYBETTINIZ!" << std::endl;
                yeniden_oyna_kontrol(oyuncu_can, dusman_can);
            continue;
            }

            
        
        }
    }
            

        
    
    


            

    

