#include<iostream>
#include<string>
using namespace std;

class stack
{
  public:
    stack(int size)
    {x=size;counter=0;}

    void push_item(string item)
    {if(counter<x)
      my_array[counter]=item; counter++;
    }
    void pop_item()
    {if(counter>0)
      counter--;}

    bool empty()
    {if(counter==0)
    return true;
    else
    return false;}

    string top()
    {return my_array[counter];}

  private:
    int x;
    T my_array[x];
    int counter;
};

int main()
{
  int size;char choice;string item;
  cout<<"Enter size of stack \n";
  cin>>size;
  my_stack(size);
  while (true) {
    cout<<"Enter 'a' to add item 'r' to remove item \n";
    choice=getch();
    if(choice=='a' || choice=='A')
    {cin>>item;
    my_stack.push_item(item); cout<<endl<<endl<<".............\n \n"<<my_stack.top()<<endl<<endl;}
    else if(choice=='r' || choice=='R')
    my_stack.pop_item();
    else
    cout<<"Invalid choice \n";

    if(my_stack.empty()==true)
    cout<<"No Space available \n";
    else
    cout<<"No Space available \n";
  }

}
