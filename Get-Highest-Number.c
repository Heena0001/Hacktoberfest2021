#include<stdio.h>  
//To find the highest number from the given array
void main ()  
{  
    int arr[100],i,n,largest,sec_largest;  
    printf("Enter the size of the array?");  
    scanf("%d",&n);  
    printf("Enter the elements of the array?");  
    for(i = 0; i<n; i++)  
    {  
        scanf("%d",&arr[i]);  
    }  
    // compare elements with 0 index element
    largest = arr[0];  
      
    for(i=0;i<n;i++)  
    {  
        if(arr[i]>largest)  
        {
            largest = arr[i];  
        }
        else if (arr[i]!=largest)  
        {
           printf("largest element not found");
        }  
    }  
    printf("largest = %d",largest);  
      
} 
