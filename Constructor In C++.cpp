#include<iostream.h>
using namespace std;

class Demo{
   
  private:
       int x;

       public :
         Demo()
      {
         cout << " Enter value to be displayed" <<endl;
         cin >> x;
        
   }
    int display()
{ 
  cout << x <<endl;
}
};

int main ()
{
 Demo obj;
obj.display();
return 0;
}
  
