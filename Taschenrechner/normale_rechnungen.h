int starte_normale_rechnungen() {

    int Auswahl = 0;
    char Operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double Ergebnis = 0.0;
 
    
    while (1) {

        printf("Bitte '0' eingeben um ins Hauptmenue zurueckzukehren (nur bei der ersten Stelle eingeben!)\n\n");

        printf("Bitte Rechnung eingeben: \n");
        scanf("%lf", &num1);
        
        if(num1 == 0) {
            system("cls");
            printf("Kehre zum Hautpmenue zurueck");
            sleep(1);
            system("cls");
            break;
        }
        scanf(" %c %lf", &Operator, &num2);

        switch(Operator){
        case '+':
            Ergebnis = num1 + num2;
            break;
        case '-':
            Ergebnis = num1 - num2;
            break;
        case '*':
            Ergebnis = num1 * num2;
            break;
        case '/':
            if(num2 == 0){
                printf("Man kann nicht durch 0 dividieren!\n");
            }
            else{
                Ergebnis = num1 / num2;
            }  
            break;          
        default:
            printf("Keine Valide auswahl!\n");
        }


        printf("%.2lf %c %.2lf = %.2lf\n\n", num1, Operator, num2, Ergebnis);

    }

    return 0;
}