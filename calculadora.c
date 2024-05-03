#include <stdio.h>

int main () {



  char operacao;

  float num1, num2, resultado;

  int continuar;

  continuar = 1;



  while(continuar){





printf ("Escolha a operação (+, -, *, /) :");

scanf (" %c", &operacao);



printf ("Digite o primeiro numero: ");

scanf ("%f", &num1);



printf ("Digite o segundo numero: ");

scanf ("%f", &num2);



switch (operacao) {



case '+':

resultado = num1 + num2;

printf ("o resultado e igual:%.2f", resultado);

break;
case '-':

resultado = num1 - num2;

printf ("o resultado e igual:%.2f", resultado);

break;



  case '*':

resultado = num1 * num2;

printf ("o resultado e igual:%.2f", resultado);

break;



  case '/':

if (num1 != 0 && num2 != 0) {

    resultado = num1 / num2;

    printf ("o resultado e igual:%.2f", resultado);

} else {

  printf ("Erro:não e possivel divisao por zero\n");

}

break;



  default:

printf ("erro");



            }



  printf ("\ngostaria de fazer outra conta? Digite 0 caso queira fechar o executavel ou 1 para reinicar");

  scanf ("%d",&continuar);

  }

}


