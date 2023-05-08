#include "Fantasma.hpp"

Fantasma::Fantasma() {
  this->velocidad = 0;
  this->vidas = 3;
  this->repres = {
    "    __  ",
    "  / ** \ ",
    " |     <",
    " / ___ \ "
  };
}

void Fantasma::setVelocidad(int velocidad) {
  this->velocidad = velocidad;
}

void Fantasma::setVidas(int vidas) {
  this->vidas = vidas;
}

void Fantasma::setRepres(vector<string> repres) {
  this->repres = repres;
}

int Fantasma::getVelocidad() {
  return this->velocidad;
}

int Fantasma::getVidas() {
  return this->vidas;
}

vector<string> Fantasma::getRepres() {
  return this->repres;
}

void Fantasma::dibujar() {
  for (int i = 0; i < this->repres.size(); i++) {
    Console::SetCursorPosition(this->x, this->y + i);
    cout << this->repres[i] << endl;
  }
}

void Fantasma::mover() {
    for (int i = 0; i < this->repres.size(); i++) {
    Console::SetCursorPosition(this->x, this->y + i);
    cout << this->repres[i] << endl;
    this->dibujar();
  }
}

void Fantasma::borrar() {
    for (int i = 0; i < this->repres.size(); i++) {
    Console::SetCursorPosition(this->x, this->y + i);
    cout << " " << endl;
    this->dibujar();
  }
}

Fantasma::~Fantasma() {
  cout << "Destruyendo fantasma" << endl;
}