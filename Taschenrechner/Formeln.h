int starte_Formeln() {

    int Auswahl = 0;
    int zurueck = 0;

    int Rechteck = 0;
    int Quadrat = 0;
    int Allgemeines_Dreieck = 0;
    int Rechtwinkliges_Dreieck = 0;
    int Gleichschenkliges_Dreieck = 0;
    int Kreis = 0;
    int Wuerfel = 0;
    int Quader = 0;
    int Drehzylinder = 0; 
    int Drehkegel = 0;
    char keineAngabe[10];

    double a = 0;
    double b = 0;
    double c = 0;
    double r = 0;
    double d = 0;
    double h = 0;
    double ha = 0;
    double hb = 0;
    double hc = 0;
    double const Pi = 3.14159265358979;
    double A = 0;
    double U = 0;
    double O = 0;
    double V = 0;
    double G = 0;
    double M = 0;
    double Ergebnis = 0;

    while(1){

        printf("+-------------------------------------------------------------------------------+\n");
        printf("|   Waehle Formel aus:       ('0' eingeben um zum Hauptmenue zu kommen)         |\n");
        printf("+-------------------------------------------------------------------------------+\n");
        printf("|  1. Rechteck                                                                  |\n");
        printf("|  2. Quadrat                                                                   |\n");
        printf("|  3. Allg. Dreieck                                                             |\n");
        printf("|  4. Rechtw. Dreieck                                                           |\n");
        printf("|  5. Gleichsch. Dreieck                                                        |\n");
        printf("|  6. Gleichsei. Dreieck                                                        |\n");
        printf("|  7. Kreis                                                                     |\n");
        printf("|  8. Wuerfel                                                                   |\n");
        printf("|  9. Quader                                                                    |\n");
        printf("| 10. Drehzylinder                                                              |\n");
        printf("| 11. Drehkegel                                                                 |\n");
        printf("+-------------------------------------------------------------------------------+\n");
        printf("Auswahl: ");
        scanf("%d", &Auswahl);
      
        if(Auswahl == 0) {
            system("cls");
            printf("Kehre ins Hauptmenue zurueck...");
            sleep(1);
            system("cls");
            break;
        }                                                                                                
        
        system("cls");
        
        switch(Auswahl){
            case 1:             // Rechteck
                while(1){
                    system("cls");

                    printf("+-------------------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                            Rechteck                                             |\n");
                    printf("|                                 (x eingeben falls keine Angabe)                                 |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'a' gefragt wird)            |\n");
                    printf("+-------------------------------------------------------------------------------------------------+\n");

                    a = -1; 
                    b = -1;
                    U = -1;
                    A = -1;
                
                    printf("Seite a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == 0) {
                            scanf(" %c", &keineAngabe[0]);
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }                    

                    if(a == 0){
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }
               
                    printf("Seite b: ");
                    scanf("%lf", &b);
                    if(b == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            scanf(" %c", &keineAngabe[0]);
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }  

                    if(b == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }    
                    
                    if(a == -1 && b == -1 && U == -1 && A == -1) {
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }
                    
                    if(a == -1) {
                        if(U > 0 && b > 0) {
                            a = (U / 2) - b;
                        }
                        else if(A > 0 && b > 0) {
                            a = A / b;
                        }
                    }
                    if(b == -1) {
                        if (U > 0 && a > 0) {
                            b = (U / 2) - b;
                        }
                        else if(A > 0 & a > 0) {
                            b = A / a;
                        }
                    }

                    if(U == -1) {
                        U = 2 * (a + b);
                    }
                    if(A == -1) {
                        A = a * b;
                    }

                    printf("\n+------------------------------------------+\n");
                    printf("| a = %.2lf = (%.2lf / 2) - %.2lf\n", a, U, b);
                    printf("| b = %.2lf = (%.2lf / 2) - %.2lf\n", b , U, a);
                    printf("| Umfang = %.2lf = 2 * (%.2lf + %.2lf)\n", U, a, b);
                    printf("| Flaeche = %.2lf = %.2lf * %.2lf\n", A, a , b);
                    printf("+------------------------------------------+\n");

                    printf("\n\nDruecke 'Enter' fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1);           
                }
                break;
            case 2:             // Quadrat
                while(1){
                    printf("+-------------------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                             Quadrat                                             |\n");
                    printf("|                                 (x eingeben falls keine Angabe)                                 |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'a' gefragt wird)            |\n");
                    printf("+-------------------------------------------------------------------------------------------------+\n");

                    a = -1; 
                    U = -1;
                    A = -1;

                    printf("a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            scanf(" %c", &keineAngabe[0]);
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    } 

                    if(a == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }

                    if(a == -1 && U == -1 && A == -1) {
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }
                  
                    if(a == -1) {
                        if(U > 0) {
                            a = U / 4;
                        }
                        else if(A > 0) {
                            a = sqrt(A);
                        }
                    }
                    if(U == -1) {
                        U = 4 * a;
                    }
                    if(A == -1) {
                        A = pow(a, 2);
                    }

                    printf("\n+------------------------------------------+\n");
                    printf("| a = %.2lf = %.2lf / 4\n", a, U);
                    printf("| Umfang = %.2lf = 4 * %.2lf\n", U, a);
                    printf("| Flaeche = %.2lf = %.2lf * %.2lf\n", A, a, a);
                    printf("+--------------------------------------------+\n");

                    printf("\n\nDruecke Enter fuer eine neue Rechnung");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1);
                }
                break;
            case 3:             // Allgemeines Dreieck
                while(1){

                    printf("+-------------------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                       Allgemeines Dreieck                                       |\n");
                    printf("|                                 (x eingeben falls keine Angabe)                                 |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'a' gefragt wird)            |\n");
                    printf("+-------------------------------------------------------------------------------------------------+\n");

                    a = -1; 
                    b = -1;
                    c = -1;
                    ha = -1;
                    hb = -1;
                    hc = -1;
                    U = -1;
                    A = -1;

                    printf("a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            scanf(" %c", &keineAngabe[0]);
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    } 

                    if(a == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }

                    printf("Hoehe a: ");
                    scanf("%lf", &ha);
                    if(ha == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Hoehe b: ");
                        if(scanf("%lf", &hb) == -1) {
                            printf("Hoehe c: ");
                            scanf("%lf", &hc);
                        }
                    }                     

                    printf("b: ");
                    scanf("%lf", &b);
                    if(b == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }

                    printf("c: ");
                    scanf("%lf", &c);
                    if (c == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }

                    if(a == -1 && b == -1 && c == -1 && ha == -1 && hb == -1 && hc == -1 && U == -1 && A == -1) {
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }

                    if(a > 0 && b > 0 && c > 0) {
                        U = a + b + c;
                    }
                    
                    if(ha > 0) {
                        A = (a * ha) / 2;
                    }
                    else if(hb > 0) {
                        A = (b * hb) / 2;
                    }
                    else if(hc > 0) {
                        A = (c * hc) / 2;
                    }

                    if(a == -1) {
                        if(U > 0) {
                            a = U - b - c;
                        }
                        else if(A > 0 && ha > 0) {
                            a = (2 * A) / ha;
                        }
                    }

                    if(b == -1) {
                        if(U > 0) {
                            b = U - a - c;
                        }
                        else if(A > 0 && hb > 0) {
                            b = (2 * A) / hb;
                        }
                    }

                    if(c == -1) {
                        if(U > 0){
                            c = U - a - b;
                        }
                        else if(A > 0 && hc > 0) {
                            c = (2 * A) / hc;
                        }
                    }

                    printf("+---------------------------------------------+\n");
                    printf("| a = %.2lf = %.2lf - %.2lf - %.2lf\n", a, U, b, c);
                    printf("| b = %.2lf = %.2lf - %.2lf - %.2lf\n", b, U , a, c);
                    printf("| c = %.2lf = %.2lf - %.2lf - %.2lf\n", c, U, a, b);
                    printf("| U = %.2lf = %.2lf + %.2lf + %.2lf\n", U, a, b , c);
                    printf("| A = %.2lf = (%.2lf * %.2lf) / 2\n", A, a, ha);
                    printf("+---------------------------------------------+");

                    printf("\n\nDruecke Enter fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1); 
                }
                break;
            case 4:             // Rechtwinkliges Dreieck   
                while(1){

                    printf("+----------------------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                       Rechtwinkliges Dreieck                                       |\n");
                    printf("|                                 (x eingeben falls keine Angabe)                                    |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'a' gefragt wird)               |\n");
                    printf("+----------------------------------------------------------------------------------------------------+\n");

                    a = -1; 
                    b = -1;
                    c = -1;
                    U = -1;
                    A = -1;

                    printf("Kathete a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe[0]);
                    } 

                    if(a == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }

                    printf("Kathete b: ");
                    scanf("%lf", &b);
                    if(b == -1) {
                        scanf(" %c", &keineAngabe[0]);
                    }

                    printf("Hypotenus c: ");
                    scanf("%lf", &c);
                    if (c == -1) {
                        scanf(" %c", &keineAngabe[0]);
                    }

                    if(a == -1 && b == -1 && c == -1 && U == -1 && A == -1) {
                        printf("Berechnung nicht moeglich!");
                        system("cls");
                    }

                    if(a == -1 && b > 0 && c > 0) {
                        a = sqrt(pow(c, 2) - pow(b, 2));
                    }
                    if(a > 0 && b == -1 && c > 0) {
                        b = sqrt(pow(c, 2) - pow(a, 2));
                    }
                    if(a > 0 && b > 0 && c == -1) {
                        c = sqrt(pow(a, 2) * pow(b, 2));
                    } 
                    if(a > 0 && b > 0 && c > 0) {
                        U = a + b + c;
                        A = (a * b) / 2;
                    }


                    printf("+--------------------------------------+\n");
                    printf("| a = %.2lf = Wurzel aus %.2lf^2 - %.2lf^2\n", a, c, b);
                    printf("| b = %.2lf = Wurzel aus %.2lf^2 - %.2lf^2\n", b, c, a);
                    printf("| c = %.2lf = Wurzel aus %.2lf^2 + %.2lf^2\n", c, a, b);
                    printf("| U = %.2lf = %.2lf + %.2lf + %.2lf\n", U, a, b, c);
                    printf("| A = %.2lf = (%.2lf * %.2lf) / 2\n", A, a, b);
                    printf("+--------------------------------------+");

                    printf("\n\nDruecke Enter fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1); 

                }
                break;
            case 5:             // Gleichschenkliges Dreieck
                while(1){
                    printf("+----------------------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                    Gleichschenkliges Dreieck                                       |\n");
                    printf("|                                 (x eingeben falls keine Angabe)                                    |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'a' gefragt wird)               |\n");
                    printf("+----------------------------------------------------------------------------------------------------+\n");

                    a = -1; 
                    c = -1;
                    hc = -1;
                    U = -1;
                    A = -1;

                    printf("a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }

                    if(a == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }
                    
                    printf("c: ");
                    scanf("%lf", &c);
                    if(c == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }

                    printf("hc: ");
                    scanf("%lf", &hc);
                    if(hc == -1) {
                        scanf(" %c", &keineAngabe[0]);
                    }

                    if(a == -1 && c == -1 && hc == -1 && U == -1 && A == -1){
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }

                    
                    if(a == -1 && c > 0) {
                        a = (U - c) / 2;
                    }
                    if(a > 0 && c == -1) {
                        c = U - 2 * a;
                    }
                    if(a > 0 && c > 0 && hc == -1) {
                        hc = sqrt(pow(a, 2) - pow((c / 2), 2));
                    }
                    if(a > 0 && c > 0) {
                        U = 2 * a + c;
                    }
                    if(c > 0 && hc > 0) {
                        A = (c * hc) / 2;
                    }


                    printf("+------------------------------------+\n");
                    printf("| a = %.2lf = (%.2lf - %.2lf) / 2\n", a, U, c);
                    printf("| c = %.2lf = %.2lf - 2 * %.2lf\n", c, U, a);
                    printf("| hc = %.2lf = Wurzel aus %.2lf^2 - (%.2lf /2)^2\n", hc, a, c);
                    printf("| U = %.2lf = 2 * %.2lf + %.2lf\n", U, a, c);
                    printf("| A = %.2lf = (%.2lf * %.2lf) / 2\n", A, c, hc);
                    printf("+------------------------------------+");

                    printf("\n\nDruecke Enter fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1); 
                }
                break;

            case 6:         // Gleichseitiges Dreieck
                while(1) {
                    printf("+---------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                      Kreis                                            |\n");
                    printf("|                          (x eingeben falls keine Angabe)                              |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'a' gefragt wird)  |\n");
                    printf("+---------------------------------------------------------------------------------------+\n");

                    a = -1;
                    h = -1;
                    U = -1;
                    A = -1;

                    printf("a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe);
                    }

                    if(a == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }

                    printf("h: ");
                    scanf("%lf", &h);
                    if(h == -1) {
                        scanf(" %c", &keineAngabe);
                    }


                    printf("Umfang: ");
                    scanf("%lf", &U);
                    if(U == -1) {
                        scanf(" %c", &keineAngabe);
                    }

                    printf("Flaeche: ");
                    scanf("%lf", &A);
                    if(A == -1) {
                        scanf(" %c", &keineAngabe);
                    }

                    if(a == -1 && h == -1 && U == -1 && A == -1) {
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }

                    if(a == -1 && h > 0) {
                        a = (2 * h) / sqrt(3);
                    }
                    if(a > 0 && h == -1) {
                        h = (a * sqrt(3)) / 2;
                    }
                    if(U == -1 && a > 0) {
                        U = 3 * a;
                    }
                    if(A == -1 && a > 0) {
                        A = (pow(a, 2) * sqrt(3)) / 4;
                    }

                    printf("+-------------------------------+\n");
                    printf("| a = %.2lf = (2 * %.lf) / Wurzel aus 3\n", a, h);
                    printf("| h = %.2lf = (%.lf * Wurzel aus 3) / 2\n", h, a);
                    printf("| U = %.2lf = 3 * %.2lf\n", U, a);
                    printf("| A = %.2lf = (%.2lf^2 * Wurzel aus 3) / 4\n", A, a);
                    printf("+-------------------------------+");

                    printf("\n\nDruecke Enter fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1); 
                }
                break;


            case 7:         // Kreis
                while(1) {
                    printf("+---------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                      Kreis                                            |\n");
                    printf("|                          (x eingeben falls keine Angabe)                              |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'r' gefragt wird)  |\n");
                    printf("+---------------------------------------------------------------------------------------+\n");

                    r = -1;
                    d = -1;

                    printf("r: ");
                    scanf("%lf", &r);
                    if(r == -1) {
                        scanf(" %c", &keineAngabe[0]);
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }

                    if(r == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }

                    printf("d: ");
                    scanf("%lf", &d);
                    if(d == -1) {
                        printf("Umfang: ");
                        if(scanf("%lf", &U) == -1) {
                            printf("Flaeche: ");
                            scanf("%lf", &A);
                        }
                    }
                    if(r == -1 && d == -1 && U == -1 && A == -1) {
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }

                    if(r == -1 && d > 0) {
                        r = d / 2;
                    }
                    if(r > 0 && d > -1) {
                        d = r * 2;
                    }
                    if(r == -1 && d == -1 && U > 0) {
                        r = U / 2 * Pi;
                        d = U / Pi;
                    }
                    if(r == -1 && A > 0) {
                        sqrt(A / Pi);
                    }
                    if(r > 0 && A == -1) {
                        A = pow(r, 2) * Pi;
                    } 
                    if(r > 0 || d > 0 && U == -1) {
                        U = 2 * r * Pi;
                        U = d * Pi;
                    }

                    printf("+------------------------------+\n");
                    printf("| r = %.2lf = %.2lf / 2\n", r, d);
                    printf("| d = %.2lf = %.2lf * 2\n", d, r);
                    printf("| U = %.2lf = %.2lf * %.3lf\n", U, d, Pi);
                    printf("| A = %.2lf = %.2lf^2 * %.3lf\n", A, r, Pi);
                    printf("+------------------------------+");

                    printf("\n\nDruecke Enter fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1); 
                }
                break; 
            
            case 8:
                while(1) {

                    printf("+---------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                      Wuerfel                                          |\n");
                    printf("|                          (x eingeben falls keine Angabe)                              |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'a' gefragt wird)  |\n");
                    printf("+---------------------------------------------------------------------------------------+\n");

                    a = -1;
                    O = -1;
                    V = -1;
                    G = -1;

                    printf("a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe);
                        printf("Grundflaeche: ");
                        if(scanf("%lf", &G) == -1) {
                            printf("Oberflaeche: ");
                            if(scanf("%lf", &O) == -1){
                                printf("Volumen: ");
                                scanf("%lf", &V);
                            }
                        }
                    }

                    if(a == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(1);
                        system("cls");
                        break;
                    }

                    if(a == -1 && V == -1 && O == -1 && G == -1) {
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }

                    if(a == -1 && O > 0) {
                        a = sqrt(O / 6);
                    }
                    else if(G > 0) {
                        a = sqrt(G);
                    }
                    else if(V > 0) {
                        a = cbrt(V);
                    }
                    if(a > 0 && O == -1) {
                        O = 6 * pow(a, 2);
                    }
                    else if(V == -1) {
                        V = pow(a, 3);
                    }
                    else if(G == -1) {
                        G = pow(a, 2);
                    }

                    printf("+-----------------------------------+\n");
                    printf("| a = %.2lf = Wurzel aus %.2lf / 6\n", a, O);
                    printf("| O = %.2lf = 6 * %.2lf^2\n", O, a);
                    printf("| V = %.2lf = %.2lf^3\n", V, a);
                    printf("| G = %.2lf = %.2lf^2\n", G, a);
                    printf("+-----------------------------------+");

                    printf("\n\nDruecke Enter fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1); 
                }
                break;

            case 9:         // Quader
                while(1) {

                    printf("+---------------------------------------------------------------------------------------+\n");                                 
                    printf("|                                      Quader                                           |\n");
                    printf("|                          (x eingeben falls keine Angabe)                              |\n");
                    printf("| '0' eingeben um zu Formeln zurueckzukehren (Nur eingeben wenn nach 'r' gefragt wird)  |\n");
                    printf("+---------------------------------------------------------------------------------------+\n");

                    a = -1;
                    b = -1;
                    h = -1;
                    O = -1;
                    V = -1;

                    printf("a: ");
                    scanf("%lf", &a);
                    if(a == -1) {
                        scanf(" %c", &keineAngabe);
                        printf("Volumen:");
                        if(scanf("%lf", &V) == -1){
                            printf("Oberflaeache: ");
                            if(scanf("%lf", &O) == -1) {
                                printf("Grundflache: ");
                                scanf("%lf", &G);
                            }
                        }
                    }

                    if(a == 0) {
                        system("cls");
                        printf("Kehre zu Formeln zurueck...");
                        sleep(2);
                        system("cls");
                        break;
                    }

                    printf("b: ");
                    scanf("%lf", &b);
                        if(b == -1) {
                        scanf(" %c", &keineAngabe);
                        printf("Volumen:");
                        if(scanf("%lf", &V) == -1){
                            printf("Oberflaeache: ");
                            if(scanf("%lf", &O) == -1) {
                                printf("Grundflache: ");
                                scanf("%lf", &G);
                            }
                        }
                    }

                    printf("h: ");
                    scanf("%lf", &h);
                        if(b == -1) {
                        scanf(" %c", &keineAngabe);
                        printf("Volumen:");
                        if(scanf("%lf", &V) == -1){
                            printf("Oberflaeache: ");
                            if(scanf("%lf", &O) == -1) {
                                printf("Grundflache: ");
                                scanf("%lf", &G);
                            }
                        }
                    }

                    if(a == -1 && b == -1 && G == -1 && V == -1 && O == -1) {
                        printf("Berechnung nicht moeglich!");
                        sleep(2);
                        system("cls");
                    }

                    if(a == -1 && V > 0 && b > 0 && h > 0) {
                        a = V / (b * h); 
                    }
                    else if(O > 0) {
                        a = (O / 2 - b * h) / b + c;
                    }
                    if(b == -1 && V > 0 && a > 0 && h > 0) {
                        b = V / a * h;
                    }
                    else if(O > 0) {
                        b = (O / 2 - b * c) / a + c;
                    }
                    if(h == -1 && V > 0 && a > 0 && b > 0) {
                        h = V / a * b;
                    }
                    else if(O > 0) {
                        (O / 2 - b * c) / a + b;
                    }
                    
                    if(V == -1 && a > 0 && b > 0 && h > 0) {
                        V = a * b * c;
                    }
                    if(O == -1 && a > 0 && b > 0 && h > 0) {
                        O = 2 * (a * b + a * h + b * h);
                    }

                    printf("+------------------------------------+\n");
                    printf("| a = %2.lf = %.2lf / (%.2lf * %.2lf)\n", a, V, b, h);
                    printf("| b = %2.lf = %.2lf / (%.2lf * %.2lf)\n", b, V, a, h);
                    printf("| h = %2.lf = %.2lf / (%.2lf * %.2lf)\n", h, V, a, b);
                    printf("| O = %.2lf = 2 * (%.2lf * %.2lf + %.2lf * %.2lf + %.2lf * %.2lf)\n", O, a, b, a, c, b, c);
                    printf("| V = %.2lf = %.2lf * %.2lf * %.2lf * %.2lf\n", V, a, b, c);
                    printf("+------------------------------------+");
                    

                    printf("\n\nDruecke Enter fuer eine neue Rechnung: ");

                    while (getchar() != '\n');
                    getchar();
                        system("cls");                                      
                        sleep(1); 
                }
                break;



    }

    return 0;
}  