include <stdio.h>

int main(){
	
	//Getränke-Automat Version 0.1
	
	int einwurf = 0;
	printf("\n Getränke Automat | Bitte werfen Sie 1 Euro ein: ");
	scanf("%d", &einwurf);

	//überprüfe Geldstück
	if(einwurf == 1){
		printf("\nVielen Dank, bitte entnehmen Sie ihr Getränk.\n");
	}
	else{
	printf("\nSie haben kein 1 Euro Stück eingeworfen.\n");	
	}
}

