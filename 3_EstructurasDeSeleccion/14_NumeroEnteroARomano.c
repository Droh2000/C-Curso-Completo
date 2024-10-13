#include<stdio.h>

int main(){
    int num, unidades=0, decenas=0, centenas=0, millar=0;

    printf("Ingrese un numero entero: ");
    scanf("%i", &num);

    if(num >= 1000){
        millar = num/1000;
    }
    if((num%1000)>=100){
        centenas = (num%1000)/100;
    }
    if((num%1000)>=10 || (centenas%100)>=10){
        decenas = centenas>0?((num%1000)%100)/10:num/10;
    }
    if((num%1000)> 0 || (decenas%10)> 0){
        unidades = decenas>0?(((num%1000)%100)%10): num;
    }

    /*
            Conversion de otra forma:

    unidades = num%10;
    num = num/10;

    decenas = num%10;
    num = num/10;

    centenas = num%10;
    num = num/10;

    millar = num%10;
    num = num/10;
    */

    printf("\nMillar: %i",millar);
    printf("\nCentenas: %i",centenas);
    printf("\nDecenas: %i",decenas);
    printf("\nUnidades: %i",unidades);

    printf("\n\nNumero Romano:\n");

    switch (millar){
        case 1:
            printf("M");
            break;
        case 2:
            printf("MM");
            break;
        case 3:
            printf("MMM");
            break;
        case 4:
            printf("IV_");
            break;
        case 5:
            printf("V_");
            break;
        case 6:
            printf("VI_");
            break;
        case 7:
            printf("VII_");
            break;
        case 8:
            printf("VIII_");
            break;
        case 9:
            printf("IX_");
            break;
    }

    switch (centenas){
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5:
            printf("D");
            break;
        case 6:
            printf("DC");
            break;
        case 7:
            printf("DCC");
            break;
        case 8:
            printf("DCCC");
            break;
        case 9:
            printf("CM");
            break;
    }

    switch (decenas){
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;                                
    }

    switch (unidades){
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("II");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
    }

    return 0;
}