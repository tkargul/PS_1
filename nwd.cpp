//Algorytm Euklidesa znajdowanie największego wspólnego dzielnika dwóch liczb
#include <iostream>
using namespace std;
int main(){
int a, b, NWD=0; // deklaracja zmiennych
cout<<"Podaj liczbe a: ";
cin>>a;
cout<<"Podaj liczbe b: ";
cin>>b;
int tempA = a; // zminne pomocnicze pamiętające wprowadzone przez usera liczby
int tempB = b;
int i=0; // licznik iteracji obliczeniowych

while(a!=b){

    if (a > b){
        i++;
        a = a-b;
        cout<<"Iteracja: "<<i<<"\n";
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
    else {
        i++;
        b = b-a;
        cout<<"Iteracja: "<<i<<"\n";
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
    cout<<"\n";
}

NWD = a; // jeśli a jest równe b to NWD jest równy waryości a
cout<<"Najwiekszy wspolny dzielnika liczby "<<tempA<<" i "<<tempB<<" to: "<<NWD<<endl;
system("pause");
}
