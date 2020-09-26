#ifndef EMPLOYEE1_H
#define EMPLOYEE1_H
#include <string>
#include<iostream>
#include<fstream>
using namespace std;
#include"helper.h"
#include "string.h"

class Employee1:public helper
{
public:
    void get(string fname)
    {
        char n;
        ifstream read(fname);
        cout<<"Name"<<'|'<<"\t"<<"ID"<<'|'<<"\t"<<"Salary"<<endl;

        cout<<"---------------------------------------------------------------------"<<endl;
        while(!read.eof())
        {
            read.get(n);
            cout<<n;
        }
    }
    void set(string fname)
    {
        char id[20];
        char name[50];
        char salary[5];
        Employee1 e4;
        ofstream write(fname,ios::app|ios::ate);

        system("cls");
        cout<< "Enter the name of the new Employee"<<endl;
        cin.sync();
        cin.getline(name,50);
        cout<< "Enter the ID of the new Employee"<<endl;
        cin.sync();
        cin.getline(id,20);
        cout<< "Enter the Salary of the new Employee"<<endl;
        cin.sync();
        cin>>salary;
        write<<name<<'|'<<"\t"<<id<<'|'<<"\t"<<salary<<endl;
        system("cls");
        cout<<"The Entery is Done"<<"\n"<<endl;
    }
    void choicein(string fname2)
    {
        Employee1 e3;
        system("cls");
        char c;
        cout<<"TO Add New Press (1)"<<endl<<"to show the list Press(2)"<<endl;
        cin>>c;
        switch(c)
        {
        case'1':
                e3.set(fname2);

        case'2':
                e3.get(fname2);
                break;
        default:
            system("cls");
            cout<<"Enter Valid Choice"<<endl;
            e3.choicein(fname2);
            break;
        }
    }
    void menue()
    {
        bool t=0;
        while(1)
        {
            Employee1 e1;
            cout<<"Choose the Department you want."<<endl;
            cout<<"  HR Department press(1)"<<endl;
            cout<<"  Doctors Department press(2)"<<endl;
            cout<<"  Nurse Department press(3)"<<endl;
            cout<<"  Accountant Department press(4)"<<endl;
            cout<<"  Cleaners Department press(5)"<<endl;
            cout<<"  TO EXIT press(6)"<<endl;

            char c;
            cin>>c;
            switch(c)
            {
            case '1':
                e1.choicein("HR.text");
                break;
            case '2':
                e1.choicein("ddepartment.text");
                break;
            case '3':
                e1.choicein("Nurse.text");
                break;
            case '4':
                e1.choicein("Accountant.text");
                break;
            case '5':
                e1.choicein("cleaners.text");
                break;
            case '6':
                t=1;
                break;
            default:
                system("cls");
                cout<<"Enter valied choice"<<"\n"<<endl;

            }
            if(t==1)
            {
                break;
            }
        }
    }
};
#endif // EMPLOYEE1_H
