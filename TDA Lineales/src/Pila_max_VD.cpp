#include "Pila_max_Cola.h"
#include "Pila_max_VD.h"
#include <vector>

using namespace std;


Pila_max::Pila_max(){
    
}
    
void Pila_max::poner(int i){
    
}
     
void Pila_max::quitar(){
    p.pop_back();
}
       
elemento& Pila_max::tope() const{
    return p[p.end()]; // metodo back() ?
}
       
bool Pila_max::vacia() const{
    return p.empty(); // size ?
}