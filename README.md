# Programowanie strukturalne, Podstawy Informatyki
Programowanie Strukturalne - zajęcia 1

Studenci trenują implementację pętli , pętli zagnieżdżonych , istrukcji warunkowych:

Plik shape.cpp zawiera instrukje drukujące w termianulu kwadrat o boku n przy pomocy znaku gwiazdki.
warianty wykonania kodu:

1. Odkomentowanie linii 13: wydruk kwadratu o boku n, linie 15-26 zakomentowane.

2. Zakomentowanie linii 13 i odkomentowanie linii: 16 i 26: wydruk warunkowy: drukuje się tylko linie boków i dwie przekątne kwadratu
przekątnta 1: dla i==j, przekątna druga dla i+j == n+1 ( n - dlugosc boku kwadratu)

3. Zakomentowanie linii 13 i  odkomentowanie linii 20 i 26: wydruk warunkowy: drukowane są trójkąty pod i nad pierwszą przekątną (i<j || j<i) ( bez lini przekątnej kwadratu)

4. Zakomentowanie linii 13 i  odkomentowanie linii 23 i 26: wydruk warunkowy: drukowane są trójkąty pod i nad drugą przekątną (i+j<n+1 || i+j>n+1) ( bez lini przekątnej kwadratu)
