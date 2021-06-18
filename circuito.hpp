#include <iostream>
using namespace std;

struct tCircuito{
  float valor;
};


float serie (float _r1, float _r2){
  float r_eq_serie = _r1+_r2;
  return r_eq_serie;
}


float paralelo (float _r1, float _r2){
  float r_eq_paralelo = (_r1*_r2)/(_r1+_r2);
  return r_eq_paralelo;
}


float corrente_total_serie (float _r1, float _r2, float _v1){
  float r_eq_serie = serie(_r1, _r2);
  float i_total_serie = _v1/r_eq_serie;
  return i_total_serie;
}


float corrente_total_paralelo (float _r1, float _r2, float _v1){
  float r_eq_paralelo = paralelo(_r1, _r2);
  float i_total_paralelo = _v1/r_eq_paralelo;
  return i_total_paralelo;
}


float potencia_serie (float _r1, float _r2, float _v1){
  float i_total_serie = corrente_total_serie(_r1, _r2, _v1);
  float pot_serie = _v1*i_total_serie;
  return pot_serie;
}


float potencia_paralelo (float _r1, float _r2, float _v1){
  float i_total_paralelo = corrente_total_paralelo(_r1, _r2, _v1);
  float pot_paralelo = _v1*i_total_paralelo;
  return pot_paralelo;
}
