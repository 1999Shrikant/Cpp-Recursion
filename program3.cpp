#include<iostream>
using namespace std;

int Strlen(char *str)
{
  static int iCnt=0;
  
  if(*str !=0)
  {
    if(((*str>='A')&&(*str<='Z'))||((*str>='a')&&(*str<='z')))
    {
      iCnt++;
    }
    str++;
    Strlen(str);
  }
  return iCnt;
}

int main()
{
  int iRet=0;
  char Arr[30];
  
  cout<<"Enter String:"<<"\n";
  cin>>Arr;
  
  iRet=Strlen(Arr);
  cout<<"Number of character present are: "<<iRet<<"\n";
  
  return 0;
}
