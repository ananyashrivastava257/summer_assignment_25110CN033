#include <stdio.h>

int linearSearch(int arr[], int size, int target)
{
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) 
        {
            return i; 
        }
    }
    
    return -1; 
}

int main() {
    int size, element, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; 

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &element);

    result = linearSearch(arr, size, element);

    if (result != -1) {
        printf("Element %d found at index %d (Position %d).\n", element, result, result + 1);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}
