#ifndef PATIENTINFO_H
#define PATIENTINFO_H
#include <string>
#include<iostream>
#include<fstream>
using namespace std;
#include"helper.h"


class patientInfo: public helper
{
public:
    char name[50],disease[100];
    int age,time;
    void set(string fname)
    {
        fstream write(fname,ios::app|ios::ate);
        cout<<"\n\t"<<"Enter the patient name:"<<endl;
        cin.sync();
        cin.getline(name,50);
        cout<<"Enter the patient disease:"<<endl;
        cin.sync();
        cin.getline(disease,50);
        cout<<"Enter the patient age:"<<endl;
        cin.sync();
        cin>>age;
        cout<<"Enter the patient appointment patient :"<<endl;
        cin.sync();
        cin>>time;
        write<<name<<'|'<<"\t"<<disease<<'|'<<"\t"<<age<<'|'<<"\t"<<time<<'|'<<endl;
    }
    void get(string fname)
    {
        char n;
        cout<<"Name"<<'|'<<"Disease"<<'|'<<"Age"<<'|'<<"Appointment"<<'|'<<endl;
        cout<<"__________________________________________________________________________"<<endl;
        ifstream read(fname);
        while(!read.eof())
        {
            read.get(n);
            cout<<n;
        }
    }
    void get2(string fname)
    {
        char n;
        ifstream read(fname);
        while(!read.eof())
        {
            read.get(n);
            cout<<n;
        }
    }
};

#endif // PATIENTINFO_H
