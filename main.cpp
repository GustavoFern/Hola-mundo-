#include <iostream>
#include <Alimento.hpp>
using namespace std;

#include <Mascota.hpp>
#include <Dibujo.hpp>

int main(int argc, char const *argv[])
{
    Dibujo dibujo1("./assets/mimi.txt");
    dibujo1.Dibujar();
    cout << endl;
    Dibujo dibujo2("./assets/JM.txt");
    dibujo2.Dibujar();

    Mascota m1;
    Mascota m2;
    Mascota m3;

    Alimento alimento(5);

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);


    cout << "Mascota " << m1.LeerEnergia() << endl;
    return 0;
}
