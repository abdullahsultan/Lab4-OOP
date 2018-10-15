#include<iostream>
#include<string>
using namespace std;

class stack
{
  public:
    stack()
    {counter=0;}

    void push_item(string item)
    {if(counter<x)
      my_array[counter]=item; counter++;cout<<endl<<"Counter = "<<counter<<endl;
    }
    void pop_item()
    {if(counter>=0)
      counter--;}

    bool empty()
    {if(counter==9)
    return true;
    if (counter==0)
    return false;}

    string top()
    {return my_array[counter-1];}

  private:
    int x=10;
    string my_array[10];
    int counter;
};

int main()
{
  char choice;string item;
  stack my_stack;
  while (true) {
    cout<<"Enter 'a' to add item 'r' to remove item \n";
    cin>>choice;
    if(choice=='a' || choice=='A')
    {cin>>item;
    my_stack.push_item(item); cout<<endl<<endl<<".............\n \n"<<"Last thing you added was: "<<my_stack.top()<<endl<<endl;}
    else if(choice=='r' || choice=='R')
    my_stack.pop_item();
    else
    cout<<"Invalid choice \n";

    if(my_stack.empty()==true)
    cout<<"Stack is full  \n";
    if (my_stack.empty()==false)
    cout<<"Empty \n";
  }

}
