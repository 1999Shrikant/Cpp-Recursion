#include<iostream>
using namespace std;

int Mult(int iNo)
{
  static int iMult=1;
  
  if(iNo!=0)
  {
     iMult=iMult*(iNo%10);
     iNo=iNo/10;
     Mult(iNo);
  }
  return iMult;
}

int main()
{
  int iRet=0,iValue=0;
  
  cout<<"Enter Number:"<<"\n";
  cin>>iValue;
  
  iRet=Mult(iValue);
  cout<<"Product of digits is :"<<iRet<<"\n";
  
  return 0;
}
