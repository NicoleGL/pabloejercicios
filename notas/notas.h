typedef struct alumno {
    char *nombre;
    double *notas;
    int n_asistencias;
} t_alumno;

typedef struct clase {
    t_alumno *alumnos;
    int n_alumnos;
} t_clase;


/*
    Dado un archivo f con el formato que se muestra en notas.txt:
    NOMBRE_DEL_ALUMNO: NOTA
    Se pide guardarlos en la estructura 'clase', que contiene un array de alumnos y el numero de alumnos.

    Cada alumno solo debe aparecer una vez en el array. Si un alumno tiene varias notas (su nombre se repite en la list>    se deben guardar todas las notas en el array notas.
    Ademas, se debe guardar el numero de veces que aparece el nombre en la lista en n_asistencias.

    La memoria de tanto el array de alumnos como del array de notas se debe asignar dinamicamente.
*/

/*
    El resultado se almacena en resultado.txt.
    Se puede visualizar con el comando: cat resultado.txt
*/

t_clase *guardar_datos(FILE *f);

int main(int argc, char* argv[]);
