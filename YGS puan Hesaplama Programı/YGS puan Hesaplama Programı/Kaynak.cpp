#include<stdio.h>
#include<stdlib.h>

int main(){

float turkce, matematik, sosyal, fen, taban, net1, net2, net3, net4, toplampuan;

printf("Turkce Net Sayisi: ");
scanf_s("%f", &net1);

printf("Matematik Net Sayisi: ");
scanf_s("%f", &net2);

printf("Sosyal Bilgiler Net Sayisi: ");
scanf_s("%f", &net3);

printf("Fen Bilgisi Net Sayisi: ");
scanf_s("%f", &net4);

turkce = 1.999 * net1;
matematik = 3.998 * net2;
sosyal = 1 * net3;
fen = 2.999 * net4;
taban = 100.160;

toplampuan = turkce + matematik + sosyal + fen + taban;

printf("\nYGS Puaniniz: %f", toplampuan);

return 0;
}