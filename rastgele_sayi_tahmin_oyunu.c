#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int a= rand() %100 + 1;
    int b;
    int c=12;

    while(1)
    {
        printf("1'den 100'e kadar rastgele bir tahminde bulun \n %d kadar hakkiniz var\n",c);
        scanf("%d",&b);
        if (c == 0)
        {
            printf("haklariniz bitti, kaybettin.");
            break;
        }
        if (a == b)
        {
            printf("tebrikler, dogru tahmin.");
            break;
        }

        else if (a>b)
        {
            printf("daha buyuk deger giriniz.");
            c = c - 1;
        }

        else 
        {
            printf("daha kucuk bir deger giriniz.");
            c = c - 1;
        }

    }
   

    return 0;
}