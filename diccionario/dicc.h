/*
Diccionario que contiene un array de palabras ORDENADAS y el numero de palabras total.
Ninguna palabra es superior a 20 caracteres y todos los caracteres estan en mayusculas.
*/
typedef struct diccionario {
    char **palabras;
    int n_palabras;
} t_dicc;



/*
Dado un diccionario ordenado, buscar una palabra en el mediante BUSQUEDA BINARIA.
Devolver la posicion donde se encuentra la palabra si se encuentra, -1 si no se encuentra
y -2 si hay algun otro problema.
*/

int buscar_palabra(t_dicc *diccionario, char *palabra);