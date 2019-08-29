#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
	public:
	
	static int x,y;	
	int code,date;
	long long int pn,salary;
	char name[20],address[30];	
		
	void input();
	void output();
	void display();

};

void employee::input()
{
	cout<<"enter the code no. of employee = ";
	cin>>code;
	
	cout<<"enter the name of employee = ";
	cin>>name;
	
	cout<<"enter the current address of employee = ";
	cin>>address;
	
	cout<<"enter the phone no. of employee = ";
	cin>>pn;
	
	cout<<"enter the joining date of employee = ";
	cin>>date;
	
	cout<<"enter the salary of emploee = ";
	cin>>salary;
}

int employee ::x=1;
int employee ::y=1;

void employee::output()
{
	cout<<"code no. is="<<code<<endl;
	cout<<"name is="<<name<<endl;
	cout<<"address is="<<address<<endl;
	cout<<"phone no. is="<<pn<<endl;
	cout<<"joining date is="<<date<<endl;
	cout<<"salary is="<<salary<<endl;
}

void employee::display()
{
	cout<<name<<endl;
}

class A
{
	public:
	int n,i,j,a,code1;
	char ch;
	employee obj[10];
	
void details()
{
 		cout<<"enter the no. of employee which details you want to entered = ";
		cin>>n;
		cout<<"\n";
	
	for(i=0;i<n;i++)
	{
		cout<<"employee no. is= "<<obj[i].x++<<endl;
	    obj[i].input();
	    cout<<"\n\n ***********************************************************"<<endl;
	    cout<<" *            Now your unique ID code is ="<<obj[i].code<<"             *"<<endl;
	    cout<<"\n ***********************************************************"<<endl;
	    cout<<"\n";
	}
	
	cout<<"The all new entered employee details are=\n\n"<<endl;
	for(i=0;i<n;i++)
	{
	    cout<<"\nemployee no. is= "<<obj[i].y++<<"\n"<<endl;
	    obj[i].output();
	    cout<<"\n";
	}
	 cout<<"\n**************************************************************"<<endl;
}

void home()
{
 c1:cout<<"\n    **********************************************************"<<endl;
 	cout<<"    *                   MAIN MENU                            *"<<endl;
 	cout<<"    *                ----------------                        *"<<endl;
	cout<<"    *  \tpress 1 for enter the details of new employees       *"<<endl;
	cout<<"    *  \tpress 2 to open a employee record                    *"<<endl;
	cout<<"    *  \tpress 3 to see the list of employees                 *"<<endl;
	cout<<"    *  \tpress 4 for modify the employee record               *"<<endl;
	cout<<"    *  \tpress 5 for delete a employee record                 *"<<endl;
	cout<<"    *                                                        *"<<endl;
	cout<<"    **********************************************************"<<endl;
	
	cout<<"\nenter the choice = ";
	cin>>a;
	cout<<"\n";
   
	if(a==1)
	{
		details();
		cout<<"press the character 'y' if you want to continoue =";
		cin>>ch;
		cout<<"\n";
		if(ch=='y'||ch=='Y')
		goto c1;
    }
    
    else if(a==2)
    {
    	cout<<"Enter the code of emplyee which details you want search = ";
    	cin>>code1;
    	cout<<"\n"<<endl;
    	cout<<"\n**************************************************************"<<endl;
    	for(i=0;i<n;i++)
    	{
    		if(obj[i].code==code1)
    		{
    			obj[i].output();
    			break;
			}
			else
			{
				cout<<"No record found for this code";
			}
		}
		cout<<"\n**************************************************************"<<endl;
		cout<<"\npress the character 'y' if you want to continoue =";
		cin>>ch;
		cout<<"\n";
		if(ch=='y'||ch=='Y')
		goto c1;
	}
	
	else if(a==3)
	{
		cout<<"All employees are -\n"<<endl;
		for(i=0;i<n;i++)
		{
			obj[i].display();
		}
		cout<<"\npress the character 'y' if you want to continoue"<<endl;
		cin>>ch;
		cout<<"\n";
		if(ch=='y'||ch=='Y')
		goto c1;	
	}
	
	else if(a==4)
	{
		cout<<"enter the code which employee details you want to modify =";
		cin>>code1;
		
		cout<<"\n**************************************************************"<<endl;
		for(i=0;i<n;i++)
		{
			if(obj[i].code==code1)
			{
				obj[i].input();
				break;
			}
		}
		cout<<"\n**************************************************************"<<endl;
		cout<<"press the character 'y' if you want to continoue =";
		cin>>ch;
		cout<<"\n";
		if(ch=='y'||ch=='Y')
		goto c1;
	}
	
	if(a==5)
	{
		cout<<"\nenter the code which employee details you want to delete =";
		cin>>code1;
		for(i=0;i<n;i++)
		{
			if(obj[i].code==code1)
			{
				for(j=i;j<n-1;j++)
				obj[j]=obj[j+1];
				//break;
			}
			cout<<"\nDetails are deleted";
		}
	}
	
	else
	cout<<"\nWrong choice entered"<<endl;
	cout<<"press the character 'y' if you want to continoue otherwise press 'N'=";
	cin>>ch;
	cout<<"\n";
	if(ch=='y'||ch=='Y')
	goto c1;
}
};

int main()
{
	int x,passw;
	cout<<"\n\tWELCOME TO THE USER\n";
 c2:cout<<"\n  First enter the password to verification =";
	x=0000;
	cin>>passw;
	if(passw==x)
	{
		A obj1;
		obj1.home();
	}
	else
	{
		cout<<"\n  Wrong password entered,please try again"<<endl;
		goto c2;
	}
}

