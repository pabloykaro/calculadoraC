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


     printf("Digite o Primeiro Número:");
     scanf("%d",&num1);
 printf("*************************************");
 printf("\nDigite o Segundo Número:");

     scanf("%d",&num2);
     printf("*************************************");

     somar = num1+num2;
     dividir = num1/num2;
     subtrair = num1-num2;
     multiplicar = num1 * num2;

     printf("\nSoma do Num1+Num2: %d \n",somar);
     printf("*************************************");
     printf("\nDivisão do Num1+Num2: %d \n",dividir);
     printf("*************************************");
     printf("\nSubtração do Num1+Num2: %d \n",subtrair);
     printf("*************************************");
     printf("\nMultiplicação do Num1+Num2: %d \n",multiplicar);
     printf("*************************************");

     printf("\n***************** Sistema realizado por Pablo *****************\n");



 system ("pause");



     }






