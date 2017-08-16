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
 * 5.8 Escreva um algoritmo que leia o valor de 3 ângulos de um triângulo
 * e escreva se o triângulo é acutângulo, retângulo ou obtusângulo.
 * OBS: triângulo retângulo: possui um ângulo reto.
 * triângulo obtusângulo: possui um ângulo obtuso.
 * triângulo acutângulo: possui 3 ângulos agudos.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float a1,a2,a3;
			
	printf("informe o primeiro angulo do triangulo: ");
	scanf("%f", &a1);

	printf("informe o segundo angulo do triangulo: ");
	scanf("%f", &a2);
	
	printf("informe o terceiro angulo do triangulo: ");
	scanf("%f", &a3);
	
			
	if(a1 == 90 || a2 == 90 || a3 == 90){
		printf("Triangulo Retangulo");
		}
	else if(a1 > 90 || a2 > 90 || a3 > 90){
		printf("Triangulo Obtusangulo");
		}
		
	else if(a1 < 90 && a2 < 90 && a3 < 90){
		printf("Triangulo Actuangulo");
		}
		
	else {
		printf("Algo errado!");		}		
		
	
		return 0;
		
}

