#include <stdio.h>

int main(){
    double a;
    double b;
    printf("Programm zur Berechnung des Umfangs und der Flaeche von Rechtecken\n");
    printf("Bitte geben sie die Seite a in cm ein: ");
    scanf("%lf", &a);
    printf("Bitte geben sie die Seite b in cm ein: ");
    scanf("%lf", &b);
    printf("Die Seite a ist %.2f cm lang.\nDie Seite b ist %.2f cm lang.", a, b);
    printf("\n\nDer Umfang des Rechtecks betraegt %.2f cm.\nDie Flaeche des Rechtecks betraegt %.2f cm^2.", a+a+b+b, a*b);
    return 0;
}