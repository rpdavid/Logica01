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
 * 6.7 Escreva um algoritmo para ler as coordenadas (X,Y) de uma quantidade 
 * indeterminada de pontos no sistema cartesiano.
 * Para cada ponto escrever o quadrante a que ele pertence.
 * O algoritmo será encerrado quando o usuário informar um valor 
 * NULO (zero) para a coordenada X (nesta situação sem fazer a leitura 
 * da coordenada Y).
 * OBS: Considere que não será informado um valor igual a 0 para Y.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;
	
	do{			
		printf("\n informe a coordenada X: ");
		scanf("%f", &x);

		if(x != 0){

			printf("\n informe a coordenada Y: ");
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

			else {
				
				}
			}
	}while	(x != 0);			
		return 0;
}

