#include<iostream.h>
#include<conio.h>

 class Number{
   int n1,n2;
     public :
       inline void math();
       };

       void inline Number::math()
       {
       cout << " Enter Number 1 and Number 2 respectively " <<endl;
       cin >> n1 >>n2;



	 cout << " The Addition is  " << n1+n2 <<endl;
	 cout << " The Subtraction is " << n1-n2<<endl;
	 cout << " The Multiplication is " <<n1*n2<<endl;
	 cout << " The Division is " <<n1/n2<<endl;
	 }
	   void main ()
	   {
	     Number q;
	     clrscr();
	     q.math();
	     getch();

	     }