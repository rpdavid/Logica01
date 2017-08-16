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
 * 6.11 Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de
 * um aluno, calcular e imprimir a média semestral. Faça com que o 
 * algoritmo só aceite notas válidas (uma nota válida deve pertencer ao 
 * intervalo [0,10]. Cada nota deve ser validada separadamente. 
 * Deve ser impressa a mensagem "Nota inválida" caso a nota informada
 * não pertença ao intervalo [0,10].
 * 
 * 6.12 Reescreva o algoritmo para o problema 6.11 de forma que no final 
 * seja impressa a mensagem “Novo cálculo (1.sim 2.não)” solicitando ao
 * usuário que informe um código (1 ou 2) indicando se ele deseja ou não 
 * executar o algoritmo novamente. Se for informado o código 1 deve ser 
 * repetida a execução de todo o algoritmo para permitir um novo cálculo,
 * caso contrário ele deve ser encerrado.
 * 
 * 6.13 Reescreva o algoritmo do exercício 6.12 validando a resposta 
 * do usuário para a pergunta “Novo Cálculo (1.sim 2.não)?” 
 * (aceitar apenas os código 1 ou 2).
 * 
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float n1,n2,m;
	int r;
	
	do{
				printf("\n\n Informe as notas do aluno:\n\n ");
				
			do{	
				printf("\n informe a primeira nota: ");
				scanf("%f", &n1);
				
			}while (n1 < 0 || n1 > 10);	
			
			
			
			do{
			
				printf("\n informe a segunda nota: ");
				scanf("%f", &n2);
			
			}while (n2 < 0 || n2 > 10);
			
				m=(n1+n2)/2;
				
				printf("\n\n media do aluno: %.2f \n\n", m);
			
			
			do{	
			
				printf("\n\n Fazer um novo calculo(1-S ou 2-N)?");
				scanf("%d", &r);
			
			}while(r != 1 && r != 2);
			
	}while(r == 1 && r !=2);			
	
	
	return 0;
}
