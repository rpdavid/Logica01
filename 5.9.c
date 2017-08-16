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
 * 5.10 Para participar da categoria OURO do 1o. Campeonato Mundial de 
 * bolinha de Gude o jogador deve pesar entre 70 Kg (inclusive) e 80 Kg
 * (inclusive) e medir de 1,75 m (inclusive) a 1,90 m (inclusive). 
 * Escreva um algoritmo para ler a altura e o peso de um jogador e 
 * determine se o jogador está apto a participar do campeonato escrevendo
 * uma das seguintes mensagens conforme cada situação.
 * “RECUSADO POR ALTURA” - (se somente a altura do jogador for inválida)
 * “RECUSADO POR PESO” - (se somente o peso do jogador for inválido)
 * “TOTALMENTE RECUSADO”-(se a altura e o peso do jogador for inválido)
 * “ACEITO” - (se a altura e o peso do jogador estiverem dentro da faixa especificada)
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float a, p;
			
	printf("informe a altura do jogador: ");
	scanf("%f", &a);

	printf("informe o peso do jogador: ");
	scanf("%f", &p);
	
	if((a >= 1.75 && a <= 1.90) && (p >= 70 && p <= 80)  ){
		printf("ACEITO");
		}
	
	else if((a < 1.75 || a > 1.90) && (p >= 70 && p <= 80)  ){
		printf("RECUSADO POR ALTURA");
		} 		
		
	else if((a >= 1.75 && a <= 1.90) && (p < 70 || p > 80)  ){
		printf("RECUSADO POR PESO");
		}
	
	else if((a < 1.75 || a > 1.90) && (p < 70 || p > 80)  ){
		printf("TOTALMENTE RECUSADO");
		}	
	
	else{
		printf("Algo errado!");
		}
	
		return 0;
		
}

