/*
 * 1.1.c
 * 
 * Copyright 2017 RPDavid <RPDavid@DESKTOP-43SOQEJ>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 * 
 * 1.5 Escreva um algoritmo para ler o salário mensal e o percentual
 * de reajuste. Calcular e escrever o valor do novo salário.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float sm, pr, ns;
	
	
	printf("informe o salario atual: ");
	scanf("%f", &sm);
	
	printf("informe o percentual de reajuste do salario: ");
	scanf("%f", &pr);
			
	ns= sm+((sm/100)*pr);
	
	printf("\n o novo salario eh: R$ %.2f \n", ns);
	
	return 0;
}

