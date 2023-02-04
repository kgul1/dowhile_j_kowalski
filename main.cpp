#include <iostream>
using namespace  std;

int miejscowoscZamieszkania=1 , iloscMinutDojazdu=0;
int main() {
    do{
        iloscMinutDojazdu +=5;
        miejscowoscZamieszkania *=4;
        cout<<"minelo minut: "<<iloscMinutDojazdu<<endl;
        cout<<"liczba zamieszkanych osob: "<<miejscowoscZamieszkania<<endl;



    } while(miejscowoscZamieszkania <=1000000000);


return 0;
}













