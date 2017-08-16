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
 * 1.9 Escreva um algoritmo para ler o número de eleitores de um 
 * município, o número de votos brancos, nulos e válidos. Calcular e 
 * escrever o percentual que cada um representa em relação ao 
 * total de eleitores.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float pb, pn, pv;
	int te, tb, tn, tv;
	
	
	printf("informe o numero de eleitores: ");
	scanf("%d", &te);
	
	printf("informe o total de votos em branco: ");
	scanf("%d", &tb);
	
	printf("informe o total de votos nulos: ");
	scanf("%d", &tn);
	
	printf("informe o total de votos validos: ");
	scanf("%d", &tv);
			
	pb=((100*tb)/te);
	
	pn=((100*tn)/te);
	
	pv=((100*tv)/te);
	
	printf("\n percentual de votos branos: %.2f%% \n", pb);
	
	printf("\n percentual de votos nulos: %.2f%% \n", pn);
	
	printf("\n percentual de votos validos: %.2f%% \n", pv);
	
	return 0;
}

