#include <iostream>

using namespace std;

int main()
{

    // Se declaran las variables y el arreglo a usar
    int numeros[10], pares = 0, impares = 0;

    // Se empieza rellenando el arreglo con 10 numeros enteros
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrse un numero para ingresarlo al arreglo: ";
        cin >> numeros[i];
    }

    // Luego se recorre para verificar cuantos son pares y cuantos son impares
    for (int i = 0; i < 10; i++)
    {
        // Si el residuo de X numero entre 2 es 0 entonces es par
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
        // Si no, es impar
        else
        {
            impares++;
        }
    }

    // Se imprimen los resultados al usuario
    cout << "\nNumeros impares dentro del arreglo: " << impares << endl;
    cout << "\nNumeros pares dentro del arreglo: " << pares << endl;

    return 0;
}