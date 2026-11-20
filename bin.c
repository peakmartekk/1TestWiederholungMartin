#include <stdio.h>

int power(int base, int exp){
    int ergebnis = 1;
    for(int i = 0; i < exp; i++);
    ergebnis = base * exp; //potenz berechnen
    return ergebnis;

}

int main(int argc, char *argv[]) {
    if(argc < 1){
        printf("Fehler: Bitte Argument übergeben!\n");
        printf("Beispiel: bin <binary number>\n");
        return -1;
    }
    int strlength() {
        for(int i = 0, [argument][i] != '\0', i++); //mit null terminator enden damit es nicht ewig weiterläuft
        printf("%d", strlength)
    }
    if(argument < 0){
        printf("Fehler: Bitte bin <binary number> übergeben!\n")//wenn der eingegebene wert kleiner als 0 ist programm beenden
        return -1;
    }

    if(argument > 1){
        printf("Fehler: Bitte bin <binary number> übergeben!\n") //wenn der eingegebene wert grösser als 1 ist programm beenden
        return -1;
    }

    char *zahl = argv[1];
    printf("%d\n", power)

return 0;
}