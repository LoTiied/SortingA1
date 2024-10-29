#include <stdio.h>
#include <conio.h>

void sort(int Array[], int n)
{
    for(int j = 0; j<n-1; j++)
    {
        for(int k = 0; k<n-j-1; k++)
        {
            if(Array[k]>Array[k+1])
            {
                int temp = Array[k];
                Array[k] = Array[k+1];
                Array[k+1] = temp;
            }
        }
    }
}

int main(){
    char choice;
    do{
        int n = 0;
        int i = 0;

        printf("import lenght of array\n");
        scanf("%d",&n);

        int Array[n];

        for(i = 0; i<n; i++){
            int p = 0;
            printf("enter integer ");
            scanf("%d",&p);

            Array[i] = p;
        }
        printf("unsorted array:");
        for(i = 0; i<n; i++){
            printf("%d ",Array[i]);
        }

        printf("\n");

        sort(Array,n);
        printf("sorted array:");
        for(i = 0; i<n; i++){
            printf("%d ",Array[i]);
        }

        printf("\nWant to run code again? (y/n): ");
        choice = getch();
        printf("\n");
        
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
