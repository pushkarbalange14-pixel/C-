#include<iostream.h>
#include<conio.h>
  class Rectangle{

    int length,breadth;


     public :
       inline void area();
       };
	 void inline Rectangle::area()
	 {
	   cout << " Enter The Length and Breadth respectively " <<endl;
	   cin >> length >> breadth ;

	    cout <<  " The Area Is " << length * breadth << endl;
	    }
	      void main ()
	      {
		Rectangle r;
	       clrscr();
		r.area();
		getch();

		}


