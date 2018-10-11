#include <iostream>
using namespace std;

class ToolBooth{

public:
  ToolBooth()
  {cars=0;money=0;loss=0;}
  void payingCar()
  {
    money=money+150.50;cars++;
  }

  void nopaycar()
  {cars++;loss=loss+150.50;}

  void display()
  {cout<<"Total no of cars = "<<cars<<endl;
  cout<<"Total money = "<<money<<endl;
  cout<<"Total loss = "<<loss<<endl;
  }

private:

  unsigned cars;
  double money;
  double loss;
};

int main()
{
  ToolBooth car;
  char choice;
  while(true)
  {
    cout<<"Enter 'p' for paying car and 'n' for non-paying car \n and enter 'q' to showresult and quit \n";
    cin>>choice;
    if(choice=='p' || choice=='P')
    {car.payingCar();}
    else if(choice=='n' || choice=='N')
    {car.nopaycar();}
    else if(choice=='q' || choice=='Q')
    {car.display();break;}
    else
    {cout<<"Invalid choice \n";}

  }
  return 0;
}
