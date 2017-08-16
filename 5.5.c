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
 * 5.5 Um posto está vendendo combustíveis com a seguinte tabela de descontos:
 * Álcool: Até 20 litros, desconto de 3 % por litro.
 * Acima de 20 litros, desconto de 5 % por litro.
 * Gasolina: Até 15 litros, desconto de 3,5 % por litro.
 * Acima de 15 litros, desconto de 6 % por litro
 * Escreva um algoritmo que leia o número de litros vendidos, o tipo de 
 * combustível (codificado da seguinte forma: 1-álcool 2-Gasolina), 
 * o preço do combustível, calcule e imprima o valor a ser pago pelo cliente.
 * OBS: Considere que serão informados apenas códigos válidos.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float qtd, vl, vt;
	int t;
		
	printf("informe o tipo de combustivel (1-alcool/2-Gasolina): ");
	scanf("%d", &t);

	printf("informe a quantidade de combustivel: ");
	scanf("%f", &qtd);
	
	printf("informe o valor do combustivel: ");
	scanf("%f", &vl);
	
			
	if(t == 1 && qtd <= 20){
		vt=(qtd*vl)*0.97;
		printf("Valor a ser pago: R$ %.2f", vt);
		}
	else if(t == 1 && qtd > 20){
		vt=(qtd*vl)*0.95;
		printf("Valor a ser pago: R$ %.2f", vt);
		}
		
	else if(t == 2 && qtd <= 15){
		vt=(qtd*vl)*0.965;
		printf("Valor a ser pago: R$ %.2f", vt);
		}
		
		
	else if(t == 2 && qtd > 15){
		vt=(qtd*vl)*0.94;
		printf("Valor a ser pago: R$ %.2f", vt);
		}
	else {
		printf("Algo errado!");		}		
		
	
		return 0;
		
}

