#ifndef PILA_MAX_VD_H
#define PILA_MAX_VD_H
#include <vector>

using namespace std;


struct elemento{
    int ele;
    int maximo;
};

class Pila_max{
    
private:
    
    vector<elemento> p;
    
public:
    
    /**
     * @brief Constructor sin parámetros
     */
    Pila_max();
    
    /**
     * @brief Añade un elemento a la pila
     * @param i
     */
    void poner(int i);
    
    /**
     * @brief Elimina el elemento situado en el tope de la pila
     */
    void quitar();
    
    /**
     * @brief Método de consulta del elemento en el tope de la pila
     * @return 
     */
    elemento& tope() const;
    
    /**
     * @brief Indica si la pila está vacia o no
     * @return @retval true si está vacia @retval false en caso contrario
     */
    bool vacia() const;
};

#endif /* PILA_MAX_VD_H */
