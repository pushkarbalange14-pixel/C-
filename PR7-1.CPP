#include<iostream.h>
#include<conio.h>

  class A{
     int a,b;
     public:
       void show ()
       {
	 cout << " Enter "<<endl;
	 cin >> a >> b;
	 }
	   friend void exchange(A obj);

	   };

   void exchange( A obj )
   {
     cout << " Before Exchanging  a = " << obj.a<< " b = " << obj.b << endl;
     int temp = obj.a;
     obj.a=obj.b;
     obj.b=temp;
     cout << " After Exchange  a = " << obj.a<< " b = " << obj.b<<endl;
     }


      void main ()
      {
	A obj;
	obj.show();
	exchange(obj);
	getch();
	}




