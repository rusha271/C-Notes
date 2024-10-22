/* By using AP in the array we can find the missing number
    means : size_of array = 5
    1 , 3 , 2 , 5 
    there sum will be = 15
    and above array sum will be 11

    then we minus that = 4 

*/


int missingNumber(int array[], int len) {
    int sum = len * (len + 1) / 2;  // Sum of first len natural numbers
    int array_sum = 0;
    
    for (int i = 0; i < len - 1; i++) {
        array_sum += array[i];
    }
    return sum - array_sum;
}







int main()
{
 return 0;
}