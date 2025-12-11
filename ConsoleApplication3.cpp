
#include <iostream>

void los(double T[], int min, int max) {
    for (int i = 0; i < 20; i++) {
        T[i] = (min + (double)(rand() % (max - min)))/100;
    }

};

double sr(double T[]) {
    double s = 0;
    for (int i = 0; i < 20; i++) {
        s = s + T[i];
    }
    s = s / 20;
    return s;
};

double max(double T[]) {
    double m = T[0];
    for (int i = 0; i < 20; i++) {
        if (m < T[i]) {
            m = T[i];
        }
    }

    return m;
};

double os(double T[], double sr) {
    double w = 0;
    double xd = 0;
    double s = 0;
    for (int i = 0; i < 20; i++) {
        xd = xd + (pow((T[i] - sr), 2));
    }
    w = xd / 19;
    s = sqrt(w);
    return s;
}




int main()
{
    //std::cout << "Hello World!\n";
    srand(time(NULL));


    double x[20] = { 0 };

    los(x, 0, 100);

    for (int i = 0; i < 20; i++) {
        std::cout << x[i] << " ";
    };
    std::cout << "\n Srednia elementow wektora: " << sr(x);
    std::cout << "\n Najwiekszy element wektora: " << max(x);
    std::cout << "\n Odchylenie standardowe wektora: " << os(x,sr(x));

}

