#include<iostream>
using namespace std;

void Display(int size)
{
  static int i=size;
  if(i>0)
  {
    cout<<" "<<i<<" *"<<"\t";
    i--;
    Display(size);
  }  
}

int main()
{
  int iSize=0;
  
  cout<<"Enter number:"<<"\n";
  cin>>iSize;
  
  Display(iSize);
  
  return 0;
}
