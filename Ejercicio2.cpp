#include <iostream>

using namespace std;

int main()
{

    int n = 0, suma = 0;

    cout << "Ingrese un numero. Todos los numeros naturales hasta ese numero seran sumados: " << endl;
    cin >> n;
    if (n <= 0)
    {
        cout << "Debe ingresar numeros naturales ( enteros positivos a partir de 1)" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            suma += i;
        }

        cout << "La suma de todos los numeros naturales hasta " << n << " es : " << suma << endl;
    }

    return 0;
}