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
 * 1.2 Escreva um algoritmo que lê três números, calcule a média aritmética, harmônica e geométrica e
 * escreva as médias calculadas.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, ma, mh, mg;
	
	printf("informe o valor de A: ");
	scanf("%f", &a);
	
	printf("informe o valor de B: ");
	scanf("%f", &b);
	
	printf("informe o valor de C: ");
	scanf("%f", &c);
		
	ma=(a+b+c)/3;
	
	mh=3/((1/a)+(1/b)+(1/c));
	
	mg=cbrt(a+b+c);	
		
	printf("\n a media atitmetica de %.2f, %.2f e %.2f eh: %.6f \n", a, b, c, ma);
	
	printf("\n a media harmonica de %.2f, %.2f e %.2f eh: %.6f \n", a, b, c, mh);
	
	printf("\n a media geometrica de %.2f, %.2f e %.2f eh: %.6f \n", a, b, c, mg);
	
	return 0;
}

