#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Entidad {
  private:
    float x;
    float y;
    float dx;
    float dy;
    vector<string> arr;
  public:
    Entidad();
    Entidad(float x, float y, float dx, float dy);
    void setX(float x);
    void setY(float y);
    void setDX(float dx);
    void setDY(float dy);
    void setArr(vector<string> arr);
    float getX();
    float getY();
    float getDX();
    float getDY();
    vector<string> getArr();
    void mostrar();
    void mover(float dx, float dy);
    void borrar();
    ~Entidad();
};