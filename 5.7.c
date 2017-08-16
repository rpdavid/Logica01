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
 * 5.7 Escreva um algoritmo que leia a idade de 2 homens e 2 mulheres 
 * (considere que a idade dos homens será sempre diferente, assim como 
 * das mulheres). Calcule e escreva a soma das idades do homem mais velho
 * com a mulher mais nova, e o produto das idades do homem mais novo com
 * a mulher mais velha.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	int m1, m2, h1, h2, s, p;
			
	printf("informe a idade do primeiro homem: ");
	scanf("%d", &h1);

	printf("informe a idade do segundo homem: ");
	scanf("%d", &h2);
	
	printf("informe a idade do primeiro mulher: ");
	scanf("%d", &m1);
	
	printf("informe a idade do segunda mulher: ");
	scanf("%d", &m2);
	
			
	if(h1 > h2 && m1 > m2){
		
		s=h1+m2;
		
		p=h2*m1;
		
		printf("Ssoma de H1 + M2 = %d \n", s);
		
		printf("Ssoma de H2 * M1 = %d \n", p);
		}
		
	else if(h1 > h2 && m2 > m1){
		
		s=h1+m1;
		
		p=h2*m2;
		
		printf("A Soma de H1 + M1 = %d \n", s);
		
		printf("O Produto de H2 * M2 = %d \n", p);
		}
		
	else if(h2 > h1 && m1 > m2){
		
		s=h2+m2;
		
		p=h1*m1;
		
		printf("A Soma de H2 + M2 = %d \n", s);
		
		printf("O Produto de H1 * M1 = %d \n", p);
		}
		
	else if(h2 > h1 && m2 > m1){
		
		s=h2+m1;
		
		p=h1*m2;
		
		printf("A Soma de H2 + M1 = %d \n", s);
		
		printf("O Produto de H1 * M2 = %d \n", p);
		}
	
	else {
		printf("Algo errado!");		}		
		
	
		return 0;
		
}

