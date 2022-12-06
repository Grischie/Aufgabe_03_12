default: Getränke_Automat 
Getränke_Automat.o: Getränke_Automat.c
	gcc -c Getränke_Automat.c -o Getränke_Automat.o
Getränke_Automat: Getränke_Automat.o
	gcc Getränke_Automat.o -o Getränke_Automat 

clean:
	-rm -f Getränke_Automat.o
	-rm -f Getränke_Automat 

