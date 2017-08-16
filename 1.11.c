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
 * 1.11 Um motorista de taxi deseja calcular o rendimento de seu carro 
 * na praça. Sabendo-se que o preço do combustível é de R$ 2,50 
 * escreva um algoritmo para ler: a marcação do odômetro (Km) no início 
 * do dia, a marcação (Km) no final do dia, o número de litros de 
 * combustível gasto e o valor total (R$) recebido dos passageiros. 
 * Calcular e escrever: a média do consumo em Km/L e o lucro (líquido) do dia.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float odoi, odof, qtdcom, valrec, valcom, kmrod, medcom, lucro;
		
	printf("informe o odometro inicial: ");
	scanf("%f", &odoi);
	
	printf("informe o odometro final: ");
	scanf("%f", &odof);
	
	printf("informe a quantidade de combustivel consumido: ");
	scanf("%f", &qtdcom);
	
	printf("informe o valor recebido: ");
	scanf("%f", &valrec);
	
	kmrod=odof-odoi;
	
	medcom=kmrod/qtdcom;
	
	valcom=qtdcom*2.50;
	
	lucro= valrec-valcom;	
	
	printf("\n media de consumo: %.2f km/l \n", medcom);
	
	printf("\n Lucro liquido: R$ %.2f \n", lucro);
	
	return 0;
}

