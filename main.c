#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>


int main()
{

 textcolor(RED);
 textbackground(WHITE);
 system("color fc");

    setlocale(LC_ALL, "Portuguese");
    int num1,num2,somar,dividir,subtrair,multiplicar;


     printf("Digite o Primeiro N�mero:");
     scanf("%d",&num1);
 printf("*************************************");
 printf("\nDigite o Segundo N�mero:");

     scanf("%d",&num2);
     printf("*************************************");

     somar = num1+num2;
     dividir = num1/num2;
     subtrair = num1-num2;
     multiplicar = num1 * num2;

     printf("\nSoma do Num1+Num2: %d \n",somar);
     printf("*************************************");
     printf("\nDivis�o do Num1+Num2: %d \n",dividir);
     printf("*************************************");
     printf("\nSubtra��o do Num1+Num2: %d \n",subtrair);
     printf("*************************************");
     printf("\nMultiplica��o do Num1+Num2: %d \n",multiplicar);
     printf("*************************************");

     printf("\n***************** Sistema realizado por Pablo *****************\n");



 system ("pause");



     }






