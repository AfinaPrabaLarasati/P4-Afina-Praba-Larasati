#include<stdio.h>
int main()
{
printf("Nama : Afina Praba Larasati \n");
printf("NIM : F1B019008 \n");
printf("Kelompok : 1 \n\n");
		
int x[8],i;
for (i=0; i<=4; i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for (i=0; i<=4; i++)
{
printf("Nilai ke-%i = %i \n",i+1,x[i]);
}
printf("\n");
return 0;
}

