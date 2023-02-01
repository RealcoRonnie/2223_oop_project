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
    
 
    if(i ==0)
    {
        cout<<"\n\n ========================================== ";
        cout<<"\n\n DATA IS EMPTY";
        cout<<"\n\n ========================================== ";
    }
    else
    {
        int t_id, found=0;
        cout<<"\n\n ========================================== ";
        cout<<"\n\n ENTER THE ID  FOR SEARCH: ";
        cout<<"\n\n ========================================== ";
        cin>>t_id;
        for(int a=0;a<i;a++)
        {
            if(t_id == E[a].id)
            {
                cout<<"\n\n ========================================== ";
                cout<<"\n\n EMPLOYEE NAME: " <<E[a].name;
                cout<<"\n\n EMPLOYEE ADDRESS: " <<E[a].address;
                cout<<"\n\n EMPLOYEE PHONENUMBER: " <<E[a].phone;
                cout<<"\n\n EMPLOYEE DEPARTMENT: " <<E[a].department;
                cout<<"\n\n EMPLOYEE SALARY: " <<E[a].salary;
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
        cout<<"\n\n DATA IS EMPTY";
        cout<<"\n\n ========================================== ";
    }
    else
    {
        int t_id, found=0;
        cout<<"\n\n ========================================== ";
        cout<<"\n\n ENTER THE ID FOR UPDATE: ";
        cin>>t_id;
        cout<<"\n\n ========================================== ";
        for(int a=0;a<i;a++)
        {
            if(t_id == E[a].id)
            {
                cout<<"\n\n ========================================== ";
                cout<<"\n\n ENTER EMPLOYEE NAME: ";
                cin.ignore();
                getline(cin, E[a].name);
                cout<<"\n\n ENTER EMPLOYEE ADDRESS: ";
                cin.ignore();
                getline(cin, E[a].address);
                cout<<"\n\n ENTER EMPLOYEE PHONENUMBER: ";
                cin>>E[i].phone;
                cout<<"\n\n ENTER EMPLOYEE DEPARTMENT: ";
                cin.ignore();
                getline(cin, E[a].department);
                cout<<"\n\n ENTER EMPLOYEE SALARY: ";
                cin>>E[i].salary;
                cout<<"\n\n ========================================== ";
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
  
    if(i ==0)
    {
         cout<<"\n\n ========================================== ";
        cout<<"\n\n DATA IS EMPTY";
         cout<<"\n\n ========================================== ";
    }
    else
    {
        int t_id, found=0;
         cout<<"\n\n ========================================== ";
        cout<<"\n\n ENTER THE ID FOR DELETE: ";
         cout<<"\n\n ========================================== ";
        cin>>t_id;
        for(int a=0;a<i;a++)
        {
            if(t_id == E[a].id)
            {
                for(int k=a;k<i-1;k++ )
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
    
    if(i ==0)
    {
        cout<<"\n\n DATA IS EMPTY";
    }
    else
    {
      
        for(int a=0;a<i;a++)
        {
                 cout<<"\n\n ========================================== ";
                cout<<"\n\n EMPLOYEE ID: " <<E[a].id;
                cout<<"\n\n EMPLOYEE NAME: " <<E[a].name;
                cout<<"\n\n EMPLOYEE ADDRESS: " <<E[a].address;
                cout<<"\n\n EMPLOYEE PHONENUMBER: " <<E[a].phone;
                cout<<"\n\n EMPLOYEE DEPARTMENT: " <<E[a].department;
                cout<<"\n\n EMPLOYEE SALARY: " <<E[a].salary;
                cout<<"\n\n ========================================== ";
                
        }
        
    }
}
main()
{
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
    cout<<"\n\n ENTER YOUR CHOICE ->";
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

