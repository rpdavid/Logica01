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
 * 6.1 Escreva um algoritmo para ler uma quantidade indeterminada de 
 * temperaturas em graus Celsius. Para cada temperatura fornecida 
 * escrever a correspondente em graus Fahrenheit. Após a impressão
 * de cada conversão exibir a pergunta "Nova temperatura (1.sim 2.não)?".
 * Se o usuário responder com o valor 2 o algoritmo deve ser encerrado, 
 * caso contrário deverá ler outra temperatura em Celsius.
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float c, f;
	int r;
	
	do{
	system("cls");
	printf("\n\n informe a temperatura em Celcius: ");
	scanf("%f", &c);
	
	f =((c/5)*9)+32;
	
	printf("\n\n a temperatura em Fahrenheit e: %.2f \n\n", f);
	
	printf("\n\n deseja informar uma nova temperatura(1.sim / 2.nao)?");
	scanf("%d", &r);
	}while (r==1);
	
	return 0;
}
