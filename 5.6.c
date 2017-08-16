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
 * 5.6 Escreva um algoritmo que leia as medidas dos lados de um triângulo
 * e escreva se ele é EQUILÁTERO, ISÓSCELES ou ESCALENO.
 * OBS: triângulo equilátero: Possui os 3 lados iguais.
 * triângulo isósceles: Possui 2 lados iguais.
 * triângulo escaleno: Possui 3 lados diferentes.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float l1,l2,l3;
			
	printf("informe a media do primeiro lado do triangulo: ");
	scanf("%f", &l1);

	printf("informe a media do segundo lado do triangulo: ");
	scanf("%f", &l2);
	
	printf("informe a media do terceiro lado do triangulo: ");
	scanf("%f", &l3);
	
			
	if(l1 == l2 && l1 ==l3){
		printf("Triangulo Equilatero");
		}
	else if(l1 == l2 || l1 == l3 || l2 == l3){
		printf("Triangulo Isosceles");
		}
		
	else if(l1 != l2 || l1 !=l3 || l2 != l3){
		printf("Triangulo Escaleno");
		}
		
	else {
		printf("Algo errado!");		}		
		
	
		return 0;
		
}

