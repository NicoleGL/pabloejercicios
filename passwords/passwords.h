
/*
Programa para ver si una contrasenya es valida.
Debe tener:
 - Un minimo de 8 caracteres (si tiene menos devolver 1).
 - Una minuscula (si no la tiene devolver un 2).
 - Una mayuscula (si no la tiene devolver un 3).
 - Un numero (si no lo tiene devolver un 4).

 Si es correcta devolver el valor 0.
 

 Modo dificil:
 - No puede haber mas de 2 numeros seguidos que sean iguales (111) o consecutivos (234) (si no se cumple devolver un 5).
 Contasenyas validas: Pepe1122    matLAB434    0112Chiiii  11aaaaa11  11a2323a
 No validas: SanFrancisco210    Pepe3222
*/

int isValidPassword(char *psswd);