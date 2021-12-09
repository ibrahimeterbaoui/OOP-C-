#include <iostream>
using namespace std;
class  mere{
public:
  void display ()
  {
    cout << "Mother Class"<<endl;
  }
};
class  fille : public  mere{
public:
  void display()
  {
    cout << "Daughter Class"<<endl;
  }
};
int main ()
{
   fille F;
  F.display();
  return 0;
}
