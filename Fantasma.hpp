#include <iostream>
#include <string>
#include <vector>
#include "Entidad.hpp"

using namespace std;

class Fantasma : public Entidad {
  protected:
    int velocidad;
    int vidas;
    vector<string> repres;
  public:
    Fantasma();
    setVelocidad(int velocidad);
    setVidas(int vidas);
    setRepres(vector<string> repres);
    int getVelocidad();
    int getVidas();
    vector<string> getRepres();
    void dibujar();
    void mover();
    void borrar();
    ~Fantasma();
};