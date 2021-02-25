#ifndef PERSONA_H
#define PERSONA_H
#include <string>
class Persona {
public:
    Persona(int,std::string,std::string);
    int id;
    void showInfo();
private:
    std::string nombre;
    std::string apellido;
};

#endif /* PERSONA_H */
