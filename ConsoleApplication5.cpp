// ConsoleApplication5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <string.h> 
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
/*
struct osoba {
		std::string imie;
		std::string nazwisko;
		int wiek = 0;
	};

void drukuj(osoba* p){

	std::cout << p->imie << "\n";
	std::cout << p->nazwisko << "\n";
	std::cout << p->wiek << "\n";

};
*/
/*
void spacja(char* n1, const char z) {
	int dlugosc = strlen(n1);
	for (int i = 0; i < dlugosc;i++) {
		if (n1[i] == ' ') {
			n1[i] = z;
		};
		std::cout << n1[i];
	};
}
*/
/*
void wspak(char* p) {
	int dlugosc = strlen(p);

	for (int i = 0; i < dlugosc / 2; i++) {
		char temp = p[i];
		p[i] = p[dlugosc - i - 1];
		p[dlugosc - i - 1] = temp;
		
	};


}
*/
struct produkt {
	std::string nazwa;
	float cena = 0;
	char kod_id[10] = {0};
};

void formatujKod(char* kod, char separator) {
	int dlugosc = strlen(kod);
	for (int i = 0; i < dlugosc; i++) {
		if (isdigit(kod[i])) {
			kod[i] = separator;
		}
	}
};

void wczytajProdukt(produkt* p) {
	std::cout << "Prosze podaj nazwe: \n";
	std::cin >> p->nazwa;
	std::cout << "Prosze podaj cene: \n";
	std::cin >> p->cena;
	std::cout << "Prosze podaj kod: \n";
	std::cin >> p->kod_id;
};

void wyswietlRaport(produkt* p) {
	std::cout << "Nazwa produktu: " << p->nazwa << "\n";
	std::cout << "Cena produktu: " << p->cena << "\n";
	std::cout << "Kod produktu: " << p->kod_id << "\n";
};


int main()
{
/*
	osoba* tablica = new osoba[3];

	osoba O;
	O.imie = "cwl";
	O.nazwisko = "hujhasdf";
	O.wiek = 18;

	for (int i = 0; i < 3; i++) {
		tablica[i] = O;
	}

	
	for (int i = 0; i < 3; i++) {
		drukuj(&tablica[i]);
	}


	delete tablica;
	*/
/*
	char xd[] = "cwel  cwel2";
	const char znak = '>';
	spacja(xd, znak);

	*/
/*char p[] = "bleble";
	wspak(p);
	std::cout << p;
	*/
	int ilosc;
	std::cout << "Jak duzo produktow chcesz? \n";
	std::cin >>  ilosc;
	produkt* tablica = new produkt[ilosc];
	for (int i = 0; i < ilosc; i++) {
		wczytajProdukt(&tablica[i]);
	};

	for (int i = 0; i < ilosc; i++) {
		wyswietlRaport(&tablica[i]);
	};

	delete[] tablica;
};

