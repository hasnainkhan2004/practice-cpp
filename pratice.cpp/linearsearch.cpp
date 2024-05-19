
#include <iostream>
using namespace std;
int main() {
int arr[50] , len , c_len;
len=size(arr); // max size of an arry
cout<<"Max size of an array "<<len<<endl;
cout<<"enter the size of an array you want";
cin>>c_len;
cout<<"Current size of an array "<<c_len;
for(int i=0;i<c_len;i++)
{
cin>>arr[i];
}
int find , i;
cout<<endl<<"Enter the number you want to find in array";
cin>>find;
bool found=false;
for(int i=0;i<c_len;i++)
{
if(arr[i]==find)
{
cout<<"the number is found at index of"<<i;
found=true;
break;
}
}
if(!found)
{
cout<<"number not found";
}
return 0;
}