#include<stdio.h>

int main(){

    int i,j,temp,arr[5]={5,1,7,6,3};

    for(i=0;i<=4;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

                
            }
        }
        
    }
    for(i=0;i<=4;i++){
    printf("%d",arr[i]);
    }
    return 0;
}    


