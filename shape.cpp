#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
        //kwadrat
            cout << "* ";
            // kwadrat: ramki z przekatnymi
        //if (i == n || i == 1 or j == n or j == 1 or i == j or i + j == n + 1) cout << "* ";
            // dla przekątnych i==j oraz suma i+j jest równa n+1

            // dolny oraz górny trójkąt
        //if( i<j || j<i) cout<<"* ";

            // dolny oraz górny trójkąt
        //if( i+j<n+1 || i+j>n+1) cout<<"* ";

        //odkomentować przy wydrukach warunkowych
            
        //else cout<<"  ";
        
        }

        cout << "\n";
    }
    system("pause");

return 0; 
}
