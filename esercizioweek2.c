#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = '\0';  /*qui ci stavano delle parentesi graffe non necessarie*/
	menu ();
	scanf ("%c", &scelta); /*al posto di %c era inserito %d perchè altrimenti non avrebbe dato la divisione ma soltanto il resto*/

	switch (scelta)
	{
		case 'A':
		moltiplica();
		break;
		case 'B':
                dividi();
                break;
		case 'C':
                ins_string();
                break;
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	int  a,b = 0; /*short  è un comando che da meno numeri rispetto a solo int, quindi è stato preferibile rimuoverlo*/
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a); /*per errore era stato scritto %f al posto di %d*/
	scanf ("%d", &b); 

	short int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);
	printf ("Inserisci il denumeratore:");
        scanf ("%d", &b);

        int divisione = a / b;

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);
}





void ins_string () 
{
	char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);
}
