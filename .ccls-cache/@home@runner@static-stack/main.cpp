#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  
  Pilha p;

  p.empilhar(30);
  p.empilhar(21);
  p.empilhar(10);
  p.desempilhar();

  cout << "Pilha Vazia: " << p.vazio() << endl;
  cout << "Topo: " << p.getTopo() << endl;

  return 0;
}