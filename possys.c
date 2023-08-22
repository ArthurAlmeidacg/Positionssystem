/* testpose.c zum Testen der Belegaufgabe 1 */
#include <stdio.h> // Deklaration von printf() für die Testausgabe

/* Dekalaration der Aufgabenfunktion */
unsigned int pose(unsigned int val, unsigned int base);
int rest(int a, int b);

int main(int v, int b){
    v = 3;
    b = 2;
    printf("Mit Basis %d wird der Wert %d dargestellt als %u\n",b, v, pose((unsigned)v,(unsigned)b));
    return 0;
}

unsigned int pose(unsigned int val, unsigned int base){
    if(val >= base && base <= 9 && base >= 2){ // Dabei können Sie davon ausgehen, dass base stets zwischen 2 und 9 ist
        //return (val % base + 10 * pose(val/base, base));
        return (rest(val, base) + 10 * pose(val/base, base));
    }else{
        return val;
    }
}

int rest(int a, int b){
    return a % b;
}



