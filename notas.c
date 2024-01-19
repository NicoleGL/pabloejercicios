#include <stdio.h>
#include <notas.h>

t_clase *guardar_datos(FILE *f) {

}

/* Poner el nombre del archivo (notas.txt) como argumento */
int main(int argc, char* argv[]) {
    if(argc != 2) {
        fprintf(stderr, "Argumentos incorrectos.");
    }

    FILE *f = fopen(argv[1], "r");
    guardar_datos(f);
}
