#include <stdio.h>
#include <conio.h>

int main(){

   int K, n1,n2,n3,n4;	
   
   printf("Os palindromos entre 1000 e 9999 sao: ");
   for(K = 1000; K<=9999; K++){
       n1 = K / 1000;
       n2 = K / 100 % 10;
       n3 = K % 100 / 10;
       n4 = K % 10;
       
       if (n1 == n4 && n2 == n3){
	   int palindromo = n4 * 1000 + n3 * 100 + n2 * 10 + n1;
	   printf("%d ", palindromo);
	} 
    }
   getch(); return 0;
}
