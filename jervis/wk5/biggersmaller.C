
#include <stdio.h>
#include <stdlib.h>

void bigger(float nums[], int size);
void smaller(float nums[], int size);

int main(int argc, char *argv[]) {
    

    float nums[argc - 1];

    if (argv[1] == "Largest"){
        bigger(nums, argc - 1);
    }

    return 0;

float bigger(float nums, int size){

    float max = nums[0];

    for(int i = 1; i < size); i++){
        if (nums[i] > max){
            max = nums[i];
        }
    }

    return max;
}
float smaller(float nums, int size){

    float min = nums[0];

    for(int i = 1; i < size); i++){
        if (nums[i] < min){
            min = nums[i];
        }
    }

    return min;
}
