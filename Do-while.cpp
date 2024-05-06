#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    do
    {
        cout << "Ingrese un numero entero positivo: \n";
        cin >> n;
    }
        while (n < 0);

        return 0;
}
