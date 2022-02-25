#if 0

//VT 105 COD. 001
struct Registro {
    //haz algo
};

struct Zombie {
    //haz algo
};

struct Poligono {
    //haz algo
};



int main()
{

char name[25]; // esperamos que el nombre tenga menos de 25 caracteres
Registro registro[500]; // esperamos que sean menos de 500 registros
Zombie spawn[40]; // un máximo de 40 zombies
Poligono renderizar[30000]; // esta renderización 3d no puede superar los 30000 polígonos

}






//VT 105 COD. 002
#include <iostream>
int main()
{
    int array[1000000]; // asigna 1 millón de integers (probablemente 4MB de memoria)
    std::cout << "prueba";
}

#endif

#include <iostream>
int main()
{
    //asignamos memoria de forma dinámica usando "new"
    new int;
    //¿cómo la almacenamos? con una variable tipo int da error
    //int x{ new int };
    // podemos probar usando "auto" que si funciona
    auto y{ new int };
    // podemos imprimir "y" para ver lo que contiene
    std::cout << y;
    // es una dirección en memoria, así que debemos almacenarla en un puntero
    int* ptr{ y };
    // y con el operador de indireción acceder a ese espacio dinámico
    *ptr = 7; //asignamos el literal int 7 al espacio dinámico 


}


















