#include <stdio.h>

int main(){
	
	//Getränke-Automat Version 0.2
	
	int  auswahl = 0;
	float einwurf = 0;
	printf("\n Getränke Automat v0.2\n");
	printf("\n Wählen Sie ihr Getränk aus:\n 1) Wasser (0,50 Euro)\n 2) Limonade (1,00 Euro)\n 3) Bier (2,00)\n");
	printf("\n Geben Sie 1, 2 oder 3 ein: ");

	scanf("%d", &auswahl);

	//überprüfe Auswahl
 
	switch(auswahl){  
		case 1: printf("\n Bitte werfen Sie 0,50 Euro ein: ");
			scanf("%f",&einwurf);
			if(einwurf == 0.5){
				printf("\n Vielen Dank, bitte entnehmen Sie ihr Getränk.\n\n");
			}
			else{
				printf("\n False!\n\n");
			}
		break;
		case 2: printf("\n Bitte werfen Sie 1,00 Euro ein: ");
			scanf("%f",&einwurf);
			if(einwurf == 1){
				printf("\n Vielen Dank, bitte entnehmen Sie ihr Getränk.\n\n");
			}
				printf("\n False!\n\n");
		break;
		case 3: printf("\n Bitte werfen Sie 2,00 Euro ein: ");
			

			scanf("%f",&einwurf);

			if(einwurf == 2){
				printf("\n Vielen Dank, bitte entnehmen Sie ihr Getränk.\n\n");
			}else{
				printf("\n False!\n\n");
			}
		break;
		}
	

}

