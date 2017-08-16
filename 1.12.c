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
 * 1.12 Uma loja vende bicicletas com um acréscimo de 50 % sobre o seu 
 * preço de custo. Ela paga a cada vendedor 2 salários mínimos mensais,
 * mais uma comissão de 15 % sobre o preço de custo de cada bicicleta 
 * vendida, dividida igualmente entre eles. Escreva um algoritmo que 
 * leia o número de empregados da loja, o valor do salário mínimo,
 * o preço de custo de cada bicicleta, o número de bicicletas vendidas,
 * calcule e escreva: O salário final de cada empregado e o 
 * lucro (líquido) da loja.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float qtdemp, valsal, custobici, qtdvend, salfinal, lucroloja, comi;
		
	printf("informe o numero de empregados: ");
	scanf("%f", &qtdemp);
	
	printf("informe o valor do salario minimo: ");
	scanf("%f", &valsal);
	
	printf("informe preco de custo de cada bicicleta: ");
	scanf("%f", &custobici);
	
	printf("informe o numero de bicicletas vendidas: ");
	scanf("%f", &qtdvend);
	
	comi=((custobici*0.15)*qtdvend)/qtdemp;
	
	salfinal=(valsal*2)+comi;
	
	lucroloja=((qtdvend*custobici)*0.5)-(salfinal*qtdemp);
	
		
	printf("\n Salario final de cada empregado: R$ %.2f \n", salfinal);
	
	printf("\n Lucro da loja: R$ %.2f \n", lucroloja);
	
	return 0;
}

