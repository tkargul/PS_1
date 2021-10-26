#include <iostream>
using namespace std;
int main()
{
    cout << "Podaj liczbe, sprawdze czy jest parzysta: ";
    int liczba;
    cin >> liczba;
    // sprawdzenie czy liczba jest parzysta/nieparzysta//koniunkcja bitowa
    //tutorial: https://www.youtube.com/watch?v=cpEZqoZjMCA
    //porównujemy ostatni bit wprowadzonej liczby z 1, jesli ostatni bit liczby =1 to 1&1 zwraca 1 - czyliczba jest nieparzysta
    //jeśli na końcu jest 0  to 0&1 daje nam wartosc logiczną 0 czyli parzysta.
    if ((liczba & 1))
        cout << "Wprowadzona liczba jest nie parzysta\n"; // niemaprzyste mają ostatni bit równy 1
    else
        cout << "Podana liczba jest parzysta" << endl; // patrzyste maja ostatni bit równy 0

    cout << "\nPodaj liczbe, podziele ja przez dwa: ";
    cin >> liczba;
    //szybkie dzielenie przez dwa >> przesówamy liczbe o jeden bit w prawo
    cout << "Wynik dzielenia: " << liczba << "/2 : " << (liczba >> 1) << endl;
    cout << "\nPodaj liczbe, pomnoze ja przez dwa: ";
    cin >> liczba;
    //szybkie dzielenie przez dwa >> przesówamy liczbe o jeden bit w prawo
    cout << "Wynik dzielenia: " << liczba << " * 2 : " << (liczba << 1) << endl;
    // liczba przesunięć bitowy
    // 1 - dzielenie/mnożenie przez 2, 2^1
    // 2- dzielenie monożeniae przez 4, 2^2
    // 3 - dzielenie monożenie przez 8, 2^3

    // zamiana liter z małej na duża
    char znak = 'A';
    char Z = znak | ' '; // operator bitowy  lub | z znakiem spacji zamienia duża literkę na mała
    cout << znak << "----->" << Z << endl;
    cout << Z << "----->" << (char)(Z & '_') << endl; // operator & ze znakiem "_" zamienia małą na duża
}
