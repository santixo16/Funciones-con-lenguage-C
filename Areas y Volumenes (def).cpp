/**
*Autor: Santiago Hernández
*Institucion: Fundacion universitaria San Mateo
*Carrera: Ingenieria de sistemas
*Semestre 2
*Materia: Programación estructurada
*Tema: Areas y volumenes con funciones en lenguaje C
*/
#include <stdio.h>
#include <conio.h>
#define PI 3.1415926535
//FUNCIONES
void bienvenida();
void esperar();
int areas();
int volumenes();
//FUNCIONES DE AREAS
int areaCircunferencia();
int areaCuadrado();
int areaRectangulo();
int areaRombo();
int areaTrapecio();
int areaTriangulo();
//FUNCIONES DE VOLUMENES
int volumenCilindro();
int volumenCono();
int volumenCubo();
float volumenEsfera();
float volumenPiramide();

/**
*Funcion Main
*pre: TRUE
*pos: Llama a las funciones siguientes, imprime un mensaje para seleccionar la entre opcion 1 y 2 y utiliza un do while para repetir el programa si el usuario lo desea.
*parametro: Ninguno
*Retorno: niguno
*/
main (){
	char pregunta;
	int opcion;
	int opcionAreas, opcionVolumen;
	bienvenida();	
	esperar();		
	
	do{
		printf("\n\nSELECCIONE LA OPCION QUE DESEA REALIZAR\n\n");
		printf("1.AREAS\n2.VOLUMENES\n"); scanf("%d", &opcion);
		switch(opcion){
		case 1:
			areas();
		break;		
		case 2:
			volumenes();
		break;
		default: printf("\n*_*_*_*_Seleccione la opcion 1 o 2*_*_*_*_*\n");
	}	
	fflush(stdin);
        printf("\n\nDesea calcular otro valor? (s/n)?: ");	
        scanf("%c", &pregunta);
	}while(pregunta == 's' || pregunta == 'S');		
	
}
/**
*Funcion Bienvenida
*pre: TRUE
*pos: Se ha imprimido un mensaje en pantalla un mensaje de bienvenida.
*parametro: Ninguno
*Retorno: niguno
*/
void bienvenida(){
	printf("BIENVENIDO AL PROGRAMA PARA CALCULAR AREAS Y VOLUMENES\n\n");
	printf("AUTOR: SANTIAGO HERNANDEZ\n\n");
}
/**
*Funcion Esperar
*pre: Presionar Enter
*pos: La funcion continua a la siguiente
*parametro: ninguno
*retorno: ninguno
*/
void esperar(){
	printf("Presione una tecla para continuar");
	getch();
}
/**
*Funcion Areas
*pre: Seleccionar una opcion entre 1 y 6
*pos: La funcion llama a la funcion escogida y calcula el area
*parametro: ninguno
*retorno: ninguno
*/
int areas(){
	int opcionAreas;
	printf("\n\n****AREAS****\n\n");
	printf("SELECCIONE EL AREA QUE DESEA HALLAR\n"); 
	printf("1.Circunferencia\n2.Cuadrado\n3.Rectangulo\n4.Rombo\n5.Trapecio\n6.Triangulo\n"); scanf("%d", &opcionAreas);
	
	switch(opcionAreas){
		case 1:
			areaCircunferencia();
			break;
		case 2:
			areaCuadrado();
			break;
		case 3:
			areaRectangulo();
			break;
		case 4:
			areaRombo();
			break;
		case 5:
			areaTrapecio();
			break;
		case 6:
			areaTriangulo();
			break;
		default: printf("Seleccione una opcion valida");
	}
		
	return opcionAreas;
}
/**
*Funcion Volumenes
*pre: Seleccionar una opcion entre 1 y 5
*pos: La funcion llama a la funcion escogida y calcula el volumen
*parametro: ninguno
*retorno: ninguno
*/
int volumenes(){
	int opcionVolumen;
	printf("\n\n****VOLUMENES****\n\n");
	printf("SELECCIONE EL VOLUMEN QUE DESEA HALLAR\n"); 
	printf("1.Cilindro\n2.Cono\n3.Cubo\n4.Esfera\n5.Piramide\n"); scanf("%d", &opcionVolumen);
	
	switch(opcionVolumen){
		case 1:
			volumenCilindro();
			break;
		case 2:
			volumenCono();
			break;
		case 3:
			volumenCubo();
			break;
		case 4:
			volumenEsfera();
			break;
		case 5:
			volumenPiramide();
			break;
		default: printf("Seleccione una opcion valida");
	}
}
/**
*Funcion areaCircunferencia
*pre: digitar el valor del radio de la circunferencia
*pos: realiza las operaciones matematicas e imprime el valor del area
*parametro: ninguno
*retorno: ninguno
*/
int areaCircunferencia(){
	int radio=0;
	float area;
	
	printf("*PROGRAMA PARA CALCULAR EL AREA DE UNA CIRCUNFERENCIA*\n");
	printf("AUTOR: Santiago Hernandez\n\n");
	printf("Ingrese el valor del radio de la circunferencia: "); scanf("%d", &radio);
	
	area=3.1415926535*(radio*radio);
	
	printf("El area de la circunferencia es: %f", area);
	
	return area;
}
/**
*Funcion areaCuadrado
*pre: digitar el valor del lado del cuadrado
*pos: realiza las operaciones matematicas e imprime el valor del area
*parametro: ninguno
*retorno: ninguno
*/
int areaCuadrado(){
	int lado=0, area;
	
	printf("*PROGRAMA PARA CALCULAR EL AREA DE UN CUADRADO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");	
	printf("Ingrese el valor del lado del cuadrado: "); scanf("%d", &lado);
	
	area=lado*lado;
	
	printf("El valor del area del cuadrado es: %d", area);
	
	return area;
}
/**
*Funcion areaRectangulo
*pre: digitar el valor de la base y altura del rectangulo
*pos: realiza las operaciones matematicas e imprime el valor del area
*parametro: ninguno
*retorno: ninguno
*/
int areaRectangulo(){
	int base=0, altura=0, area;
	
	printf("*PROGRAMA PARA CALCULAR EL AREA DE UN RECTANGULO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");	
	printf("Ingrese el valor de la base del rectangulo: "); scanf("%d", &base);
	printf("Ingrese el valor de la altura del rectangulo: "); scanf("%d", &altura);
	
	area=base*altura;
	
	printf("El area del rectangulo es: %d", area);
	
	return area;
}
/**
*Funcion areaRombo
*pre: digitar el valor de la diagonal mayor y diagonal menor del rombo
*pos: realiza las operaciones matematicas e imprime el valor del area
*parametro: ninguno
*retorno: ninguno
*/
int areaRombo(){
	float diagonal1=0, diagonal2=0, area;
	
	printf("*PROGRAMA PARA CALCULAR EL AREA DE UN ROMBO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");
	
	printf("Ingrese el valor de la diagonal mayor: "); scanf("%f", &diagonal1);
	printf("Ingrese el valor de la diagonal menor: "); scanf("%f", &diagonal2);
	
	area=(diagonal1*diagonal2)/2;
	
	printf("El area del rombo es: %f", area);	
	
	return area;
}
/**
*Funcion areaTrapecio
*pre: digitar el valor de la primera base, segunda base y altura del trapecio
*pos: realiza las operaciones matematicas e imprime el valor del area
*parametro: ninguno
*retorno: ninguno
*/
int areaTrapecio(){
	float base1=0, base2=0, altura=0, area;
	
	printf("*PROGRAMA PARA CALCULAR EL AREA DE UN TRAPECIO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");
	
	printf("Ingrese el valor de la primera base del trapecio: "); scanf("%f", &base1);
	printf("Ingrese el valor de la segunda base del trapecio: "); scanf("%f", &base2);
	printf("Ingrese el valor de la altura del trapecio: "); scanf("%f", &altura);
	
	area=altura*(base1+base2)/2;
	
	printf("El area del trapecio es: %f", area);
	
	return area;
}
/**
*Funcion areaTriangulo
*pre: digitar el valor de la base y altura del triangulo
*pos: realiza las operaciones matematicas e imprime el valor del area
*parametro: ninguno
*retorno: ninguno
*/
int areaTriangulo(){
	int base=0, altura=0, area;
	
	printf("*PROGRAMA PARA CALCULAR EL AREA DE UN TRIANGULO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");
	
	printf("Ingrese el valor de la base del triangulo: "); scanf("%d", &base);
	printf("Ingrese el valor de la altura del triangulo: "); scanf("%d", &altura);
	
	area=(base*altura)/2;
	
	printf("El area del triangulo es: %d", area);
	
	return area;
}
/**
*Funcion volumenCilindro
*pre: digitar el valor del radio y la altura del cilindro
*pos: realiza las operaciones matematicas e imprime el valor del volumen
*parametro: ninguno
*retorno: ninguno
*/
int volumenCilindro(){
	float radio=0, altura=0;
	float volumen;
	
	printf("*PROGRAMA PARA CALCULAR EL VOLUMEN DE UN CILINDRO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");
	
	printf("Ingrese el valor del radio del cilindro: "); scanf("%f", &radio);
	printf("Ingrese el valor de la altura del cilindro: "); scanf("%f", &altura);
	
	volumen=PI*(radio*radio)*altura;
	
	printf("El volumen del cilindro es: %f", volumen);
	
	return volumen;
}
/**
*Funcion volumenCono
*pre: digitar el valor del radio y la altura del cono
*pos: realiza las operaciones matematicas e imprime el valor del volumen
*parametro: ninguno
*retorno: ninguno
*/
int volumenCono(){
	float altura=0, radio=0;	
	float volumen, areaBase;
	
	printf("*PROGRAMA PARA CALCULAR EL VOLUMEN DE UN CONO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");	
	printf("Ingrese el valor del radio del conoide: "); scanf("%f", &radio);
	printf("Ingrese el valor de la altura del conoide: "); scanf("%f", &altura);
	
	areaBase=PI*(radio*radio);
	volumen=(areaBase*altura)/3;
	
	printf("El volumen del conoide es: %f", volumen);
	
	return volumen;	
}
/**
*Funcion volumenCubo
*pre: digitar el valor del lado del cubo
*pos: realiza las operaciones matematicas e imprime el valor del volumen
*parametro: ninguno
*retorno: ninguno
*/
int volumenCubo(){
	int lado=0, volumen;
	
	printf("*PROGRAMA PARA CALCULAR EL VOLUMEN DE UN CUBO*\n");
	printf("AUTOR: Santiago Hernandez\n\n");	
	printf("Ingrese el valor del lado del cubo:"); scanf("%d", &lado);
	
	volumen=lado*lado*lado;
	
	printf("El volumen del cubo es: %d", volumen);
	
	return volumen;
}
/**
*Funcion volumenEsfera
*pre: digitar el valor del radio de la esfera
*pos: realiza las operaciones matematicas e imprime el valor del volumen
*parametro: ninguno
*retorno: ninguno
*/
float volumenEsfera(){
	float volumen, radio=0;
	
	printf("*PROGRAMA PARA CALCULAR EL VOLUMEN DE UNA ESFERA*\n");
	printf("AUTOR: Santiago Hernandez\n\n");	
	printf("Ingrese el valor del radio de la esfera: "); scanf("%f", &radio);
	
	volumen=(4*PI*(radio*radio*radio))/3;
	
	printf("El volumen de la esfera es: %f", volumen);
	
	return volumen;
}
/**
*Funcion volumenPiramide
*pre: digitar el valor del area base y la altura de la pirámide
*pos: realiza las operaciones matematicas e imprime el valor del volumen
*parametro: ninguno
*retorno: ninguno
*/
float volumenPiramide(){
	int areaBase=0, altura=0;
	float volumen;
	printf("*PROGRAMA PARA CALCULAR EL VOLUMEN DE UNA PIRAMIDE*\n");
	printf("AUTOR: Santiago Hernandez\n\n");	
	printf("Ingrese el valor del area base de la piramide: "); scanf("%d", &areaBase);
	printf("Ingrese el valor de la altura de la piramide: "); scanf("%d", &altura);
	
	volumen=(areaBase*altura)/3;
	
	printf("El volumen de la piramide es: %f", volumen);
	
	return volumen;
}
