#include<stdio.h>
int main(){
    int length,breadth;
    length = 10;
    breadth = 2;
    printf("enter the length and breadth of rectangle \n");
    scanf("%d\n%d",&length,&breadth);
    printf("area of rectangle is = %d \n",length*breadth);
    printf("perimeter of rectangle is = %d \n",2*(length+breadth));
    return 0;
}