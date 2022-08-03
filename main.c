#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float x,y;
    char op;
do{
    printf("entrer le premier nombre :\n");
    scanf("%f",&x);
    printf("entrer le deuxieme nombre :\n");
    scanf("%f",&y);

    printf("veuiller choisir un operateur :\n");
    scanf("%s",&op);

    switch (op){

          case '+': printf("%.f + %.f = %.f\n",x,y,x + y);
                    break;
          case '*': printf("%.f * %.f = %.f\n",x,y,x * y);
                    break;

          case '-': printf("%.f + %.f = %.f\n",x,y,x - y);
                    break;
          case '/': if(y == 0){
                           printf("error");
                    }else
                            printf("%.f / %.f = %.f\n",x,y,x / y);

                    break;
         default : printf("error");
              break;
              }

}while(op!='q');

}
