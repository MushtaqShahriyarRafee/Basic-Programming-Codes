#include <stdio.h>
int main(){
    int i,j;
    for(i=1; i<=20; i=i+4){
        for(j=1; j<20; j+=3)
            printf("%d ", j);
        printf("\n");
    }
    printf("j = %d", j);
    return 0;
}
