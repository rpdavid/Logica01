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
 * 5.3 Escreva um algoritmo para ler as coordenadas (X,Y) de um ponto no
 * sistema cartesiano e escrever o quadrante ao qual o ponto pertence.
 * Caso o ponto não pertença a nenhum quadrante,escrever se ele está 
 * sobre o eixo X, eixo Y ou na origem. Considere que o usuário poderá 
 * informar qualquer valor para as coordenadas.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
		
	printf("informe a coordenada X: ");
	scanf("%f", &x);

	printf("informe a coordenada Y: ");
	scanf("%f", &y);
	
	if(x > 0 && y > 0){
		printf("quadrante I \n");
		}
	else if(x < 0 && y > 0 ){
		printf("quadrante II\n");
		}
		
	else if(x < 0 && y < 0 ){
		printf("quadrante III\n");
		}	
	
	else if(x > 0 && y < 0 ){
		printf("quadrante IV\n");
		}

	else if(x == 0 && y != 0 ){
		printf("Eixo Y\n");
		}
		
	else if(x != 0 && y == 0 ){
		printf("Eixo X\n");
		}
		
	else {
		printf("Origem\n");
		}		
		return 0;
}

