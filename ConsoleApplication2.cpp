
#include <iostream>



void los(int T[], int Vmin, int Vmax) {
    for (int i = 0; i < 20; i++) {
        T[i] = Vmin + rand() % (Vmax - Vmin);
    }
};

double sr(int T[]) {
    double s = 0;
    for (int i = 0; i < 20; i++) {
        s = s + T[i];
    }
    s = (s / 20);
    return s;
};

void drukW(int T[], int l) {
    std::cout << "\nLiczby wieksze: ";
    for (int i = 0; i < 20; i++) {
        if (T[i] > l) {
            std::cout << T[i] << " ";
        }
    }
};

void drukM(int T[], int l) {
    std::cout << "\nLiczby mniejsze: " ;
    for (int i = 0; i < 20; i++) {
        if (T[i] < l) {
            std::cout << T[i] << "_";
        }
    }
};




int main()
{
    srand(time(NULL));

    int tablica[20] = {0};

    los(tablica, 1, 40);
    //sr(tablica);
    drukW(tablica, (2 * sr(tablica)));
    drukM(tablica, (0.5 * sr(tablica)));

    //std::cout << "Hello World!\n";
    std::cout << sr(tablica);
    std::cout << "Twoja tablica to: ";

    for (int i = 0; i < 20; i++) {
        std::cout << tablica[i] << " ";

    }


}

