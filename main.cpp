#include <iostream>
using namespace std;
#include"DoctorsReservation.h"
#include"Employee1.h"
#include"patientInfo.h"
#include "Roomm.h"
int main()
{
    doctorsRservation d1;
    Roomm r2;
    Employee1 e1;
    while(1)
    {
        system("cls");
        bool b=0;
        cout<<"\t\t"<<"Orange Hospital"<<"\n"<<endl;
        cout<<"To go to the Clinic Part     Press(1)"<<endl;
        cout<<"To go to the Room Part       Press(2)"<<endl;
        cout<<"To go to the Employee system Press(3)"<<endl;
        cout<<"To Exit                      Press(4)"<<endl;
        char choice;
        cin>>choice;
        switch(choice)
        {
        case'1':
                system("cls");
            d1.Menu();
            break;
        case'2':
                system("cls");
            //r1.add();
            r2.mainOFadd();
            break;
        case'3':
                system("cls");
            e1.menue();
            break;

        case'4':
                b=1;
            break;

        default:
            //system("cls");
            cout<<"\n"<<"Pleas Enter Valid Choice"<<endl;

        }
        if (b==1)
        {
            break;
        }

    }
    return 0;
}
