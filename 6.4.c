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
 * 6.4 Escreva um algoritmo para ler as notas de 2 avaliações de uma 
 * quantidade indeterminada de alunos. Calcular e escrever a média 
 * semestral de cada aluno. O algoritmo deve ser encerrado ao ser fornecido 
 * para a nota da primeira avaliação um valor negativo (nesta situação 
 * a segunda nota não deve ser lida).
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float n1,n2,m;
	
	
	do{
		printf("\n\n Informe as notas do aluno (numero negativo na primeira nota para encerrar):\n\n ");
		
		printf("\n informe a primeira nota: ");
		scanf("%f", &n1);
		
		printf("\n informe a segunda nota: ");
		scanf("%f", &n2);
		
		m=(n1+n2)/2;
		
		printf("\n\n media do aluno: %.2f \n\n", m);
		
	}while (n1 > 0);
	
	return 0;
}
