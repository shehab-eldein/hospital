#ifndef DOCTORSRSERVATION_H
#define DOCTORSRSERVATION_H
#include <patientInfo.h>
#include<windows.h>
#include <iostream>
using namespace std;

class doctorsRservation : public patientInfo
{
public:
    patientInfo p2;
    void doctorinfo_get()
    {
        p2.get2("DoctorsInfo.text");

    }
    void Reservation(char drname[40],char s[40],string fname)
    {
        cout<<"DR."<<drname<<endl<<s<<endl;

        p2.set(fname);

        system("cls");
        cout<<"RESERVATION DONE"<<endl;
        cout<<"****************"<<endl;
        cout<<"DR."<<drname<<endl<<s<<endl;
        cout<<"__________________________________________________________________________"<<endl;
        p2.get(fname);

    }
    void drrana()
    {
        doctorsRservation d1;
        d1.Reservation("Rana Abdellatif","Specialist In Orthopedic And Joint Surgery","DrRana.text");
    }
    void drAli()
    {
        doctorsRservation d1;
        d1.Reservation("Ali ELSHAZLY","{MD Of Neurosurgery & Spine Surgery Ain Shams University}","DrAli.text");
    }
    void drMaged()
    {
        doctorsRservation d1;
        d1.Reservation("Maged ELMAHDY","{Consultant of Rheumatology and Immunology}","DrMaged.text");
    }
    void choiceD()
    {
        system("cls");
        doctorsRservation d1;
        cout<<"Select the Doctor number"<<endl;
        cout<<"DR Rana Abdellatif Press(1)"<<endl;
        cout<<"DR Ali ELSHAZLY Press(2)"<<endl;
        cout<<"DR Maged ELMAHDY Press(3)"<<endl;
        cout<<"TO EXIT Press(4)"<<endl;
        char c;
        cin>>c;
        switch(c)
        {
        case '1':
            system("cls");
            d1.drrana();
            break;
        case '2':
            system("cls");
            d1.drAli();
            break;
        case '3':
            system("cls");
            d1.drMaged();
            break;
        case'4':
                system("cls");
            break;
        default:
            system("cls");
            cout<<"Enter Valid Choice "<<endl;
            d1.choiceD();


        }
    }
    void Menu()
    {
        system("cls");
        bool b=0;
        while(1)
        {
            char choice;
            doctorsRservation d1;
            cout<<"____________________________________"<<endl;
            cout<<"Show All Doctor Information Press (1)"<<endl;
            cout<<"Clinic reservation   Press (2)"<<endl;
            cout<<"press 3 to Exit"<<endl;
            cin>>choice;
            switch(choice)
            {
            case '1':
                system("cls");
                d1.doctorinfo_get();

                cout<<"---------------------"<<endl;
                cout<<"press 1 to Go  to the Reservation Menu"<<endl;
                cout<<"press any key to Back to the Menu"<<endl;
                char choice;
                cin>>choice;

                switch(choice)
                {
                case '1':
                    system("cls");
                    d1.choiceD();
                    break;
                default:
                    system("cls");
                    break;



                }
                break;


            case '2':
                d1.choiceD();
                d1.Menu();
                break;
            case '3':
                b=1;
                break;
            default:
                system("cls");
                cout<<"Enter Valid Choice"<<endl;

            }
            if(b==1)
            {
                break;
            }

        }
    }
    ~doctorsRservation() {}
};

#endif // DOCTORSRSERVATION_H
