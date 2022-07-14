
#include <stdio.h>
#include <stdlib.h>

main () {
int a, ;   /*numero inserito*/
int prec, succ  ;      /*numero precedente e numero successivo*/

scanf("%d", &a) ; /*lettura del numero*/
prec = a-1  ; /*calcolo del numero precedente*/
succ=a+1  /*calcolo del numero successivo*/

printf("%d", prec) ; /*si stampa il risultato del numero precedente*/
printf("%d", succ) ; /*si stampa il risultato del numero successivo*/
}
