#include<iostream>
using namespace std;

void printallsubarray(int arr[],int sum, int n,int w)
{
int add=0;
for(int j=0;j<n;j++)
{
        add=arr[j];
        for(int k=j+1;k<n;k++)
        {

                add=add+arr[k];
                if(add==sum)
                {
                        cout<<"{ ";
                        for(int l=j;l<=k;l++)
                        {
                                 cout<<arr[l]<<" , ";
                                 w++;
                        }
                        cout<<"}"<<"\n";


                }

        }
}
if(w==0)
{
        cout<<"\nno subarray found:";
}
}

int main()
{
int n,i,sum,w=0;
cout<<"Enter the size of the array: ";
cin>>n;
int arr[n];
cout<<"\nEnter The Array:";
for(i=0;i<n;i++)
        cin>>arr[i];
cout<<"\nEnter the sum of subarray: ";
cin>>sum;
printallsubarray(arr,sum,n,w);

return 0;
}
