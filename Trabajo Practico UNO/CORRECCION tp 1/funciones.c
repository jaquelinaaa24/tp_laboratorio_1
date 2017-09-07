#include <stdio.h>
#include <stdlib.h>


float pedirUnNumero(char texto [])
{
    float numero;
    printf("%s",texto);
    scanf("%f",&numero);
    return numero;
}

float sumar(float numeroUno,float numeroDos)
{
    float resultadoSuma;
    resultadoSuma = numeroUno+numeroDos;
    return resultadoSuma;
}


float restar(float numeroUno,float numeroDos)
{
    float resultadoResta;
    resultadoResta = numeroUno-numeroDos;
    return resultadoResta;
}

float multiplicar(float numeroUno,float numeroDos)
{
    float resultadoMultiplicacion;
    resultadoMultiplicacion = numeroUno*numeroDos;
    return resultadoMultiplicacion;
}





float dividir(float dividendo,float divisor)
{
    float resultadoDivision;
    resultadoDivision = dividendo/divisor;
    return resultadoDivision;

}

int validacionDelDivisor(float numeroDos)
{
    int logro=1;
   if(numeroDos==0)
    {
        printf("\nERROR no se podra dividir un numero por cero.\n");
        logro=0;
        system("pause");
    }
    return logro;

}






long long int factorial(int numeroUno)//tipo int al ser un entero
{
    long long int resultadoFactorial;

    if(numeroUno == 0)
    {
        return 1;//al ser el factorial de 0 igual a 1
    }
    else
    {
        resultadoFactorial = numeroUno*factorial(numeroUno-1);
        return resultadoFactorial;
    }
}

int validacionDelFactorial(float numeroUno)
{
    if(numeroUno==0)
    {
        printf("\nEl factorial vale 1.\n");
        system("pause");
        return 1;

    }
   else
   {
       if(numeroUno<0)
       {
        printf("\nERROR , el factorial de un numero negativo no se podra calcular.\n");
        system("pause");
        return 1;


       }

       else
       {
          if(numeroUno-(int)numeroUno > 0)//ejem: numeroUno=4.75 - 4.00 =75 devolveria ERROR.
          {
          printf("\nERROR , no se puede calcular el factorial de un numero con decimales.\n");
          system("pause");
          return 1;
          }


       }


       }




   }
    void resultadoCuentas(char texto[],float resultado)
    {
        printf("%s %.2f \n",texto,resultado);

    }


    void calcularTodasOperaciones(float numeroUno,float numeroDos)//realizo las operaciones
    {
        resultadoCuentas("\nLa suma de los numeros es: ",sumar(numeroUno,numeroDos));


        resultadoCuentas("\nLa resta de los numeros da: ",restar(numeroUno,numeroDos));

        resultadoCuentas("\nLa multiplicacion entre los numeros es: ",multiplicar(numeroUno,numeroDos));


        if(validacionDelDivisor(numeroDos)!=0)
        {
            resultadoCuentas("\nLa division de los numeros da: ",dividir(numeroUno,numeroDos));
        }

        if(validacionDelFactorial(numeroUno)!=1)
        {
            printf("\nEl factorial del numero ingresado es: %lld\n",factorial(numeroUno));
        }

    }



