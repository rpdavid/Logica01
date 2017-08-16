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
 * 1.13.A equipe Ferrari deseja calcular o número mínimo de litros 
 * que deverá colocar no tanque de seu carro para que ele possa percorrer
 * um determinado número de voltas até o primeiro reabastecimento. 
 * Escreva um algoritmo que leia o comprimento da pista (em metros), 
 * o número total de voltas a serem percorridas no grande prêmio, 
 * o número de reabastecimentos desejados, e o consumo de combustível 
 * do carro (em Km/L). Calcular e escrever o número mínimo de litros 
 * necessários para percorrer até o primeiro reabastecimento. 
 * OBS: Considere que o número de voltas entre os reabastecimentos é o mesmo.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float compista, qtdvoltas, qtdreabast, consumo, qtdlts, distotal, distentreab;
		
	printf("informe o comprimento da pista (metros): ");
	scanf("%f", &compista);
	
	printf("informe a quantidade de voltas: ");
	scanf("%f", &qtdvoltas);
	
	printf("informe a quantidade de reabastecimentos: ");
	scanf("%f", &qtdreabast);
	
	printf("informe o consumo do carro(km/l): ");
	scanf("%f", &consumo);
	
	distotal=(compista/1000)*qtdvoltas;
	
	distentreab=distotal/(qtdreabast+1);
	
	qtdlts=distentreab/consumo;
	
	printf("\n quantidade minima de litros: %.2f l \n", qtdlts);
	
	
	return 0;
}

