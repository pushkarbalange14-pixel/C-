#include<iostream.h>
#include<conio.h>

  class calculation {
    int a,b;
     public :
	 void get_data()
	 {
	   cout << " Enter both numbers "<<  endl <<  " Remember the first number entered must be greater "<< endl;
	   cin >> a >> b;
	   }


	   friend void calculations( calculation g );


	   };
	     void calculations ( calculation g)
	     {

	      cout << " Addition   " <<g.a+g.b<<endl;
	      cout << " Subtraction  " <<g.a-g.b << endl;
	      cout << " MULtiplication " << g.a * g.b << endl;
	      cout << " Divison   " <<(float)g.a/g.b << endl;
	      }


	      void main ()
	      {
		calculation g;
		clrscr();
		g.get_data();
		calculations(g);

		getch();

		}



