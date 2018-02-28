#include<iostream>
#include<iomanip>
using namespace std;

char k = '#';

void kiir (int db, char c)
{
    for(int i=1; i<=db; i++)
    {
        cout<<c;
    }
}

void kozepre (int hosszu, string szoveg)
{
    int db = hosszu-szoveg.length();
    for(int i=1; i<=db/2; i++)
        cout<<" ";
    cout<<szoveg;
    for(int i=1; i<=db/2; i++)
        cout<<" ";
}


void greeting(string nev)
{
    string kiiras;
    kiir(80,k);
    cout<<endl;
    cout<<k;
    kiir(78,' ');
    cout<<k;
    cout<<endl;
    cout<<k;
    if(nev=="") kozepre(78, "Happy Eastern, myfriend");
    else
    {
        kiiras = "Happy eastern, " + nev;
       kozepre(78, kiiras);
    }
    cout<<k;
    cout<<endl;
    cout<<k;
    kiir(78,' ');
    cout<<k;
    cout<<endl;
    kiir(80,k);
}

int main()
{
    string nevnev="myfriend";
    cin>>nevnev;
    greeting(nevnev);
    return 0;
}
