#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

    system("color DF");
    char seguir='s';
    int opcion=0;
    float numUno;
    float numDos;
    int flagNumUno=0;
    int flagNumDos=0;

    while(seguir=='s')
    {
        system("cls");
        if(flagNumUno == 0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("\n1- Ingresar 1er operando (A=%.2f)\n", numUno);
        }

        if(flagNumDos == 0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n", numDos);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("Elija una opcion...\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            numUno=pedirUnNumero("Ingrese primer operando: ");
            flagNumUno = 1;
            system("cls");
            break;


        case 2:
            system("cls");
            numDos=pedirUnNumero("Ingrese segundo operando: ");
            flagNumDos = 1;
            system("cls");
            break;



        case 3:

            if(flagNumUno == 0 || flagNumDos == 0)//es decir si la bandera esta baja y no se ingreso NADA.
            {
                printf("\nNo se ha ingresado ningun numero para realizar la suma.\n");
            }
            else
            {
                resultadoCuentas("\nLa suma de los numeros es: ",sumar(numUno,numDos));
            }
            system("pause");

            break;


        case 4:

            if(flagNumUno == 0 || flagNumDos == 0)//es decir si la bandera esta baja y no se ingreso NADA.
            {
                printf("\nNo se ha ingresado ningun numero para realizar la resta.\n");
            }
            else
            {
                resultadoCuentas("\nLa resta de los numeros da: ",restar(numUno,numDos));
            }
            system("pause");


            break;

          case 5:
            if(flagNumUno == 0 || flagNumDos == 0)
            {
                printf("\nNo se ingresaron operandos para realizar la operacion.\n");
                system("pause");
            }
            else
            {
                if(validacionDelDivisor(numDos)==0)
                {
                    break;
                }
                else
                {
                    resultadoCuentas("\nLa division de los numeros da: ",dividir(numUno,numDos));
                    system("pause");
                }
            }
            break;





        case 6:

            if(flagNumUno == 0 || flagNumDos == 0)
            {
                printf("\nNo se ha ingresado ningun numero para realizar la multiplicacion.\n");
            }
            else
            {
                resultadoCuentas("\nLa multiplicacion entre los numeros es: ",multiplicar(numUno,numDos));
            }
            system("pause");

            break;
        case 7:

            if(flagNumUno == 0)
            {
                printf("\nNo se ha ingresado ningun numero para realizar el factorial.\n");
            }
            else
            {
                if(validacionDelFactorial(numUno)==1)
                {
                    break;
                }
                else
                {
                    printf("\nEl factorial del numero ingresado es: %lld\n",factorial(numUno));
                }

            }
            system("pause");

            break;
        case 8:

            if(flagNumUno== 0 || flagNumDos == 0)
            {
                printf("\nNo se ingresaron operandos para realizar la operacion.\n");
            }
            else
            {
                calcularTodasOperaciones(numUno,numDos);
            }
           system("pause");

            break;
        case 9:

            seguir = 'n';
            break;

        default:
            printf("\nIngrese una opcion valida.\n");

            break;
        }

    }

    return 0;
}
