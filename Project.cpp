#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

struct student{
    string name,address;
    int id,contact,age;


};
student s[100];
int total=0;
void stdata()
{
 int inp;
 cout<< "\n\t How many student data do you want: ";
 cin>>inp;
 for(int i=total;i<total+inp;i++)
 {
     cout<<"\n\t Enter the number of student data :"<<i+1<<endl;
     cout<<"\n\t Student Name :";
     cin>>s[i].name;
     cout<<"\n\t Student ID :";
     cin>>s[i].id;
     cout<<"\n\t Student Age :";
     cin>>s[i].age;
     cout<<"\n\t  Address :";
     cin>>s[i].address;
     cout<<"\n\t Contact Number :";
     cin>>s[i].contact;
 }
 total=total+inp;
}
void showdata()
{
if(total!=0)
{
    for(int i=0;i<total;i++)
    {
        cout<<"\tData of Student:"<<i+1<<endl;
        cout<<"\tStudent Name :"<<s[i].name<<endl;
        cout<<"\tStudent ID :"<<s[i].id<<endl;
        cout<<"\tStudent Age :"<<s[i].age<<endl;
        cout<<"\tAddress  : "<<s[i].address<<endl;
        cout<<"\tStudent Contact:"<<s[i].contact<<endl;
        cout<<"\n\n";
    }
}
   else
        {cout<<"Your record is empty"<<endl;}
}

void searchdata(){
if(total!=0)
{
    for(int i=0;i<total;i++)
{    int id;
    cout<<"Enter The Student ID which you want to Search :"<<endl;
    cin>>id;
    if(id==s[i].id)
    {
        cout<<" Data of this Student :"<<i+1<<endl;
        cout<<"Student Name :"<<s[i].name<<endl;
        cout<<"Student ID:"<<s[i].id<<endl;
        cout<<"Student Age :"<<s[i].age<<endl;
        cout<<"Student Address:"<<s[i].address<<endl;
        cout<<"Student Contact:"<<s[i].contact<<endl;
        break;

    }
    if(i==total-1){
        cout<<"NO record found"<<endl;
    }
}

}
else{cout<<"Your Record is empty : "<<endl;}

}
void updata()
{
if(total!=0){
    for( int i=0;i<total;i++)
    { int id;
        cout<<"Enter Id do you want to search "<<endl;
        cin>>id;
        if(id=s[i].id)
        {cout<<" Previous ID :"<<endl;
        cout<<" Data of this Student :"<<i+1<<endl;
        cout<<"Student Name :"<<s[i].name<<endl;
        cout<<"Student ID:"<<s[i].id<<endl;
        cout<<"Student Age :"<<s[i].age<<endl;
        cout<<"Student Address:"<<s[i].address<<endl;
        cout<<"Student Contact:"<<s[i].contact<<endl;
        cout<<"\n\aEnter new Data :"<<endl;
        cout<<" Student Name :"<<endl;
         cin>>s[i].name;
         cout<<"\n\t Student ID :";
         cin>>s[i].id;
         cout<<"\n\t Student Age :";
         cin>>s[i].age;
         cout<<"\n\t  Address :";
         cin>>s[i].address;
         cout<<"\n\t Contact Number :";
         cin>>s[i].contact;

        break;


        }
        if(i==total-1){
        cout<<"NO record found"<<endl;
    }
    }
}
else{cout<<"Your Record is not found"<<endl;
}
}
void dldata()
{
if(total!=0)
    for(int i=0;i<total;i++)
{  char user;
    cout<<"Press 1 for deleting all data :"<<endl;
    cout<<"Press 2 for deleting some specific data :"<<endl;
     user=getch();
    if(user=='1')
    { total=0;
        cout<<" All Record is deleting...!!! "<<endl;
    }
    else if(user==2)
    { int id;
        cout<<"Enter Id of data which you want to delete :"<<endl;
        cin>>id;
        for(int i=0;i<total;i++)
        {
            if(id==s[i].id)
            {
                for(int j=i;j<total;j++)
                {
                s[j].name=s[j+1].name;
                s[j].id=s[j+1].id;
                s[j].age=s[j+1].age;
                s[j].address=s[j+1].address;
                s[j].contact=s[j+1].contact;
                total--;
                cout<<"Your Requered record is deleted....!!! "<<endl;
                break;
                }
                if(i==total-1){
        cout<<"NO record found"<<endl;
    }
            }
        }

    }

}
else{
    cout<<"Your Record is empty.....!!!"<<endl;
}


}



int main()
{
    cout<<"\n\n\t\t\t\tStudent Management System: "<<endl;
    cout<<"\n\n\t\t\t\t\b Sign Up:"<<endl;
    string username;
     int password;
    cout<<"\n\n\t User Name:";
    cin>>username;
    cout<<"\n\n\t Enter your Password: ";
    cin>>password;
    cout<<"\n\n\n\t Your Id is creating Please wait ";
    for(int i=0;i<8;i++)
    {
        cout<<".";
        Sleep(1000);
    }
    cout<<"\n\n\t Your Id is created Successfully";
    system("CLS");
    start:
        system("CLS");
    cout<<"\n\n\t\t\t Student Management System: "<<endl;
    cout<<"\n\n\t\t\t Login: "<<endl;

    string username1;
     int password1;
    cout<<"\n\n\t\t User name :";
    cin>>username1;
    cout<<"\n\n\t\t Password  :";
    cin>>password1;
    if(username1==username && password1==password)
    {
        system("CLS");
       // cout<<"\n\n\t\t\t Student Management System "<<endl;

        char user;
        while(1)
        {
            cout<<"\n\t Press 1 to enter Data :"<<endl;
            cout<<"\n\t Press 2 to show Data :"<<endl;
            cout<<"\n\t Press 3 to update Data :"<<endl;
            cout<<"\n\t Press 4 to search Data :"<<endl;
            cout<<"\n\t Press 5 to delete Data :"<<endl;
            cout<<"\n\t Press 6 to logout Data :"<<endl;

            user=getch();
            system("CLS");
            switch(user){

            case '1':
            stdata();
            break;
            case '2':
            showdata();
            break;
            case '3':
            searchdata();
            break;
            case '4':
            updata();
            break;
            case '5':
            dldata();
            break;
            case '6':

            goto start;
            default:
            cout<<"\a Invalid input ";
            break;
            }
        }

    }
    else if(username1!=username)
    {
        cout<<"\n\n\t Your Username is invalid .please enter valid Username "<<endl;
        Sleep(3000);
        goto start;
    }
    else if(password1!=password)
    {
        cout<<"\n\n\t\t Your password is invalid .please enter valid password "<<endl;
        Sleep(3000);
        goto start;
    }






    return 0;

}
