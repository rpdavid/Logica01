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
6.8 Para que a divisão entre 2 números possa ser realizada, o divisor não 
* pode ser zero. Escreva um algoritmo para ler 2 valores e imprimir o 
* resultado da divisão do primeiro pelo segundo.
* OBS: O programa deve validar a leitura do segundo valor (que não deve ser zero).
* Enquanto for fornecido um valor zero a leitura (apenas do segundo valor) deve ser repetida.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float v1, v2, r;
	
	printf("\n informe dois valores para a divisão (divisor diferente de zero) : ");
	
	printf("\n Informe o Dividendo:");
	scanf("%f", &v1);
	
	do{			
		printf("\n informe o Divisor: ");
		scanf("%f", &v2);
		
	}while	(v2 == 0);
	
	r=v1/v2;
	
	printf("\n\n O resultado da divisão: %.2f", r);			
		return 0;
}

