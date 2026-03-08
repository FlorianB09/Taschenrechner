#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>

#include "Formeln.h"
#include "Umrechnungen.h"
#include "normale_rechnungen.h"



int main() {

    int auswahl = 0;

    while (1) {
        printf("+------------------------------------+\n");
        printf("| 1: Normale Rechnungen (+ - * /)    |\n");
        printf("| 2: Formeln                         |\n");
        printf("| 3: Umrechnungen (Masseinheiten)    |\n");
        printf("| 0: Beenden                         |\n");
        printf("+------------------------------------+\n");
        printf("Auswahl: ");

        scanf(" %d", &auswahl);

        switch(auswahl){
            case 1:
                system("cls");
                starte_normale_rechnungen();
                break;
            case 2:
                system("cls");
                starte_Formeln();
                break;
            case 3:
                system("cls");
                starte_Umrechnungen();
                break;
            case 0:
                printf("Programm beendet");
                return 0;
        }
    }
    return 0;
}