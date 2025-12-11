
#include <iostream>



int los(int min, int max) {
    int w = 0;
    w = min + rand() % (max - min);
    return w;
}

void start(int los, int p, int &tury) {
    if (los == 6) {
        p = 1;
    }
    tury++;
}



int main()
{
    int pole1g = 0;
    int pole2g = 0;
    int tury1g = 0;
    int tury2g = 0;

    srand(time(NULL));


    std::cout << los(1, 6);

    start(los(1, 6), pole1g, tury1g);

    std::cout << tury1g;









    //std::cout << "Hello World!\n";
}

