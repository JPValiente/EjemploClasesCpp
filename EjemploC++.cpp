#include <cstdlib>
#include "Persona.h"
#include <string>
typedef Persona* Person;
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Person persona1 = new Persona(1,"Juan Pablo","Valiente Gonzalez");
    Person persona2 = new Persona(2,"Enrique","Segoviano");
    Person persona3 = new Persona(3,"Jose","Escobar");
    persona1->showInfo();
    persona2->showInfo();
    persona3->showInfo();
    return 0;
}
