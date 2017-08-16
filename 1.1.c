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
 * 1.1 Escreva um algoritmo que calcule e imprima o fatorial de 5.
 * 5! = 5 x 4 x 3 x 2 x1
 */


#include <stdio.h>
#include <math.h>

int main()
{
	int num, x, fat;
	
	printf("Calculo de fatorial. Informe um numero: ");
	scanf("%d", &num);
		x=num-1;
		fat=num;
	while(x > 0){
		fat=fat*x;
		x--;
		}
	printf("O Fatorial de %d eh : %d",num ,fat);
	return 0;
}

