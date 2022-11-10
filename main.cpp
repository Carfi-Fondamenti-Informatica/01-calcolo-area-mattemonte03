#include <iostream>
using namespace std;

int main(){ 
float a=0, b=0, c=0, Atrg=0, Aquad=0, Arett=0, Atrap=0;
  
//Qui vanno definite le variabili

cin >> a >> b >> c;

Atrg=(a*b)/2;
Aquad=a*a;
Arett=a*b;
Atrap=((a+b)*c)/2;

cout<<Atrg<<endl;
cout<<Aquad<<endl;
cout<< Arett<<endl;
cout<< Atrap<<endl;

//Qui va scritto il codice per eseguire i calcoli richiesti
return 0;


}
