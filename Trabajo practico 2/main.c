#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define NUM 20


int main()
{
    system("color DF");
    char seguir='s';
    int opcion=0;
    ePersona lista[NUM];
    int espacioLibre;
    int banderaEstado=0;
    int contMenosresa18;
    int cont19y35;
    int contMayores35;
    int i;

    while(seguir=='s')
    {
        printf("Bienvenido por favor seleccione una opcion para comenzar: :) \n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            if(banderaEstado==0)
            {
                inicializarEstados(lista, NUM);
                banderaEstado= 1;
            }

            espacioLibre = espacioDisponible(lista, NUM);

            if(espacioLibre == -1)
            {
                printf("\nNo hay mas espacio libre!\n", 160);
                break;
            }

            agregarPersona(lista, NUM, espacioLibre);

            break;

        case 2:
            darBajaPersona(lista, NUM);
            break;

        case 3:
            ordenarLista(lista, NUM);
            break;

        case 4:
            contMenosresa18=0;
            cont19y35=0;
            contMayores35=0;

            for(i=0; i<NUM; i++)
            {
                if(lista[i].estado==1)
                {
                    if(lista[i].edad < 18)
                    {
                        contMenosresa18++;
                    }
                    else if(lista[i].edad < 36)
                    {
                        cont19y35++;
                    }
                    else
                    {
                        contMayores35++;
                    }
                }

            }
            hacerUnGrafico(contMenosresa18, cont19y35, contMayores35);
            break;

        case 5:
            seguir = 'n';
            break;

        default:
            printf("\n\nIngrese una opción valida!\n",160);
            break;

        }
        system("pause");
        system("cls");

    }


    return 0;
}
