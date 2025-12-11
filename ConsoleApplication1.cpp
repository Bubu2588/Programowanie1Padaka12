
#include <iostream>

using namespace std;



int silnia(int cfel)
{
    int s = 1;
    for (int i = 1; i <= cfel; i++)
    {
        s = s * i;

    }

    return s;
}


double e(double x, int n)
{
    double suma = 1;
    for (int i = 1; i <= n; i++)
    {
        suma = suma + (pow(x, i) / (double)silnia(i));

    }


    return suma;
}

int main()
{
    //std::cout << "Hello World!\n";
    std::cout << e(5, 12);






}

