#include <stdio.h>
#include <stdlib.h>
#include "AGGREGATE.h"



int main()
{
 /*   float arr[] = {1, 4, 6, 5, -1};
    int size = 5;                             //testing for question 3
    float a = pseudo_avg(arr, size);
    printf("%f", a);
*/
     // question 4 part starts here

    float a1[] = {1, 3, 45, -1, 0, 100, -76};
    float a2[] = {23, 4, 7, -4, -10, 72, 3};
    int arr_size = 7;

    float (*fun_ptr_arr[5])(float arr[], int arr_size) = {minf, maxf, sumf, avgf, pseudo_avg};       // array of pointer to functions

    printf("Operations on a1 array\n");

    for(int i=0;i<5;i++)
    {
        printf("%f\n", (*fun_ptr_arr[i])(a1, arr_size));
    }

    printf("Operations on a2 array\n");

    for(int i=0;i<5;i++)
    {
        printf("%f\n", (*fun_ptr_arr[i])(a2, arr_size));
    }


    return 0;
}

// All function implementations which are declared in the header file

float minf(float arr[], int arr_size)
{
    if (arr_size == 0)
    {
        exit(1);     // exiting the program as array size is zero
    }
    float min_num = arr[0];
    for(int i=0;i<arr_size;i++)
    {
        if (arr[i] < min_num)
            min_num = arr[i];
    }
    return min_num;
}

float maxf(float arr[], int arr_size)
{
    if (arr_size == 0)
    {
        exit(1);     // exiting the program as array size is zero
    }
    float max_num = arr[0];
    for(int i=0;i<arr_size;i++)
    {
        if (arr[i] > max_num)
            max_num = arr[i];
    }
    return max_num;
}

float sumf(float arr[], int arr_size)
{
    if (arr_size == 0)
    {
        exit(1);     // exiting the program as array size is zero
    }
    float arr_sum = arr[0];
    for(int i=1;i<arr_size;i++)
    {
        arr_sum += arr[i];
    }
    return arr_sum;
}

float avgf(float arr[], int arr_size)
{
    if (arr_size == 0)
    {
        exit(1);     // exiting the program as array size is zero
    }
    float arr_sum = arr[0];
    for(int i=1;i<arr_size;i++)
    {
        arr_sum += arr[i];
    }
    float avg = arr_sum/arr_size;
    return avg;
}

float pseudo_avg(float arr[], int arr_size)
{
    if (arr_size == 0)
    {
        exit(1);     // exiting the program as array size is zero
    }
    float min_num = minf(arr, arr_size);
    float max_num = maxf(arr, arr_size);
    float avg = (min_num + max_num)/2;
    return avg;
}
/*
    Header Files as stated in the question
*/



float minf(float *arr, int arr_size);
float maxf(float *arr, int arr_size);
float sumf(float *arr, int arr_size);
float avgf(float *arr, int arr_size);
float pseudo_avg(float *arr, int arr_size);
