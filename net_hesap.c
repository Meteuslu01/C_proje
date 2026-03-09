#include <stdio.h>
int main() {
int td , ty ,tb ,sd ,sy,sb ,md, my, mb, fd,fy,fb;
float tn , sn, mn, fn;
char ogrenciad[50];

printf("Lutfen ogrencinin adini giriniz: ");
scanf("%s" , &ogrenciad);

while(1){
    printf("\n%s adli ogrencinin Turkce dogrularini giriniz:" , ogrenciad);
    scanf("%d",&td);
    printf("\nsimdi de yanlislari giriniz");
    scanf("%d",&ty);
    if (td > 40 || td < 0 || ty > 40 || ty < 0 || td + ty > 40)
    {
        printf("\nburda bir yanlislik var gibi, bastan degerleri giriniz");

    }
    else
    {
        break;
    }

}

tb = 40 - (td+ty);

while(1)
{
    printf("\n%s adli ogrencinin sosyal dogrularini giriniz:" , ogrenciad);
    scanf("%d",&sd);
    printf("\nsimdi de yanlislari giriniz");
    scanf("%d",&sy);
    if (sd > 20 || sd < 0 || sy > 20 || sy < 0 || sd + sy > 20)
    {
        printf("\nburda bir yanlislik var gibi, bastan degerleri giriniz");

    }
    else
    {
        break;
    }
}

sb= 20 - (sd+sy);

while(1){
    printf("\n%s adli ogrencinin Matematik dogrularini giriniz:" , ogrenciad);
    scanf("%d",&md);
    printf("\nsimdi de yanlislari giriniz ");
    scanf("%d",&my);
    if (md > 40 || md < 0 || my > 40 || my < 0 || md + my > 40)
    {
        printf("\nburda bir yanlislik var gibi, bastan degerleri giriniz ");

    }
    else
    {
        break;
    }
}
mb=40-(md+my);

while(1){
    printf("\n%s adli ogrencinin Fen dogrularini giriniz:" , ogrenciad);
    scanf("%d",&fd);
    printf("\nsimdi de yanlislari giriniz ");
    scanf("%d",&fy);
    if (fd > 20 || fd < 0 || fy > 20 || fy < 0 || fd + fy > 20)
    {
        printf("\nburda bir yanlislik var gibi, bastan degerleri giriniz ");

    }
    else
    {
        break;
    }

}
fb=20 - (fd + fy);

tn = td - (ty / 4.0);
sn = sd - (sy / 4.0);
mn = md - (my / 4.0);
fn = fd - (fy / 4.0);
float toplam_net = tn+sn+mn+fn;

printf("\n%s adli ogrencinin turkce neti:%.2f", ogrenciad,tn);
printf("\n%s adli ogrencinin sosyal neti:%.2f", ogrenciad,sn);
printf("\n%s adli ogrencinin matematik neti:%.2f", ogrenciad,mn);
printf("\n%s adli ogrencinin fen neti:%.2f", ogrenciad,fn);
printf("\n%s adli ogrencinin toplam neti:%.2f" , ogrenciad , toplam_net);
printf("\n%s adli ogrencinin turkce basari yuzdesi:%.2f", ogrenciad , td * 2.5);
printf("\n%s adli ogrencinin matematik basari yuzdesi:%.2f", ogrenciad , md * 2.5);
printf("\n%s adli ogrencinin sosyal basari yuzdesi:%.2f", ogrenciad , sd * 5.0);
printf("\n%s adli ogrencinin fen basari yuzdesi:%.2f", ogrenciad , fd * 5.0);
printf("\n%s adli ogrencinin sinav basari yuzdesi:%.2f", ogrenciad ,(toplam_net / 6) * 5 );
}