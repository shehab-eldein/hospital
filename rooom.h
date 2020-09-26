#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include"helper.h"
#include<fstream>
#include<string>
using namespace std;

class room:public helper
{
public:
    void fillInFile(string arr[5],string fileName){
    ofstream patient(fileName,ios::trunc);
    for(int i = 0; i < 5; i++){
        patient<<arr[i]<<"\n";
    }
}

void addInRooms(string arr[5]){
    for(int i=0;i<5;i++)
    {
        if(arr[i]==" ")
        {
            char name[30];
            cout<< "Enter the patient name"<<endl;
            cin.sync();
            cin.getline(name,30);
            arr[i]=name;

            fillInFile(arr, "patientroom.text");
            cout<<"ROOM\t"<<i+1<< "\t"<<arr[i]<< "\tThe entery done"<<endl;
        }
    }
}


void add()
    {
           string arr[5]{" "," "," "," "," "};


           ifstream in("patientroom.text");
           string line;
           int counter = 0;
           while (getline(in,line))
           {

                   arr[counter] = line;
                   counter++;


           }

           for(int i=0;i<5;i++){
            if(arr[i] == " "){
                cout<<"ROOM\t"<<i+1<<arr[i]<<"is Empty"<<endl;
            }else{
                cout<<"\nROOM\t"<<i+1<< "\t"<<arr[i]<<"\tFULL"<<"\n";
            }
           }

           while(1){
                addInRooms(arr);
                cout << "\nDo you want to remove patient?(y/n)"<<"\n";
                char removePatient;
                cin.sync();
                cin >> removePatient ;

                if(removePatient == 'y' || removePatient == 'Y'){
                    while(1){
                        int roomNumber;
                        cout << "\nPlease Enter Room Number. (1-5)"<<"\n";
                        cin.sync();
                        cin >> roomNumber;
                        if(roomNumber > 0 && roomNumber <= 5){
                            arr[roomNumber - 1] = " ";
                            fillInFile(arr, "patientroom.text");
                            break;
                        }else{
                            cout << "\nInvalid Number" << endl;
                            continue;
                        }
                    }
                    cout << "\nDo you want to add another patient?(y/n)"<<"\n";
                    char  addPatient;
                    cin.sync();
                    cin >> addPatient;

                    if(addPatient == 'y' || addPatient == 'Y'){
                        continue;
                    }else{
                        break;
                    }
                }else{
                    break;
                }
           }

system("cls");
for(int i=0;i<5;i++){
        if(arr[i]==" ")
        {
            cout<<"ROOM\t"<<i+1<<arr[i]<<"is Empty"<<endl;
        }else{
            cout<<"\nROOM\t"<<i+1<< "\t"<<arr[i]<<"\tFULL"<<"\n";
        }
    }
}



};

#endif // ROOM_H
