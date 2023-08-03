#include<iostream>  
using namespace std;
  
int  subarray ( int arr[], int n, int sum )  
{  
    int currentsum, i , j , k ;  
    
    for ( i = 0 ; i < n ; i++ )   
    {  
        currentsum = arr[ i ] ;  
       
        for ( j = i + 1 ; j <= n ; j++ )   
        {  
            if (currentsum == sum) {  
            cout << "Sum found between indexes " << i
                     << " and " << j-1; 
                cout<< "\n Printing the required subarray: \n ";  
                for( k = i ; k <= j - 1 ; k++ )  
                {  
                   cout<<arr[ k ],"\n"  ;  
                }  
                return 0 ;  
            }  
            if ( currentsum > sum || j == n )  
                break ;  
            currentsum = currentsum + arr[ j ] ;  
        }  
    }  
      
       cout<<" \n No subarray found \n ";  
}  
int main()  
{  
    int i , A[ 100 ] , n , sum ;  
    cout<<" Enter number of elements present in the array : ";  
    cin>>n;  
    cout<< " Enter array: " ;  
    for ( i = 0 ;  i < n ; i++ )  
    {  
      cin>>A[ i ]  ;  
    }  
    cout<<" Enter sum value: ";  
    cin>>sum  ;  
    subarray ( A , n , sum ) ;  
    return 0 ;  
}  
