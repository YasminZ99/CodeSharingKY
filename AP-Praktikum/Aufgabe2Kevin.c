#include <stdio.h>

int main(){
    double Nettobetrag;

    printf("Programm zur Berechnung eines Bruttobetrages\nBitte geben Sie den Nettobetrag in EUR ein: ");
    scanf("%lf", &Nettobetrag);
    printf("Nettobetrag                = %8.2f EUR\n", Nettobetrag);
    printf("Mehrwertsteuersatz 19.00 %% = %8.2f EUR\n", Nettobetrag/100*19);
    printf("Bruttobetrag               = %8.2f EUR\n", (Nettobetrag/100*19)+Nettobetrag);
return 0;
}
