#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int numero1 = 0;
    int numero2 = 0;
    cout << "Bienvenido al piedra papel o tijera" << "\n";
    cout << "Ingrese el numero de su eleccion" << "\n";
    cout << "1 Piedra" << "\n";
    cout << "2 Papel" << "\n";
    cout << "3 tijera" << "\n";
    cin >> numero1;
    numero2 = rand()%3 +1;

    if (numero1 == numero2)
    {
        cout << "Los dos sacaron lo mismo es un empate" << "\n";
    }
    else if (numero1 == 1 && numero2 == 3|| numero1==2 && numero2==1 || numero1==3 && numero2==2)
    {
        cout << "has ganado felicidades" << "\n";
    }
    else if(numero1==1 && numero2==2 || numero1==3 && numero2==1 || numero1==2 && numero2==3){
            cout << "La maquina te a ganado" << "\n";

    }
    return 0;
}