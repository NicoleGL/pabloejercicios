
typedef struct matriz {
    int **matriz;
    int n_filas;
    int n_columnas;
} t_matriz;

/*
Multiplicar matrices mat1 y mat2.

Si las matrices no se pueden multiplicar por tener ordenes incompatibles,
imprimir un mensaje de error a stderr y salir con exit status 2.
*/

t_matriz multiplicar(t_matriz mat1, t_matriz mat2);