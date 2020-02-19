#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("Answer: %d", num1+num2);
}
/*il ne faut pas oublier de mettre les ; après chaque parenthèse, le programme demande le premier nombrer puis le deuxième et il en fait la somme, mais que dans les naturels, si on entre 2 et 6.8, il dit que leur somme vaut 8, alors qu'en réalité elle vaut 8.8, mais comme éoncer avant il calcule dans l'ensemble des naturels.*/
