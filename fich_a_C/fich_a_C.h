#include <cstdio>

typedef struct archivo {
    struct coment com;
    int n_vacias;
    int *vacias;
} *t_archivo;

struct coment {
    char **comentarios;
    int n_comentarios;
};

/* 
  El programa consiste en copiar el archivo cuyo nombre se proporciona en los argumentos de la llamada al programa (prueba) a 
  otro archivo (prueba.c), para despues compilar prueba.c y ejecutarlo.
  
  Ademas, se debe guardar el numero de linea en la que aparecen lineas vacias, el número total de lineas vacias, los comentarios
  que aparecen, y el numero total de comentarios que hay en "prueba".
  Para ello de debe utilizar el struct archivo.
*/

t_archivo *copiar(FILE *f);

int main(int argc, char *argv[]);