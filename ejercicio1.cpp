#include <iostream>
#include <string>
using namespace std;
//clase Padre, base
class Animal {
       public:
               virtual void hacerSonido(){
                       cout << "El animal emite el sonido generico" << endl;
               }
};
class perro : public Animal{
       public:
       void hacerSonido() override {
                 cout << "El perro ladra " << endl;
       }
};
class gato : public Animal{
         public:
                void hacerSonido() override{
                           cout << "El gato maulla" << endl;
                }
};
int main() {
    Animal* a1 = new Animal();
    Animal* a2 = new perro();
    Animal* a3 = new gato();

      a1->hacerSonido();
      a2->hacerSonido();
