#include <stdio.h>

//Gabriel Martinez (8-982-1847)

float MartinezUno(float ingresoMen);
float GabrielUno(float mensual, float ingMens);
float MartinezDos(float ingresoMen2);
float GabrielDos(float mensual2, float ingMens2);
float MartinezTres(float ingresoMen3);
float GabrielTres(float mensual3, float ingMens3);
float MartinezCuatro(float ingresoMen4);
float GabrielCuatro(float mensual4, float ingMens4);
int main(){
	//bloque declarativo de variables
	float  ingresoMensual[4], resultadoMensual[4], descuento[4];
	float salarioMensualArray[4], impuestoRentaArray[4], salarioNetoArray[4];
	int codigo[4];
	char nombre1[15],nombre2[15], nombre3[15], nombre4[15] ;
	
	//bloque de instrucciones
	printf("Introduzca su nombre: ");
	scanf("%s", &nombre1);
	printf("Introduzca su codigo: ");
	scanf("%s", &codigo[1]);
	
	printf("Introduzca su salario mensual: ");
	
	scanf("%f", &salarioMensualArray[1]);
	ingresoMensual[1] = (salarioMensualArray[1] * 13);
	
	//calculo del descuento anual
	MartinezUno(ingresoMensual[1]); 
	
	resultadoMensual[1] = MartinezUno(ingresoMensual[1]);
	
	//calculo del descuento mensual
	GabrielUno(resultadoMensual[1], ingresoMensual[1]); 
	
	descuento[1] = GabrielUno(resultadoMensual[1], ingresoMensual[1]); 
	
	//descuento de impuesto de renta
	impuestoRentaArray[1] = (descuento[1]/12);	
	salarioNetoArray[1] = (salarioMensualArray[1] - impuestoRentaArray[1]);
	if(ingresoMensual < 11000){
		printf("\nNombre: %s", nombre1);
		printf("Salario Bruto: %.2f\n", salarioMensualArray[1]);
		printf("\nSin Descuento\n");
		printf("Salario Neto: %.2f\n", salarioNetoArray[1]);
	}else{
		printf("Nombre: %s", nombre1);
		printf("\nSalario Bruto: %.2f\n", salarioMensualArray[1]);
		printf("Descuento de Impuesto sobre la renta: %.2f", impuestoRentaArray[1]);
		printf("\nSalario Neto: %.2f\n", salarioNetoArray[1]);
		
	
	}
	//bloque de instrucciones persona 2
	printf("Introduzca su nombre: ");
	scanf("%s", &nombre2);
		printf("Introduzca su codigo: ");
	scanf("%s", &codigo[2]);


	printf("Introduzca su salario mensual: ");
	
	scanf("%f", &salarioMensualArray[2]);
	ingresoMensual[2] = (salarioMensualArray[2] * 13);
	
	//calculo del descuento anual
	MartinezDos(ingresoMensual[2]); 
	
	resultadoMensual[2] = MartinezDos(ingresoMensual[2]);
	
	//calculo del descuento mensual
	GabrielDos(resultadoMensual[2], ingresoMensual[2]); 
	
	descuento[2] = GabrielDos(resultadoMensual[2], ingresoMensual[2]); 
	
	//descuento de impuesto de renta
	impuestoRentaArray[2] = (descuento[2]/12);	
	salarioNetoArray[2] = (salarioMensualArray[2] - impuestoRentaArray[2]);
	if(ingresoMensual < 11000){
		printf("\nNombre: %s\n", nombre2);
		printf("Salario Bruto: %.2f\n", salarioMensualArray[2]);
		printf("\nSin Descuento\n");
		printf("Salario Neto: %.2f\n", salarioNetoArray[2]);
	}else{
		printf("Nombre: %s", nombre2);
		printf("\nSalario Bruto: %.2f\n", salarioMensualArray[2]);
		printf("Descuento de Impuesto sobre la renta: %.2f", impuestoRentaArray[2]);
		printf("\nSalario Neto: %.2f\n", salarioNetoArray[2]);
		
	
	}
	//bloque de instrucciones persona 3
	printf("Introduzca su nombre: ");
	scanf("%s", &nombre3);
	printf("Introduzca su codigo: ");
	scanf("%s", &codigo[3]);

	printf("Introduzca su salario mensual: ");
	
	scanf("%f", &salarioMensualArray[3]);
	ingresoMensual[3] = (salarioMensualArray[3] * 13);
	
	//calculo del descuento anual
	MartinezTres(ingresoMensual[3]); 
	
	resultadoMensual[3] = MartinezTres(ingresoMensual[3]);
	
	//calculo del descuento mensual
	GabrielTres(resultadoMensual[3], ingresoMensual[3]); 
	
	descuento[3] = GabrielTres(resultadoMensual[3], ingresoMensual[3]); 
	
	//descuento de impuesto de renta
	impuestoRentaArray[3] = (descuento[3]/12);	
	salarioNetoArray[3] = (salarioMensualArray[3] - impuestoRentaArray[3]);
	if(ingresoMensual < 11000){
		printf("\nNombre: %s\n", nombre3);
		printf("Salario Bruto: %.2f\n", salarioMensualArray[3]);
		printf("\nSin Descuento\n");
		printf("Salario Neto: %.2f\n", salarioNetoArray[3]);
	}else{
		printf("Nombre: %s", nombre3);
		printf("\nSalario Bruto: %.2f\n", salarioMensualArray[3]);
		printf("Descuento de Impuesto sobre la renta: %.2f", impuestoRentaArray[3]);
		printf("\nSalario Neto: %.2f\n", salarioNetoArray[3]);
		
	
	}
	//bloque de instrucciones persona 4
	printf("Introduzca su nombre: ");
	scanf("%s", &nombre4);
	printf("Introduzca su codigo: ");
	scanf("%s", &codigo[4]);
	
	printf("Introduzca su salario mensual: ");
	
	scanf("%f", &salarioMensualArray[4]);
	ingresoMensual[4] = (salarioMensualArray[4] * 13);
	
	//calculo del descuento anual
	MartinezUno(ingresoMensual[4]); 
	
	resultadoMensual[4] = MartinezUno(ingresoMensual[4]);
	
	//calculo del descuento mensual
	GabrielUno(resultadoMensual[4], ingresoMensual[4]); 
	
	descuento[4] = GabrielUno(resultadoMensual[4], ingresoMensual[4]); 
	
	//descuento de impuesto de renta
	impuestoRentaArray[4] = (descuento[4]/12);	
	salarioNetoArray[4] = (salarioMensualArray[4] - impuestoRentaArray[4]);
	if(ingresoMensual < 11000){
		printf("\nNombre: %s\n", nombre4);
		printf("Salario Bruto: %.2f\n", salarioMensualArray[4]);
		printf("\nSin Descuento\n");
		printf("Salario Neto: %.2f\n", salarioNetoArray[4]);
	}else{
		printf("Nombre: %s", nombre4);
		printf("\nSalario Bruto: %.2f\n", salarioMensualArray[4]);
		printf("Descuento de Impuesto sobre la renta: %.2f", impuestoRentaArray[4]);
		printf("\nSalario Neto: %.2f\n", salarioNetoArray[4]);
		
	
	}
}
//gabriel uno es el descuento mensual
//martinez es el impuesto

