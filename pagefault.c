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
    
    
     int k=0,flag=0,index=0,min=0,d=0;

        for(int i=0;i<n;i++){

        frame[i]=arr[i];
        count[i]=count[i]+1;

        }
          counter=4;//inserting four elements
                for(int i=n;i<m;i++){
            for(int j=0;j<n;j++){

        if(frame[j]==arr[i]){
        //if we found out that the element is present will be use in future we change the flag to 1
            flag=1;
            index=j;
            break;
                }
        }

        //checking the condition if the given elment will be use or not using flag
        if(flag==0){
            frame[k%(n)]=arr[i];
            counter++;
            //increment the total number of page fault
             k++;
        }
            flag=0;
       }
          for(int i=0;i<m;i++)
    {

        if(frame[z%n]!=arr[i])
        {
            for(int j=i+1;j<m;j++)
                {
                    if(frame[z%n]==arr[n])
                        {
                            int x=0;
                              min--;//if we find out the there is a smallest element we put the element in that frame and decrease it by 1
                                }
                    }
                }
            }
          if( z==0)
        {
        count[z]=count[z%n]+1;//otherwise increment it by 1;
           }


    printf("Total number of page fault is %d",counter);

    }




