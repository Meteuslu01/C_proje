#include <stdio.h> 

int main() {
    float web_p , mobil_p , python_p , ders_ort;
    int web_vize , web_final , mobil_vize , mobil_final, python_vize , python_final;
    char ogrenci_ad[50];

    printf("Not Ortalama Sistemine Hosgeldiniz.\nLutfen ogrencinin adini giriniz: ");
    scanf("%s", &ogrenci_ad);
    

    while(1){
        printf("\nWeb Vize not: ");
        scanf("%d",&web_vize);
        if(web_vize >=0 && web_vize <=100) break;
        else printf("Lutfen mantikli bir puan ver!\n");
    }
    while(1){
        printf("\nWeb Final not: ");
        scanf("%d",&web_final);
        if(web_final >=0 && web_final <=100) break;
        else printf("Lutfen mantikli bir puan ver!\n");
    }

 
    while(1){
        printf("\nMobil Vize not: ");
        scanf("%d",&mobil_vize);
        if(mobil_vize >=0 && mobil_vize <=100) break;
        else printf("Lutfen mantikli bir puan ver!\n");
    }
    while(1){
        printf("\nMobil Final not: ");
        scanf("%d",&mobil_final);
        if(mobil_final >=0 && mobil_final <=100) break;
        else printf("Lutfen mantikli bir puan ver!\n");
    }


    while(1){
        printf("\nPython Vize not: ");
        scanf("%d",&python_vize);
        if(python_vize >=0 && python_vize <=100) break;
        else printf("Lutfen mantikli bir puan ver!\n");
    }
    while(1){
        printf("\nPython Final not: ");
        scanf("%d",&python_final);
        if(python_final >=0 && python_final <=100) break;
        else printf("Lutfen mantikli bir puan ver!\n");
    }

 
    web_p= (web_vize*2.0/5) + (web_final*3.0/5);
    mobil_p= (mobil_vize*2.0/5) + (mobil_final*3.0/5);
    python_p= (python_vize*2.0/5) + (python_final*3.0/5);
    ders_ort= (web_p + mobil_p + python_p)/3;


    if(ders_ort >=50)
        printf("\n%s isimli ogrenci bu sene sinifi basari ile gecti\n", ogrenci_ad);
    else if(ders_ort >=40)
        printf("\n%s isimli ogrenci sartli gecis ile gecti\n", ogrenci_ad);
    else if(ders_ort > 0)
        printf("\n%s isimli ogrenci maalesef sinif tekrarina kaldi\n", ogrenci_ad);
    else
        printf("\n%s isimli ogrencinin okula layik olmadigi tespit edilmistir\n", ogrenci_ad);

    return 0;  
}