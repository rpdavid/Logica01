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
 * Escreva um algoritmo que lê três valores (A, B e C) e calcule:
 * a) a área de um triângulo que tem A por base e B por altura;
 * b) a área do quadrado de lado B.
 * c) a área do retângulo de lados A e B;
 * d) a área do círculo de raio C;
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, at, aq, ar, ac;
	
	printf("informe o valor de A: ");
	scanf("%f", &a);
	
	printf("informe o valor de B: ");
	scanf("%f", &b);
	
	printf("informe o valor de C: ");
	scanf("%f", &c);
		
	at=(a*b)/2;
	
	aq=b*b;
	
	ar=a*b;	
	
	ac=M_PI*(c*c);
		
	printf("\n a area do triangulo de base %.2f e altura %.2f eh: %.2f \n", a, b, at);
	
	printf("\n a area do quadrado de base %.2f eh: %.2f \n", b, aq);
	
	printf("\n a area do retangulo de lados %.2f e %.2f eh: %.2f \n", a, b, ar);
	
	printf("\n a area do circulo de raio %.2f eh: %.6f \n", c, ac);
	
	return 0;
}

