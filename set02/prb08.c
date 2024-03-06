#include<stdio.h>

typedef struct _camel{
    float height,length,radius,weight;
} Camel;

int main(){
    int n;
    printf("Enter the number of camels");
    scanf("%d",&n);
    Camel c[n];
    for(int i=0;i<n;i++){
        printf("Enter the height of the camel %d:",i+1);
        scanf("%f",&c[i].height);
        printf("Enter the radius of the camel %d:",i+1);
        scanf("%f",&c[i].radius);
        printf("Enter the length of the camel %d:",i+1);
        scanf("%f",&c[i].length);
    }
    
    return 0;
}
