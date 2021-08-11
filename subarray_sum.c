#include<stdio.h>

int main()
{
    int arr[100], size, i, n, x, sum = 0;

    printf("Enter array size\n");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);

    printf("Enter gap :");
    scanf("%d",&n);

    for(x = 0; x < n; x++){
        for(i = 0; i < size; i++){
            if(i%n == x){
                sum = sum + arr[i];
            }
        }
        printf("%d \n",sum);
        sum = 0;
    }

    return 0;
}

