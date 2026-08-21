#include<iostream.h>
#include<conio.h>
 class test2;
 class test1{

       int marks;
       public:
	   void get_marks()
	   {
	    cout << " Enter marks " << endl;
	    cin >> marks;
	    }
	    friend void avg_marks( test1 t1, test2 t2);
	    };

	    class test2{

       int marks;
       public:
	   void get_marks()
	   {
	    cout << " Enter marks " << endl;
	    cin >> marks;
	    }
	    friend void avg_marks( test1 t1, test2 t2);
	    };


	    void avg_marks(test1 t1 , test2 t2)
	    {

	      cout << " Average marks  " << (float)(t1.marks + t2.marks)/2 << endl;
	      }

		void main ()
		{
		  test1 t1;
		  test2 t2;
		  clrscr();

		  t1.get_marks();
		  t2.get_marks();
		  avg_marks(t1,t2);


		  getch();

		  }

