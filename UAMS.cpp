#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int option, matric1=0, matric2=0, FSC1=0, FSC2=0, Ecat1=0, Ecat2=0;
    string name1="", name2="";
    float s1aggregate=0, s2aggregate=0;

    do {
        cout<<"*********************************************************************************"<<endl;
        cout<<"*\t\t\tUniversity Admission management system\t\t\t*"<<endl;
        cout<<"*********************************************************************************"<<endl<<endl;
        cout<<"Select one of the following options:"<<endl;
        cout<<"1. Add first student record"<<endl;
        cout<<"2. Add second student record"<<endl;
        cout<<"3. Calculate the aggregate"<<endl;
        cout<<"4. Print both students data"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Your option: ";
        cin>>option;

        if(option==1){
            cout<<"Enter Student Name: ";
            cin.ignore();
            getline(cin, name1);
            cout<<"Enter Obtained Marks in Matric: ";
            cin>>matric1;
            cout<<"Enter Obtained Marks in FSC: ";
            cin>>FSC1;
            cout<<"Enter Ecat Marks: ";
            cin>>Ecat1;
        }
        else if(option==2){
            cout<<"Enter Second Student Name: ";
            cin.ignore();
            getline(cin, name2);
            cout<<"Enter Obtained Marks in Matric: ";
            cin>>matric2;
            cout<<"Enter Obtained Marks in FSC:  ";
            cin>>FSC2;
            cout<<"Enter Obtained Ecat Marks: ";
            cin>>Ecat2;
        }
        else if(option==3){
            s1aggregate=((0.4*matric1/1200)+(0.5*FSC1/550)+(0.2*Ecat1/400))*100;
            s2aggregate=((0.4*matric2/1200)+(0.5*FSC2/550)+(0.2*Ecat2/400))*100;
            cout<<"Aggregate of "<<name1<<" is: "<<s1aggregate<<"%"<<endl;
            cout<<"Aggregate of "<<name2<<" is: "<<s2aggregate<<"%"<<endl;
        }
        else if(option==4){
            cout<<"Following Students Exist in the system."<<endl;
            cout<<"Name\tMatric\tFSC\tEcat"<<endl;
            cout<<name1<<"\t"<<matric1<<"\t"<<FSC1<<"\t"<<Ecat1<<endl;
            cout<<name2<<"\t"<<matric2<<"\t"<<FSC2<<"\t"<<Ecat2<<endl;
        }

        if(option!=5){
            cout<<"Press any key to continue...";
            getch();
            system("cls");
        }

    } while(option!=5);

    return 0;
}
