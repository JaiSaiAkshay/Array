#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //create a vector
  vector<int>ve;//{10}
  ve.push_back(10);//{10,20}
  ve.emplace_back(20);//{10,20,40}
  ve.pop_back(40);//remove the last value
  /*for(int i=0;i<ve.size();i++)
  {
    cout<<ve[i]<<" ";
   }*/
  vector<int>arr(3,100);//{100,100,100}
  //vector<int>arr(5);{0,0,0,0,0}
  //copy one vector to another
  vector<int>ve1(ve);//{10,20}
  vector<int>::iterator it=arr.begin();
  cout<<*(it)<<endl;
  it++;
  cout<<*(it)<<endl;
  for(vector<int>::iterator it=arr.begin();it!=arr.end();it++)
  {
    cout<<*(it)<<" ";
  }
  for(auto it:arr)//directly prints the element
  {
    cout<<it<<" ";
    it=arr.find(arr.begin(),arr.end(),x);
    cout<<it;
  }
  return 0;
}
0 comments on commit 0949c45
