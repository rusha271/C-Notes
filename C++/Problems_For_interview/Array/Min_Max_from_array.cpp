/*

Example :
    2 6 9 3 5 8 1

Ouptut :
    min = 1 and max = 9


But twist is that make the comparsion less

so we will make two pair and then comapre with each other


*/

#include <iostream>
using namespace std;

int minmaxArray(int array[], int len)
{
    int i, min, max;
    // Below code is used to skip first two element and assogn min and max
    if (len % 2 == 0)
    {
        if (array[0] > array[1])
        {
            min = array[1];
            max = array[0];
        }
        else
        {
            min = array[0];
            max = array[1];
        }
        i = 2;
    }
    else
    {
        min = array[0];
        max = array[0];
        i = 1;
    }

    // this will go unit the len is greater then i 
    while (i < len - 1)
    {
        if (array[i] > array[i + 1])
        {
            if (array[i] > max)
            {
                max = array[i];
            }
            if (array[i + 1] < min)
            {
                min = array[i + 1];
            }
        }
        else
        {
            if (array[i + 1] > max)
            {
                max = array[i + 1];
            }
            if (array[i] < min)
            {
                min = array[i];
            }
        }
    }
}