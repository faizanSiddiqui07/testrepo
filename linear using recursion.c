//linear search using recursion
#include<stdio.h>
int linearS(int x, char arr[], int si, int ei);
int main () {
    
    char arr[30]= {5,8,2,34,5,21,34,56,8,97,5,3,45,32,14,17,4,25};
    int x;
    printf("enter the element to be searched :");
    scanf("%d",&x);
   int result= linearS( x, arr,0,30);
    if (result!=-1)
    {
        printf("element %d found at index %d",x,result);
            }
    else{
        printf("element not found");
    }
    return 0;
}


int linearS(int x, char arr[], int si, int ei){
    if (si>=ei)  {
        return -1;
    }
    if (arr[si]==x)  {

        return si;
    }
    return linearS(x, arr, si + 1, ei);
}
    