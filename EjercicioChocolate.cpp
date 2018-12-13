#include <iostream>
#include <fstream>
using namespace std;

int binarySearch(long long int arr[], int l, int r, int x)
{
   int mid = l + (r - l)/2;
   if (r >= l)
   {
        //cout<<arr[mid] <<" - ";

       
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

   
        if (arr[mid] < x)
            return binarySearch(arr, mid+1, r, x);

        return mid;

      
   }

   return mid;
}

int main()
{
    long long int n,ci,q;
    int indice,x;
    cin>>n;
    long long int sum[n+1] ;
    sum[0]=0;
    for(int i=1; i<=n; i++){
        cin>>ci;
        sum[i] = sum[i-1]+ci;
        //cout<<sum[i]<<endl;
    }

    cin>>q;
    for(int j=0; j<q; j++)
    {
        cin>>x;
        indice = binarySearch(sum, 1, n+1, x);
        cout<<indice<<endl;
    }


    //cout<<"Hola Mundo";
    return 0;
}
