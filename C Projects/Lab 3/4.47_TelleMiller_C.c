//Telle Miller <CSIS 342-D01>

#include <stdio.h>


void bubble_sort(int* arrPtr, int size) { // Function to sort array using pointers
  
    int i, j, t; // Iterator variables
  
    for (i = 0; i < size; i++) { // Sort the numbers using pointers 
        for (j = i + 1; j < size; j++) { 
            if (*(arrPtr + j) < *(arrPtr + i)) { // Perform swaps if number is lesser
                t = *(arrPtr + i); 
                *(arrPtr + i) = *(arrPtr + j); 
                *(arrPtr + j) = t; 
            } 
        } 
    } 

    printf("Sorted array: ");
    for (i = 0; i < size; i++) { // Print the sorted array
        printf("%d ", *(arrPtr + i)); 
    }
} 

int main() {

    //Array variables
    int arr[10] = {0};
    int arrSize;
  
    //Prompting user for size of array
    printf("Size of array [Max is 10]: ");
    scanf("%d", &arrSize);
  
    if(arrSize > 10) { //ERROR: Array size is larger than ten. Exits program.
        printf("Entered value is greater than 10. Please try again with value up to 10.");
        return 0;
    }
  
    for(int i = 0; i < arrSize; i++) { //Receiving input from user
        printf("Enter element #%d: ", i);
        scanf("%d", &arr[i]); //Writing input to arr
    }
    
    bubble_sort(arr, arrSize); // Call bubble sort and print

    return 0; // Return and exit program
}