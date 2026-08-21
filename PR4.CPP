#include<iostream.h>
#include<conio.h>

 class student{
   private:
     int roll_no;
     char name[50];

     public:
	void display()
	{
	  cout << " Enter roll no and name respectively " <<endl;
	  cin>> roll_no>>name;
	  cout << " The name entered is " << name<<endl;

	  cout<< " The roll no entered is " <<roll_no<<endl;
	  }
	  };


	  void main ()
	  {
	    student obj;
	    clrscr();
	    obj.display();

	    getch();
	    }