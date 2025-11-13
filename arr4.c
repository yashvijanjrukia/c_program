#include <stdio.h>
int main(){
    int amt,notes[]={500,200,100,50,20,10,5,2,1},i,count;
    scanf("%d",&amt);
    for(i=0;i<9;i++){
        count=amt/notes[i];
        if(count>0){
            printf("%d note(s) of %d\n",count,notes[i]);
            amt%=notes[i];
        }
    }
    return 0;
}
