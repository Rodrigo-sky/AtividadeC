#include <stdio.h>

int main ()
{
  float num1, num2;
  char operacao;
  float resultado;

  printf ("Bem vindo C  calculadora\n Digite o primeiro numero ");
  scanf ("%f", &num1);
  printf
    ("\nQual a operacao que voce deseja fazer com esse numero? \nPara Adicao digite: +\nPara Subtracao digite: -\nPara multiplicacao digite: *\npara divisao digite: /\n");
  scanf (" %c", &operacao);
  printf ("\nDigite o segundo numero: ");
  scanf ("%f", &num2);
  if (operacao == '+')
    {
      resultado = num1 + num2;
      printf ("o resultado da operacao e:%.2f", resultado);
    }
  else if (operacao == '-')
    {
      resultado = num1 - num2;
      printf ("o resultado da operacao e:%.2f", resultado);
    }
  else if (operacao == '*')
    {
      resultado = num1 * num2;
      printf ("o resultado da operacao e:%.2f", resultado);
    }
  else if (operacao == '/')
    {
      if (num2 == 0 || num1 == 0)
	{
	  printf ("Atencao! operacao com divisor 0");
	}
      else
	{
	  resultado = num1 / num2;
	  printf ("o resultado da operacao e:%.2f", resultado);
	}
    }
  return 0;
