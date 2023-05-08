#include "Entidad.hpp"

Entidad::Entidad() {
  this->x = 0;
  this->y = 0;
  this->dx = 0;
  this->dy = 0;
};

Entidad::Entidad(float x, float y, float dx, float dy) {
  this->x = x;
  this->y = y;
  this->dx = dx;
  this->dy = dy;
};

void Entidad::setX(float x) {
  this->x = x;
};

void Entidad::setY(float y) {
  this->y = y;
};

void Entidad::setDX(float dx) {
  this->dx = dx;
};

void Entidad::setDY(float dy) {
  this->dy = dy;
};

void Entidad::setArr(vector<string> arr) {
  this->arr = arr;
};

float Entidad::getX() {
  return this->x;
};

float Entidad::getY() {
  return this->y;
};

float Entidad::getDX() {
  return this->dx;
};

float Entidad::getDY() {
  return this->dy;
};

vector<string>Entidad::getArr() {
  return this->arr;
};

void Entidad::mostrar() {
  for (int i = 0; i < arr.size(); i++) {
    Console::SetCursorPosition(this->x, this->y + i);
    cout << arr[i] << endl;
  }
};

void Entidad::mover(float dx, float dy) {
  this->x += dx;
  this->y += dy;
};

void Entidad::borrar() {
  for (int i = 0; i < arr.size(); i++) {
    Console::SetCursorPosition(this->x, this->y + i);
    cout << " " << endl;
  }
};

Entidad::~Entidad() {
  cout << "Entidad destruida" << endl;
};