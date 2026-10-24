#include <stdio.h>
int main(){

    int n;
    printf("How many times you wnat to enter data??\n");
    scanf("%d",&n);
    printf("Number of entry: %d \n",n);
    //int mb;
    if(n<=0){
        printf("Invalid input.\n");
        return 0;
    }
    int arr[n];
    //printf("Please start:");
    for (int i=0;i<n;i++){
        printf("Entry %d: ",(i+1));
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("Hour %d: %d\n",(i+1),arr[i]);
    }
    int total=0;
    
    int want_total;
    printf("Calculate total MB.Enter 1 for YES and 0 for No.");
    scanf("%d",& want_total);
    if (want_total==1){
        for (int i=0;i<n;i++){
            total=total+arr[i];
        }
    }    
    printf("Total: %d MB\n",total);
    float avg=(float)(total)/n;
    printf("Avarage: %.2fMB \n",avg);

    int max_data=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max_data){
            max_data=arr[i];
        }
    }
    printf("MAX DATA: %d\n",max_data);
    int min_data=arr[0];

    for(int i=0;i<n;i++){
        if (arr[i]<min_data){
            min_data=arr[i];
        }
    }
    printf("MIN_DATA: %d MB\n",min_data);

    

    return 0;
}