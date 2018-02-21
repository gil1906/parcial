#include <iostream>//biblioteca entrada y salida

using namespace std;

int main()
{
    //asignacion de variables
    int seg=0,total1=0,total2=0,total3=0,total4=0;
    cout << "ingrese el valor en segundos" << endl;
    //ingrese la variable
    cin >> seg;
    //operaciones para encontrar dicha informacion
    total1= seg/3600;
    total2 = seg -(total1*3600);
    total3 = total2/60;
    total4 = total2-(total3*60);
    cout << "valor en horas min y segundos "<< endl;
    //valor dado en orden
    cout << total1<<" horas "<<total3<<" min "<<total4<<" seg ";
    return 0;//mantiene la consola abierta
    //fin algoritmo
}
