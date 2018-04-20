#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int main(void)
{
srand(time(NULL));
char lista[35][30];
int nr ,ramas,colegi[27],check[27],alege,i;
FILE *cheie=fopen("nume.txt","r");
for(i=1;!feof(cheie);++i) fgets (lista[i], 50, cheie);
ramas=i-1;
for( i=1;i<=ramas;++i){
                 colegi[i]=i;
                 check[i]=0;
                 }
printf("\t\t\t CUI O SA II DAI CADOU:\n\n");
do{
                 do{
                 printf("\nce numar esti la catalog? ");
                 scanf("%d", &nr);
                 if(check[nr]<0)printf("ai mai ales odata, urmatorul ...\n");
                 }while(check[nr]<0);

                 do{
                 alege=rand()%26+1;
                 }while(colegi[alege]==0||alege==nr);

colegi[alege]=0;
check[nr]=-1;
--ramas;
printf("ti-a picat: %s \n ",lista[alege]);
}while(ramas>=1);
}
