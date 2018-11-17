#include <iostream>
#include<string>
using namespace std;

string rec(string w)
{
  for(int i=0;i<w.size();i++)
  {
      for(int j=0;j<w.size();j++)
      {
          if(j<=i)
          {
              continue;
          }
          else{cout<<w.substr(i,j)<<endl;}

      }
  }

}

int main()
{cout<<"enter word:"<<endl;
string word;
cin>>word;
rec(word);
    return 0;
}

