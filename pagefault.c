//Question: A page replacement algorithm should minimize the number of page faults. We can do this
//minimization by distributing heavily used pages evenly over all memory, rather than having them compete
//for a small number of page frames. We can associate with each page frame a counter of the number of
//pages that are associated with that frame. Then, to replace a page, we search for the page frame with the
//smallest counter.

//program for Implementing page fault counts using this basic idea

#include<stdio.h> 
int main() 
{ 
    int m,n;
       printf("Enter total number of elements\n"); 
        scanf("%d",&m);//taking input from user for total number of elements in array
        printf("Enter total number of frames\n");
        //taking total number of frames
        scanf("%d",&n);
    int arr[m];//for storing the elementswe are using array structure inplace of queue
    int frame[n];//using the FIFO approch in case of same number of counts to resolve the tie
    int count[n],z;//use of count array for take care of increment and decrement
    int counter=0;//intial elements are fixed for page fault
    printf("Enter elements of array \n");

        for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);
    }

