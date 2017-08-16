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
 * 6.6 Escreva um algoritmo para repetir a leitura de uma senha até que 
 * ela seja válida. Para cada leitura da senha incorreta informada escrever
 * a mensagem "SENHA INVÁLIDA". Quanto a senha for informada corretamente
 * deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo encerrado.
 * Considere que a senha correta é o valor 2009.
 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int senha,senhain;
	
	senha = 2009;
	
	do{
		printf("\n\n Informe a senha (senha correta encerrar 2009):\n\n ");
		
		scanf("%d", &senhain);
		
		if(senhain == senha ){
			printf("\n\n ACESSO PERMITIDO\n\n");
			}
		else{
			printf("\n\n ACESSO NEGADO\n\n");
			}		
	}while (senhain != senha);
	
	return 0;
}
