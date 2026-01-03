#include <iostream>
using namespace std;


struct Studenti
{
string Emri;
string Mbiemri;
string Id;
int Notat[5];
void lexo();
void shtyp();
void notaMes();

};


void Studenti::lexo(){
    cout<<"Vendoseni Emri"<<endl;
    cin >> Emri;
    cout<<"Vendoseni Mbiemri"<<endl;
    cin >> Mbiemri;
    cout<<"Vendoseni Id"<<endl;
    cin >> Id;
    cout<<"Vendoseni Notat"<<endl;
    for(int i = 0 ; i < 5;i++){
        cin>> Notat[i];
        
    }
     }


void Studenti::shtyp(){
    cout<<"Emri: "<<Emri<<endl; 
cout<<"Mbiemri: "<<Mbiemri<<endl;
cout<<"Id: "<<Id<<endl;
}





int main(){




    return 0;
}