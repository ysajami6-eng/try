#include <iostream>
using namespace std;
int contador = 0;
void incre() {
  contador++;
}
 int main() {
    cout << "contador inicial: " << contador << endl;
    incre();
    cout << "contador despues de incrementar: " << contador << endl;
 return 0;
 }
