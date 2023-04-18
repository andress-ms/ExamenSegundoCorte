#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Bienvenido al naufrago satisfecho " << endl;
    cout << "Ingrese la cantidad de hamburguesas que ordenara ";
    cin >> n;

    int sencilla = 0, doble = 0, triple = 0;
    for (int i = 1; i <= n; i++)
    {
        int opcion;
        cout << "Que hamburguesa desea?" << i << "(1 = sencilla, 2 = doble 3 = triple): ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            sencilla++;
            break;
        case 2:
            doble++;
            break;
        case 3:
            triple++;
            break;
        default:
            cout << "Opcion invalida. " << endl;
            i--;
            break;
        }
    }

    double costo = (sencilla * 50) + (doble * 75) + (triple * 100); 
    double cargo = costo * 0.05;
    double total = costo + cargo;

    cout << "El costo de las hamburguesas es de : C$" << costo << endl;
    cout << "El cargo por tarjeta de credito es de: C$" << cargo << endl;
    cout << "El total es de: C$" << total << endl;

    return 0;
}
