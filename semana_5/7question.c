#include <stdio.h>
#include <conio.h>

int main(){
	int valor,temp , x10=0, x20=0, x50=0, x100=0;
	printf("Informe um valor a ser sacado: ");
	scanf("%d", &valor);
	temp = valor;
	
	if (valor % 10 == 0){
		printf("Valor invalido.");
	}else{
		while(valor >= 0){
			if (valor % 100 == 0){
				valor = valor - 100;
				x100 += 1;
			}else if (valor % 50 == 0){
				valor = valor - 50;
				x50 += 1;
				}else if (valor % 20 == 0){
						valor = valor - 20;
						x20 += 1;
					} else {
							valor = valor - 10;
							x10 += 1;
						}
                    }
    
                } 
 	printf(" R$ %d corresponde a:\n %d cedulas de 100.\n %d cedulas de 50.\n %d cedulas de 20.\n %d cedulas de 10.\n",temp,x100,x50,x20,x10);
	getch(); return 0;
}