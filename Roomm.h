#ifndef ROOMM_H
#define ROOMM_H
#include <string>
#include<iostream>
#include<fstream>
using namespace std;
#include"helper.h"


class Roomm
{
public:

    void fillInFile(string fname,string arr[5])
    {
        ofstream f(fname,ios::trunc);
        for(int i=0 ; i<5; i++)
        {
            f<<arr[i]<<endl;
        }

    }
    /*====================================================================================================*/
    void display(string arr[5])
    {
        for(int i=0; i<5; i++)
        {
            if(arr[i]==" ")
            {
                cout<<i+1<<"\t"<<arr[i]<<" EMPTY"<<endl;
            }
            else
            {
                cout<<i+1<<"\t"<<arr[i]<<"\t"<<" FULL"<<endl;
            }
        }


    }
    /*=====================================================================================================*/
    void deletPatient(string arr[5])
    {

        cout<< "Are you sure you want to Empty Room?"<<endl<<"Press(y OR n)"<<endl;
        char answer;
        cin>>answer;
        if(answer=='y'||answer=='Y')
        {
            system("cls");
            display(arr);
            while(1)

            {

                cout<<"Enter the Room number from 1-5:"<<endl;
                cin.sync();
                int reservationNumber;
                cin>>reservationNumber;

                if(reservationNumber>0&&reservationNumber<=5)

                {
                    arr[reservationNumber-1]=" ";
                    fillInFile("reservation.text",arr);
                    system("cls");
                    cout<<"\n"<<"DONE"<<endl;
                    display(arr);
                    menu(arr);
                }
                else
                {
                    cout<< "Enter invalid number"<<endl;
                    continue;
                }
                break;
            }
        }
        else
        {
            cout<<"Thankyou"<<endl;
            system("cls");
            menu(arr);
        }
    }
    /*==================================================================================================*/
    void addPatient(string arr[5])
    {
        bool flag=0;
        system("cls");
        display(arr);
        while(1)
        {

            cout<< " You want to add another Room?"<<endl<<"Press y OR n"<<endl;
            char answer2;
            cin>>answer2;
            if(answer2=='y'||answer2=='Y')
            {


                for(int i=0; i<5; i++)
                {



                    if(arr[i]==" ")
                    {


                        char name[50];
                        cout<<"Enter the patient name:"<<endl;
                        cin.sync();
                        cin.getline(name,50);
                        arr[i]=name;

                        fillInFile("reservation.text",arr);
                        system("cls");
                        cout<<i+1<<"\t"<<arr[i]<<endl;
                        cout<<"Your reservation is Done"<<endl;
                        display(arr);
                        break;
                    }









                }
            }
            if(answer2=='n'||answer2=='N')
            system("cls");
                menu(arr);
                break;

        }
    }
    /*=======================================================================================================*/
    void menu(string arr[5])
    {
        while(1)
        {

            bool flag=0;
            cout<<"\t""\t"<<"ORANGE Hospital"<<"\t"<<endl;
            cout<<"\t"<<"Press 1 to add reservation"<<endl;
            cout<<"\t"<<"Press 2 to delete reservation "<<endl;
            cout<<"\t"<<"Press 3 to display all reservation"<<endl;
            cout<<"\t"<<"Press 4 to EXIT"<<endl;

            char choice;
            cin>>choice;
            switch(choice)
            {
            case '1':
                addPatient(arr);
                break;
            case'2':
                deletPatient(arr);
                    break;
            case'3':

                    addPatient(arr);
                break;
            case(4):
                flag=1;
                break;
            }
            if(flag==1)
                system("cls");
            break;

        }

    }
    void mainOFadd()
    {

        string arr[5] {" "," "," "," "," "};
        ifstream in("reservation.text");
        string line;
        int counter;
        while(getline(in,line))
        {
            arr[counter]=line;
            counter++;
        }




        menu(arr);






    }
};
#endif // ROOMM_H
