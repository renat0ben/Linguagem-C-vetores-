#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=0, sobrn=0;
	char v[50];
	
	printf("Digite o seu nome completo: \n");
	gets (v);
	
	printf("\noi, %s!", v);
	
	for(i=0; v[i] != '\0'; i++){
		if(v[i] != ' '){
			sobrn++;}
		}
	
	printf("\nO seu nome tem %i caracteres!", sobrn);
return(0);
}
