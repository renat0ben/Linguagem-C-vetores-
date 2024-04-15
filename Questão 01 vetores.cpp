#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A[8], i;
	for(i=0; i<8; i++){
		printf("Digite o %iº número \n", i+1);
		scanf("%i", &A[i]);
	}
	printf("\nImprimindo na ordem inversa\n");
	for(i=7; i>=0; i--){
		printf("%i\n", A[i]);
}
return(0);
}
