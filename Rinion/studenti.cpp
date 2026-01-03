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
double notaMes();

};


void Studenti::lexo(){
    cout<<"Vendoseni Emrin:"<<endl;
    cin >> Emri;
    cout<<"Vendoseni Mbiemrin:"<<endl;
    cin >> Mbiemri;
    cout<<"Vendoseni Id:"<<endl;
    cin >> Id;
    cout<<"Vendoseni Notat:"<<endl;
    for(int i = 0 ; i < 5;i++){
        cout<<"Nota " <<i+1<<" :";
        cin>> Notat[i];
        
    }
     };


void Studenti::shtyp(){
    cout<<"Emri: "<<Emri<<endl; 
cout<<"Mbiemri: "<<Mbiemri<<endl;
cout<<"Id: "<<Id<<endl;
};


double Studenti::notaMes(){
double shuma= 0;
int count= 0;
for (int i = 0 ; i < 5 ; i++){
    if (Notat[i]>5 && Notat[i]<=10 ){
        shuma += Notat[i];
        count++;
    }
    else if (Notat[i] == 5)
    {
    cout<<"Nuk e keni kaluar lenden."<<endl;;
    }
    else{
        cout<<"Ju lutem vendoseni nje vler prej  5 deri ne 10"<<endl;
        continue;
    }

}
return shuma/count;
 }



int main(){


Studenti S;

for(int i = 0 ; i < 1 ; i++){
S.lexo();
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"<---------------------->";cout<<endl;
S.shtyp();
cout<<"Nota mesatare: "<<S.notaMes()<<endl;
cout<<"<---------------------->";
}


    return 0;
}