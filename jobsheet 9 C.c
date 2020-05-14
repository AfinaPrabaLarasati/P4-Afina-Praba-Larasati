#include<stdio.h>
int main()
{
printf("Nama : Afina Praba Larasati \n");
printf("NIM : F1B019008 \n");
printf("Kelompok : 1 \n\n");
		
int i;
char nama[20]={'A','f','i','n','a',' ','p','r','a','b','a',' ','l','a','r','a','s','a','t','i'};
char nama2[20]="Afina Praba Larasati";
printf("Array per karakter = ");
		
for (i=0; i<=19; i++)
{
printf("%c",nama[i]);
}
printf("\n");
printf("Array string = %s \n\n", nama2);
return 0;
}

