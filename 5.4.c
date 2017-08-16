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
 * 5.4 Escreva um algoritmo para ler as 4 notas obtidas por um aluno 
 * em 4 avaliações. Calcular a média usando a seguinte fórmula:
 * Média= (((n1 + n2)*2 + n3) *3 + n4 )/7 
 * A seguir imprima a média e o conceito do aluno baseado na seguinte tabela:
 * Média Conceito
 * 9,0 ou acima de 9,0 A
 * entre 7,5 (inclusive) e 9,0 B
 * entre 6,0 (inclusive) e 7,5 C
 * abaixo de 6,0 D
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float m, n1, n2, n3, n4;
		
	printf("informe primeira nota: ");
	scanf("%f", &n1);

	printf("informe segunda nota: ");
	scanf("%f", &n2);
	
	printf("informe terceira nota: ");
	scanf("%f", &n3);
	
	printf("informe quarta nota: ");
	scanf("%f", &n4);
	
	m=(n1 + (n2*2) + (n3 *3) + n4 )/7;
	
	if(m >= 9){
		printf("Media: %.2f\n Conceito A", m);
		}
	else if(m >= 7.5 && m < 9 ){
		printf("Media: %.2f\n Conceito B", m);
		}
		
	else if(m >= 6 && m < 7.5 ){
		printf("Media: %.2f\n Conceito C", m);
		}	
		
	else {
		printf("Media: %.2f\n Conceito D", m);		}		
		
	
		return 0;
		
}

