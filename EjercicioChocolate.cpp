#include <iostream>
#include <fstream>
using namespace std;

int binarySearch(long long int arr[], int l, int r, int x)
{
   int mid = l + (r - l)/2;
   if (r >= l)
   {
        //cout<<arr[mid] <<" - ";

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch3(arr, l, mid-1, x);

        // If the element is present at the middle
        // itself
        if (arr[mid] < x)
            return binarySearch3(arr, mid+1, r, x);

        return mid;

        // Else the element can only be present
        // in right subarray
   }

   // We reach here when element is not
   // present in array
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
