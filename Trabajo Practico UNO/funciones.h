#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED

/****
*Objetivos del programa:
*Sera una  calculadora que contenga un menú de opciones.
*Deberá  realizar 5 operaciones, por medio de funciones en una biblioteca aparte que las contendrá.
*Deberán aparecer los valores de x e y cargados con los numeros que el usuario desee ingresar.
*Deberán tenerse en cuenta los casos de error:se tendran que ingresar si o si dos numeros para realizar las operaciones.
*                                             no se podra dividir por 0.
*                                             no se podra factorizar un numero negativo.
*                                             no se podra factorizar un numero decimal.

**********************


/** \brief Esta funcion pide un numero por medio de un texto y guardara este valor ingresado por
           el usuario.
 *
 * \param Tipo de dato char , Texto que se le muestra al usuario.
 * \return Sera el valor ingresado.
 *
 */
float pedirUnNumero(char texto []);


/** \brief La funcion sera sumar  dos números ingresados por el usuario.
 *
 * \param Tipo de dato float del primer numero ingresado por el usuario.
 * \param Tipo de dato float del segundo numero ingresado por el usuario.
 * \return Esta funcion devolvera la suma de los dos numeros ingresados por el usuario.
 *
 */
float sumar(float,float);


/** \brief La funcion sera restar dos números ingresados por el usuario.
 *
 * \param Tipo de dato float del primer numero ingresado por el usuario.
 * \param Tipo de dato float del segundo numero ingresado por el usuario.
 * \return Esta funcion devolvera la resta de los dos numeros ingresados por el usuario.
 *
 */
float restar(float,float);


/** \brief La funcion sera multiplicar dos números ingresados por el usuario.
 *
 * \param Tipo de dato float del primer numero ingresado por el usuario.
 * \param Tipo de dato float del segundo numero ingresado por el usuario.
 * \return Esta funcion devolvera el producto  de los dos numeros ingresados por el usuario.
 *
 */


float multiplicar(float,float);


/** \brief La funcion sera dividir dos números ingresados por el usuario.
 *
 * \param Tipo de dato float del primer numero ingresado por el usuario que sera el dividendo.
 * \param Tipo de dato float del segundo numero ingresado por el usuario que sera el divisor.
 * \return Esta funcion devolvera el resultado de la division de los dos numeros ingresados por el
           usuario el dividendo (primer numero) y el divisor(segundo numero).
 *
 */


float dividir(float,float);



/** \brief Valida que el segundo numero (el divisor) sea distinto de 0.
 *
 * \param Tipo de dato float del segundo numero ingreso a dividir.
 * \return Tipo de dato int , sera 0 si el segundo numero ingresado (divisor) es 0 y 1 si el
           divisor es otro numero
 *
 */

 int validacionDelDivisor(float);



/** \brief La funcion sera calcular el factorial de un numero.
 *
 * \param Tipo int numero al que se le quiere calcular el factorial (sera de este tipo ya que
          el factorial de un numero con decimal (float) no se puede calcular.
 * \return Esta funcion devolvera el factorial del numero ingresado.
 *
 */


long long int factorial(int);


/** \brief Esta funcion validara un numero al que se le podra calcular el factorial
 *         siendo este , positivo y entero (no se puede calcular el factorial de un decimal (float)
                                            y a la par el factorial de 0.
 *
 * \param  Tipo de dato float del numero a validar.
 * \return Tipo de dato int 1 si el factorial no se puede calcular , con los printf
           correspondientes que expliquen el porque en cada caso.
 *
 */

int validacionDelFactorial(float);


/** \brief Mostrara el resultado de las 4 operaciones realizadas:Suma;Resta;Multiplicacion
                                                                y Division.

 *
 * \param Sera tipo char texto[] ,se mostrara al lado del resultado.
 * \param Tipo de dato float sera el resultado el cual se mostrara por consola.
 *
 */

void resultadoCuentas(char texto[],float);





/** \brief Calcula suma, resta, multiplicación y división de dos numeros, y el factorial del primer numero ingresado.
 *
 * \param Float primer numero para calcular
 * \param Float segundo numero para calcular
 *
 */
void calcularTodasOperaciones(float,float);

