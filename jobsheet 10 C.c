#include <stdio.h>

main (){
char nama [2][10][30];
int i, j;
for (i = 0; i< 2; i++){
for (j = 1; j < 10; j++){
printf ("nama my best friend [%d][%d] = ", i, j);
scanf ("%s", &nama[i][j]);
}
}
}
