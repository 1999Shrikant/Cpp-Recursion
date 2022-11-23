#include<iostream>
using namespace std;

int Sum(int iNo)
{
  static int iSum=0;
  
  if(iNo!=0)
  {
    iSum=iSum+iNo%10;
    iNo=iNo/10;
    Sum(iNo);
  }
  return iSum;
}

int main()
{
  int iValue=0,iRet;
  
  cout<<"Enter number:"<<"\n";
  cin>>iValue;
  
  iRet=Sum(iValue);
  cout<<"Sumation of "<<iValue<<" is :"<<iRet<<"\n";
  
  return 0;
}
