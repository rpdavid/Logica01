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
 * 1.8 Escreva um algoritmo para ler as dimensões de uma cozinha 
 * retangular (comprimento, largura e altura), calcular e escrever a 
 * quantidade de caixas de azulejos para se colocar em todas as suas 
 * paredes (considere que não será descontado a área ocupada por portas
 * e janelas). Cada caixa de azulejos possui 1,5 m2.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float c, l, h, a1, a2, at;
	int tcx;
	
	
	printf("informe o compimrnto: ");
	scanf("%f", &c);
	
	printf("informe a largura: ");
	scanf("%f", &l);
	
	printf("informe a altura: ");
	scanf("%f", &h);
			
	a1=(c*h)*2;
	
	a2=(l*h)*2;
	
	at=(a1+a2);
	
	tcx=(at/1.5);
	
	printf("\n quantidade de caixas de azulejos eh: %d \n", tcx);
	
	return 0;
}

