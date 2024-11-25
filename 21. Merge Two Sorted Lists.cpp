#include <iostream>

using namespace std;

int main()
{

    int list1[3] = {1,2,4};
    int list2[3] = {1,3,4};
    int listMain[0] = {};

    for(int i = 1 ;i = sizeof(list1); i++)
    {
        if (list1[i] >= list2[i])
        {
           // np 1 >= 1 true
           // 1,1

           // 2 wykonanie 
           // 2 >= 3 flase
        }
        else if (list1[i] < list2[i])
        {
            // np 1 < 1 flase
            // nic sie nie dzieje

            // 2 wykonanie
            // 2 < 3 true więc
            // + 2,3 do tablicy
        }

        else {
            break;
        }
    }

      // Append the str2 in to str1
    // str1.append(str2);

    return 0;
}


// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]