float MartinezUno(float ingresoMen){ 
	float resta = 0;
	if(ingresoMen >= 11000.0 && ingresoMen <= 50000.0){
		resta = (ingresoMen - 11000.0);
	}
	else if(ingresoMen > 50000.0){
		resta= (ingresoMen - 50000.0);
	}
	return resta;
}

float GabrielUno(float mensual, float ingresoMens){
	float descuentototal = 0;
	if(ingresoMens >= 11000.0 && ingresoMens <= 50000.0){
		descuentototal = (mensual * 0.15);
	}
	else if(ingresoMens > 50000.0){
		descuentototal = (mensual * 0.25);
	}
	return descuentototal;
}

	//Persona 2
float MartinezDos(float ingresoMen2){ 
	float resta2 = 0;
	if(ingresoMen2 >= 11000.0 && ingresoMen2 <= 50000.0){
		resta2 = (ingresoMen2 - 11000.0);
	}
	else if(ingresoMen2 > 50000.0){
		resta2= (ingresoMen2 - 50000.0);
	}
	return resta2;
}

float GabrielDos(float mensual2, float ingresoMens2){
	float descuentototal2 = 0;
	if(ingresoMens2 >= 11000.0 && ingresoMens2 <= 50000.0){
		descuentototal2 = (mensual2 * 0.15);
	}
	else if(ingresoMens2 > 50000.0){
		descuentototal2 = (mensual2 * 0.25);
	}
	return descuentototal2;
}
	//Persona 3
	float MartinezTres(float ingresoMen3){ 
	float resta3 = 0;
	if(ingresoMen3 >= 11000.0 && ingresoMen3 <= 50000.0){
		resta3 = (ingresoMen3 - 11000.0);
	}
	else if(ingresoMen3 > 50000.0){
		resta3= (ingresoMen3 - 50000.0);
	}
	return resta3;
}

float GabrielTres(float mensual3, float ingresoMens3){
	float descuentototal3 = 0;
	if(ingresoMens3 >= 11000.0 && ingresoMens3 <= 50000.0){
		descuentototal3 = (mensual3 * 0.15);
	}
	else if(ingresoMens3 > 50000.0){
		descuentototal3 = (mensual3 * 0.25);
	}
	return descuentototal3;
}
	//Persona 4
	float MartinezCuatro(float ingresoMen4){ 
	float resta4 = 0;
	if(ingresoMen4 >= 11000.0 && ingresoMen4 <= 50000.0){
		resta4 = (ingresoMen4 - 11000.0);
	}
	else if(ingresoMen4 > 50000.0){
		resta4 = (ingresoMen4 - 50000.0);
	}
	return resta4;
}

float GabrielCuatro(float mensual4, float ingresoMens4){
	float descuentototal4 = 0;
	if(ingresoMens4 >= 11000.0 && ingresoMens4 <= 50000.0){
		descuentototal4 = (mensual4 * 0.15);
	}
	else if(ingresoMens4 > 50000.0){
		descuentototal4 = (mensual4 * 0.25);
	}
	return descuentototal4;
}

	