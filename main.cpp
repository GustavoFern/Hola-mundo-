#include <iostream>
#include <list>
#include <Alimento.hpp>
using namespace std;

#include <Mascota.hpp>
#include <Dibujo.hpp>

int main(int argc, char const *argv[])
{
    list<Dibujo> dibujos;


    Dibujo dibujo1("./assets/mimi.txt");
    dibujo1.Dibujar();
    cout << endl;
    Dibujo dibujo2("./assets/JM.txt");
    dibujo2.Dibujar();
    
    // dibujos.push_front(dibujo1);       ctrl+k soltar k y luego c
    // dibujos.push_front(dibujo2);

    Mascota m1,m2,m3;

    list<Mascota> mascotas;
    mascotas.push_back(m1);
    mascotas.push_back(m2);
    mascotas.push_back(m3);

    Alimento alimento(5);

    for (auto &&mascotaActual : mascotas)//forrrange
    {
        mascotaActual.Comer(alimento);
    }

    for (auto &&mascotaActual : mascotas)
    {
        cout << "Mascota " << mascotaActual.LeerEnergia() << endl;
    }

    return 0;
}
/*ctrl sobre la linea con error

*/