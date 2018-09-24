#include<stdio.h>
int main()
{
    int n,i,choice,j;
    printf("How money number?\t");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter your number:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter your choice number:\t");
    scanf("%d",&choice);

    int found = linear_search(arr,n,choice);
    printf("\nYour index location is: %d",found);
    return 0;
}
int linear_search(int arr[],int n,int choice)
{
    int j;
    for(j=0;j<n;j++)
    {
        if(arr[j] == choice)
        {
            return j;
        }
    }
    return -1;

}
