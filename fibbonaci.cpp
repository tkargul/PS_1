// Szereg Fibonaciego na zmiennych
#include<iostream>
using namespace std;
int main(){
    cout<<"Podaj ile wyrazow ciagu Fibbonaciego wyznaczyc: ";
    int n;
    cin>>n;
    int prv = 0;
    int curr = 1;
    for(int i=0; i<n;i++){
        cout << "wyraz nr:" << i << ": " << curr << " \n";
        int temp = curr;
        curr = curr+prv;
        prv = temp;
    }

    return 0;

}
