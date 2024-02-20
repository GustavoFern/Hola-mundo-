#pragma once
#include <Alimento.hpp>

class Mascota
{
private:
    int Felicidad;
    int Energia;
public:
    Mascota() {
        this->Energia = 0;
        }
    ~Mascota() {}
    void/*Datos de salida*/ Comer(/*Datos de entrada*/Alimento alimento){
        this->Energia += alimento.ExtraerEnergia();
    }
    int LeerEnergia(){
        return this->Energia;
    }
};