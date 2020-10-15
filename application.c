void ShowArray (int *);
void ReverseArray (int *);

int main()
{
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    
    printf("Your array: ");
    ShowArray(array);
    
    ReverseArray(array);
    
    printf("Reversed array: ");
    ShowArray(array);
    
    return 0;
}

void ShowArray (int *arr) {
    int i;
    for(i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void ReverseArray (int *arr) {
    int i, temp;
    for (i = 0; i < SIZE/2; i++){
        temp = arr[i];
        arr[i] = arr[SIZE-i-1];
        arr[SIZE-i-1] = temp;
    }  
}
