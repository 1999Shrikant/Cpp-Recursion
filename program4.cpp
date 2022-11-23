#include<iostream>
using namespace std;

int Fact(int iNo)
{
  static int iFact=1,i=1;
  
  if(i<=iNo)
  {
     iFact=iFact*i;
     i++;
     Fact(iNo);
  }
  return iFact;
}

int main()
{
  int iRet=0,iValue=0;
  
  cout<<"Enter Number:"<<"\n";
  cin>>iValue;
  
  iRet=Fact(iValue);
  cout<<"Factorial is :"<<iRet<<"\n";
  
  return 0;
}
