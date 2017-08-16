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
 * 6.3 Escreva um algoritmo para ler uma quantidade indeterminada de raios
 * de circunferências. Para cada raio informado calcular e escrever o 
 * comprimento da respectiva circunferência. O algoritmo deve ser encerrado 
 * ao ser fornecido para o raio um valor zero ou negativo (nesta situação 
 * o comprimento não deve ser calculado).
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float r, comp;
	
	
	do{
		printf("\n\n informe o Raio da circunferencia (zero ou  numero negativo para encerrar): ");
		scanf("%f", &r);
		
		comp=2*M_PI*r;
		
		printf("comprimento da circunferencia e: %.2f \n\n", comp);
		
	}while (r!=0 && r > 0);
	
	return 0;
}
