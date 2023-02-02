#include <iostream>
#include <string.h>
using namespace std;
int i=0;
struct Employee
{
    int id;
    float salary;
    string name, address, phone, department;
} E[25], N[11];
void add()
{
    system("CLS");
    char salary[30];

    
    cout<<"\n\n ========================================== ";
    cout<<"\n\n ADD EMPLOYEE RECORD";
    cout<<"\n\n ========================================== ";
    
    cout<<"\n\n  ENTER EMPLOYEE ID: ";
    cin>>E[i].id;
    cout<<"\n\n ENTER EMPLOYEE NAME: ";
    cin.ignore();
    getline(cin,E[i].name);
    cout<<"\n\n ENTER EMPLOYEE ADDRESS: ";
    cin.ignore();
    getline(cin,E[i].address);
    cout<<"\n\n ENTER EMPLOYEE PHONENUMBER: ";
    cin>>E[i].phone;
    cout<<"\n\n ENTER EMPLOYEE DEPARTMENT: ";
    cin.ignore();
    getline(cin,E[i].department);
    cout<<"\n\n ENTER EMPLOYEE SALARY: ";
    cin>>E[i].salary;
    cout<<"\n\n ========================================== ";
    i++;
    cout<<"\n\n ========================================== ";
    cout<<"\n\n *** EMPLOYEE RECORD INSERTED ***";
    cout<<"\n\n ========================================== ";

}
void search()
{
    system("CLS");
 
    if(i ==0)
    {
        cout<<"\n\n ========================================== ";
        cout<<"\n\n ***DATA IS EMPTY***";
        cout<<"\n\n ========================================== ";
    }
    else
    {
        int t_id, found=0;
        cout<<"\n\n ========================================== ";
        cout<<"\n\n ENTER THE ID  FOR SEARCH: ";
        cin>>t_id;
        for(int x=0;x<i;x++)
        {
            if(t_id == E[x].id)
            {
                cout<<"\n\n ========================================== ";
                cout<<"\n\n EMPLOYEE NAME: " <<E[x].name;
                cout<<"\n\n EMPLOYEE ADDRESS: " <<E[x].address;
                cout<<"\n\n EMPLOYEE PHONENUMBER: " <<E[x].phone;
                cout<<"\n\n EMPLOYEE DEPARTMENT: " <<E[x].department;
                cout<<"\n\n EMPLOYEE SALARY: " <<E[x].salary;
                cout<<"\n\n ========================================== ";
                found++;
            }
        }
        if(found ==0)
        {
            cout<<"\n\n ========================================== ";
            cout<<"\n\n **** EMPLOYEE NOT FOUND ****";
            cout<<"\n\n ========================================== ";
        }
    }
}
void up()
{
    
    if(i ==0)
    {
        cout<<"\n\n ========================================== ";
        cout<<"\n\n **** DATA IS EMPTY ****";
        cout<<"\n\n ========================================== ";
    }
    else
    {
        int t_id, found=0;
        cout<<"\n\n ========================================== ";
        cout<<"\n\n ENTER THE ID FOR UPDATE: ";
        cin>>t_id;
        for(int x=0;x<i;x++)
        {
            if(t_id == E[x].id)
            {
                cout<<"\n\n ========================================== ";
                cout<<"\n\n ENTER EMPLOYEE NAME: ";
                cin.ignore();
                getline(cin, E[x].name);
                cout<<"\n\n ENTER EMPLOYEE ADDRESS: ";
                cin.ignore();
                getline(cin, E[x].address);
                cout<<"\n\n ENTER EMPLOYEE PHONENUMBER: ";
                cin>>E[i].phone;
                cout<<"\n\n ENTER EMPLOYEE DEPARTMENT: ";
                cin.ignore();
                getline(cin, E[x].department);
                cout<<"\n\n ENTER EMPLOYEE SALARY: ";
                cin>>E[i].salary;
                cout<<"\n\n ========================================== ";
                cout<<"\n\n **** RECORD UPDATE SUCCESSFULLY ****";
                found++;
                cout<<"\n\n ========================================== ";
            }
        }
        if(found ==0)
        {
            cout<<"\n\n ========================================== ";
            cout<<"\n\n **** EMPLOYEE NOT FOUND ****";
            cout<<"\n\n ========================================== ";
        }
    }

}
void del()
{
    system("CLS");
  
    if(i ==0)
    {
         cout<<"\n\n ========================================== ";
        cout<<"\n\n **** DATA IS EMPTY ****";
         cout<<"\n\n ========================================== ";
    }
    else
    {
        int t_id, found=0;
         cout<<"\n\n ========================================== ";
        cout<<"\n\n ENTER THE ID FOR DELETE: ";
        cin>>t_id;
        for(int x=0;x<i;x++)
        {
            if(t_id == E[x].id)
            {
                for(int k=x;k<i-1;k++ )
                {
                    E[k].id = E[k+1].id;
                    E[k].name = E[k+1].name;
                    E[k].address = E[k+1].address;
                    E[k].phone = E[k+1].phone;
                    E[k].department = E[k+1].department;
                    E[k].salary = E[k+1].salary;
                }
                i--;
                 cout<<"\n\n ========================================== ";
                cout<<"\n\n **** RECORD DELETED SUCCESSFULLY ****";
                 cout<<"\n\n ========================================== ";
                found++;
                break;
            }
        }
        if(found ==0)
        {
            cout<<"\n\n ========================================== ";
            cout<<"\n\n **** EMPLOYEE NOT FOUND ****";
            cout<<"\n\n ========================================== ";
        }
    }
}
void show()
{
    system("cls");
    if(i ==0)
    {
        cout<<"\n\n __________________________";
        cout<<"\n\n **** DATA IS EMPTY ****";
        cout<<"\n\n __________________________";

    }
    else
    {
      
        for(int x=0;x<i;x++)
        {

                cout<<"\n\n ========================================== ";
                cout<<"\n\n EMPLOYEE ID: " <<E[x].id;
                cout<<"\n\n EMPLOYEE NAME: " <<E[x].name;
                cout<<"\n\n EMPLOYEE ADDRESS: " <<E[x].address;
                cout<<"\n\n EMPLOYEE PHONE NUMBER: " <<E[x].phone;
                cout<<"\n\n EMPLOYEE DEPARTMENT: " <<E[x].department;
                cout<<"\n\n EMPLOYEE SALARY: " <<E[x].salary;
                cout<<"\n\n ========================================== ";
                
        }
        
    }
}
main()
{
    system("CLS");
    p:
    int choice;
     cout<<"\n\n ========================================== ";
    cout<<"\n\n EMPLOYEE MANAGEMENT SYSTEM";
     cout<<"\n\n ========================================== ";
     
    cout<<"\n\n 1- ADD EMPLOYEE";
    cout<<"\n\n 2- SEARCH EMPLOYEE";
    cout<<"\n\n 3- UPDATE EMPLOYEE";
    cout<<"\n\n 4- DELETE EMPLOYEE";
    cout<<"\n\n 5- SHOW ALL EMPLOYEE";
    cout<<"\n\n 6- EXIT";
     cout<<"\n\n ========================================== ";
    cout<<"\n\n ENTER YOUR CHOICE => ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            add();
            break;
        case 2:
            search();
            break;
        case 3:
            up();
            break;
        case 4:
            del();
            break;
        case 5:
            show();
            break;
        case 6:
            exit(0);
        default:
            cout<<"\n\n ========================================== ";
            cout<<"\n\n INVALID NUMBER....";
             cout<<"\n\n ========================================== ";
    }
    
    goto p;
}

