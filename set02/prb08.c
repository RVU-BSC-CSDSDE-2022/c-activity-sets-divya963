#include<stdio.h>
#define pi 3.1475

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
    //to find the weight of one camel the equation is this.now find to get the weignt of n number of camels.
    
        c.weight_of_camel = pi*(pow(c.radius,3))*sqrt(c.height*c.length);
        printf("%f",c.weight_of_camel);
    
    
    return 0;
}
