#include <iostream>//entrada y sallida biblioteca

using namespace std;

int main()
{
    //declaracion de variables
    int kw=0;
    cout << "ingresar la eficiencia energetica de la termoelectrica " << endl;
    //ingresar variable
    cin >> kw;
    //condiciones para cumplir requerimientos
    if (kw>7999&& kw<10001){
        cout << "CONSUMO MEDIO "<<endl;
    }
    else if (kw>10000){
        cout <<" ALTO CONSUMO DE ENERGIA "<<endl;
    }
    else {
        cout << "DATO NO VALIDO";
    }
    return 0;//mantiene la consola abierta
    //fin de algoritmo
}
