#include <iostream>
#include <math.h>
using namespace std;
double ortalama(double abc[],int a){
    double ort = 0;

    for (int i=0;i<a;i++) {
        ort+=abc[i];

    }
    return ort/a;
}
int main()
{

    double b1ust=0;
    double b1alt=0;
    double alttoplam=0;
    double b1,b0;
    int boyut;
    cout<<"Veri boyutunu giriniz=";
    cin>>boyut;
    cout<<endl;
    double bagimsiz[boyut];

    for (int i=0;i<boyut;i++) {
        cout<<i+1<<".bagimsiz degiskeni girin=";
        cin>>bagimsiz[i];
    }
    double bagimli[boyut];
    cout<<endl<<endl;
    for (int i=0;i<boyut;i++) {
        cout<<i+1<<".bagimli degiskeni girin=";
        cin>>bagimli[i];
    }

    for (int i=0;i<boyut;i++) {
        b1ust+=((bagimsiz[i]-ortalama(bagimsiz,boyut))*(bagimli[i]-ortalama(bagimli,boyut)));
        }
    for (int i=0;i<boyut;i++) {
        alttoplam=(bagimsiz[i]-ortalama(bagimsiz,boyut));
        alttoplam*=alttoplam;
        b1alt=b1alt+alttoplam;
    }


    b1=b1ust/b1alt;
    b0=ortalama(bagimli,boyut)-(b1*ortalama(bagimsiz,boyut));

    float toplam=0;
    for (int i=0;i<boyut;i++) {
        toplam+=bagimli[i]-((b0+b1*bagimli[i])*(b0+b1*bagimli[i]));
        }
    cout<<endl;
    cout<<"Girdiginiz bagimsiz degiskenlerin ortalamasi="<<ortalama(bagimsiz,boyut)<<endl;
    cout<<"Girdiginiz bagimli degiskenlerin ortalamasi="<<ortalama(bagimli,boyut)<<endl<<endl;
    int x;
    cout<<"Satisini tahmin etmek istediginiz bagimsiz degiskeni girin=";
    cin>>x;
    cout<<endl;
    cout<<"Tahmin sonucu="<<b0+b1*x<<endl;

    return 0;
}
