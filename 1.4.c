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
 * 1.4 Escreva um algoritmo que lê a quantidade de horas trabalhadas 
 * em um mês, o valor que recebe 
 * por hora, o número de filhos com idade menor que 14 anos e calcule
 * e imprima o salário desse funcionário. Suponha que para cada filho
 * menor de 14 anos haja um adicional de 2% no salário.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float vh, af, s, sf;
	int ht, nf;
	
	printf("informe a quantidade de hotas trabalhadas: ");
	scanf("%d", &ht);
	
	printf("informe o valor recebido por hora trabalhada: ");
	scanf("%f", &vh);
	
	printf("informe o numero de filhos com menos de 14 anos: ");
	scanf("%d", &nf);
		
	s=ht*vh;
	
	af=(s*0.02);
	
	sf=s+(af*nf);
		
	printf("\n o salario final eh: R$ %.2f \n", sf);
	
	return 0;
}

