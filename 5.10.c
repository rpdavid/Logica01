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
 * 5.11 O banco GASTADOR Ltda. deseja utilizar o computador para determinar
 * o limite da conta especial de seus clientes a partir do saldo da conta 
 * corrente e da poupança. Escreva um algoritmo para ler o saldo da conta 
 * corrente e da poupança de um cliente e escrever o seguinte:
 * - A mensagem: “SEM CONTA ESPECIAL” se o cliente NÃO possuir o requisito
 * necessário para a conta especial (REQUISITO PARA POSSUIR CONTA ESPECIAL:
 * o saldo em pelo menos uma das duas contas deve estar acima de R$1000,00).
 * - O valor do limite da conta conforme especificação abaixo:
 * * O valor limite da conta especial fornecido ao cliente deve ser 
 * o dobro do maior saldo (entre c.corrente e poupança) ou o tripo do
 * menor saldo. Deve ser fornecido o valor de limite maior entre essas 2 situações.
 * OBS: Considere que os saldos da c.corrente e poupança não são iguais.
 */


#include <stdio.h>
#include <math.h>

int main()
{
	float cc, cp, vla, vlb, maiorv, menorv;
			
	printf("informe o saldo da CC: ");
	scanf("%f", &cc);

	printf("informe saldo da CP: ");
	scanf("%f", &cp);
	
	if(cc > cp){
		maiorv = cc;
		menorv = cp;
		}
	else{
		maiorv = cp;
		menorv = cc;
		}	
	vla=maiorv*2;
	vlb=menorv*3;
	
	if(cc < 1000 && cp < 1000){
		printf("SEM CONTA ESPECIAL");
		}
	
	else if( vla > vlb ){
		printf("Limite da conta: R$ %.2f", vla );
		} 		
		
	else if( vlb > vla ){
		printf("Limite da conta: R$ %.2f", vlb );
		} 		
	
	else{
		printf("Algo errado!");
		}
	
		return 0;
		
}

