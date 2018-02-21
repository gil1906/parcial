#include <iostream>//biblioteca entrada y salida

using namespace std;

int main()
{
    //declaracion de variables
    int v=0,pago=0;
    cout << "escribir horas trabajadas"<<endl;
    //ingreso de variable
    cin >> v;
    //ingreso de condiciones
    if (v>40) {
        pago = 40*5000+((v-40)*7500);
        cout << "salario trabajador con el 50%  "<< endl;//tipo de tarifa
    }
    else {
        pago = v*5000;
        cout << "salario trabajador sin horas extras  "<< endl;//tipo de tarifa
    }
    //mostrar el valor total a pagar
    cout << "total a pagar "<< pago;
    return 0;//mantiene la consola abierta
    //fin algoritmo
}
