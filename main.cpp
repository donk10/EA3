#include <iostream>
#include "circuito.hpp"

using namespace std;

int main() {

  tCircuito r1;
  tCircuito r2;
  tCircuito v1;

  cout << "Valor da resistência do Resistor 1: ";
  cin >> r1.valor;

  cout << "Valor da resistência do Resistor 2: ";
  cin >> r2.valor;

  cout << "Valor da tensão fornecido pela Fonte 1: ";
  cin >> v1.valor;

  float r_eq_serie = serie(r1.valor, r2.valor);
  cout << "Resistores em série: " << r_eq_serie << " Ohms" << endl;

  float r_eq_paralelo = paralelo(r1.valor, r2.valor);
  cout << "Resistores em paralelo: " << r_eq_paralelo << " Ohms" << endl;

  float i_total_serie = corrente_total_serie(r1.valor, r2.valor, v1.valor);
  cout << "Corrente total (Resistores em série): " << i_total_serie << " A" << endl;

  float i_total_paralelo = corrente_total_paralelo(r1.valor, r2.valor, v1.valor);
  cout << "Corrente total (Resistores em Paralelo): " << i_total_paralelo << " A" << endl;

  float pot_serie = potencia_serie(r1.valor, r2.valor, v1.valor);
  cout << "Potência (Resistores em série): " << pot_serie << " W" << endl;

  float pot_paralelo = potencia_paralelo(r1.valor, r2.valor, v1.valor);
  cout << "Potência (Resistores em Paralelo): " << pot_paralelo << " W" << endl;
}
