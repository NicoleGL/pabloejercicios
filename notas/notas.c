#include <stdio.h>
#include "notas.h"
#include <stdlib.h>

t_clase *guardar_datos(FILE *f) {

}

/* Poner el nombre del archivo (notas.txt) como argumento */
int main(int argc, char* argv[]) {
    t_clase *clase;
    FILE *f;
    FILE *resultado;
    int i;
    int j;

    if(argc != 2) {
        fprintf(stderr, "Argumentos incorrectos.");
    }

    f = fopen(argv[1], "r");
    clase = guardar_datos(f);

    resultado = fopen("resultado.txt", "w");
    for (i = 0; i < (*clase).n_alumnos; i++) {
	t_alumno alumno = (((*clase).alumnos)[i]);

	fprintf(resultado, "\nalumno: %s, n_asistencias: %d, notas:", alumno.nombre, alumno.n_asistencias);

	for (j = 0; j < alumno.n_asistencias; j++) {
	    fprintf(resultado, " %f", (alumno.notas)[j]);
	}

	free(alumno.notas);
    }

    fprintf(resultado, "\n");

    fclose(f);
    fclose(resultado);
    free((*clase).alumnos);
    free(clase);

    return 0;
}

