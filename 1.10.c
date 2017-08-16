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
 * 1.10 A turma C é composta de 60 alunos, e a turma D de 20 alunos.
 * Escreva um algoritmo que leia o percentual de alunos reprovados na 
 * turma C, o percentual de aprovados na turma D, calcule e escreva: 
 * a) A quantidade de alunos reprovados na turma C. 
 * b) A quantidade de alunos reprovados na turma D. 
 * c) A percentagem de alunos reprovados em relação ao total de alunos das duas turmas.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float prc, pad, ptr, rc, rd;
	int c, d ;
	
	
	printf("informe o percentual de reprovados na turma C: ");
	scanf("%f", &prc);
	
	printf("informe o percentual de aprovados na turma D: ");
	scanf("%f", &pad);
	
	c=60;
	
	d=20;
	
	rc=((c*prc)/100);
	
	rd=(d-(d*pad)/100);
	
	ptr=((rc+rd)*100)/(c+d);
	
	printf("\n quantidade de alunos reprovados em C: %.0f \n", rc);
	
	printf("\n quantidade de alunos reprovados em D: %.0f \n", rd);
	
	printf("\n percentual total de alunos reprovados em C e D: %.2f%% \n", ptr);
	
	return 0;
}

