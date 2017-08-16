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
 * 5.2 Escreva um algoritmo para ler um valor e imprimir qual o tipo 
 * de faixa ele se encontra (cheia ou tracejada).
 * -Considere os limites dentro da linha cheia.
 * -Utilize apenas UM comando se ... então ... senão ... para cada exercício.
 * -Apresente 2 soluções diferentes para cada exercício.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float val;
		
	printf("informe um valor: ");
	scanf("%f", &val);
	
	if(val <= 0){
		printf("a) linha cheia \n");
		}
	else{
		printf("a) linha tracejada\n");
		}
		
	if(val >= -8 && val >= 2){
		printf("b) linha cheia \n");
		}
		else{
		printf("b) linha tracejada\n");
		}
		
	if((val >= -8 && val <= 1) || val >= 25){
		printf("C) linha cheia \n");
		}
	else{
		printf("c) linha tracejada\n");
		}
		
	if(val == 10 || val == 20 || val >= 30){
		printf("d) linha cheia \n");
		}
	else{
		printf("d) linha tracejada\n");
		}
		
	
	return 0;
}

