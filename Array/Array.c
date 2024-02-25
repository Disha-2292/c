#include<stdio.h>
#include <limits.h>
void print_array(int arr[], int n) { 
    for(int i = 0; i < n; i++) {
            printf("%d\n", arr[i]); 
    }
}

void large_ele(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
        max=arr[i];
        }
    }
    printf("Largest element is %d\n",max); 
}

void small_ele(int arr[],int n){
    int small=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("Smallest element is %d\n",small);
}

void slargest(int arr[],int n){
   int large=arr[0];
   int slarge=-1;
   for(int i=0;i<n;i++){
       if(arr[i]>large){
           slarge=large;
           large=arr[i];
       }
       else if(arr[i]<large && arr[i]>slarge){
           slarge=arr[i];
       }
   }
   printf("Second largest element is %d\n",slarge);
}

void ssmallest(int arr[],int n){
    int small=arr[0];
    int ssmall=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            ssmall=small;
            small=arr[i];
        }
        else if(arr[i]!= small && arr[i]<ssmall){
            ssmall=arr[i];
        }
    }
    printf("Second smallest element is %d\n",ssmall);
}

void asc(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void dsc(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void freqn(int arr[],int n){
    int i, j, maxElement, count=1;
     int maxCount = 0; 
    for(i = 0; i< n; i++)   
    {
        for(j = i+1; j < n; j++)  
        {
            if(arr[j] == arr[i])
            {
                count++;     
                if(count > maxCount)
                {
                    maxElement = arr[j];
                }
            }
        }
    }
            printf("%d\n",maxElement);
}

int main() {
    char ch;
    int choice, n;
    int arr[100]; 
    do {
        printf("Enter your choices\n");
        printf("1. Enter array elements\n2. Traverse\n3. Largest Element\n4. Smallest Element\n5. Second largest Element\n6. Second smallest Element\n7. Array in Ascending order\n8. Array in Ascending order\n9. Remove Duplicate\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter array size\n");
                scanf("%d", &n);
                for(int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
            break;
            case 2:
                printf("Array elements are:\n");
                print_array(arr, n); 
            break;
            case 3:
                large_ele(arr, n); 
            break;
            case 4:
                small_ele(arr, n); 
            break;
            case 5:
                slargest(arr, n); 
            break;
            case 6:
                ssmallest(arr,n);
            break;
            case 7:
            printf("Arra in Ascending order\n");
                asc(arr,n);
            break;
            case 8:
            printf("Arra in Descending order\n");
                dsc(arr,n);
            break;
            case 9:
                freqn(arr,n);
            break;
        }
        printf("\nDo you want to continue? (press y/n)\n");
        scanf(" %c", &ch); 
    } while(ch == 'y' || ch == 'Y');
    return 0; 
}