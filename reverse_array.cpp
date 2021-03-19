#include <iostream>
#include <vector>

using namespace std;

//*********************************************************
int main()
{
    //vector<int> arr{1, 2, 3, 4};

    int a[] = {1, 2, 3, 4};

    // for (int i = arr.size()-1; i >=0 ; i--)
    // {
    //     cout << arr[i] << endl;
    // }

    for (int i = (sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--)
    {
        cout << a[i] << endl;
    }

    return 0;
}


//**********************************************************
// int main()
// {

//     int a[] = {-1, 1, 3, 5};

//     int n = sizeof(a) / sizeof(a[0]);
//     int max = a[0];
//     int min = a[0];

//     for (int i = 0; i <= n - 1; i++)
//     {
//         //for finding the maximum
//         if (a[i] >= max)
//         {
//             max = a[i];
//         }

//         //for finding the minimum
//         if (a[i] <= min)
//         {
//             min = a[i];
//         }
//     }

//     cout << "max is: " << max << endl;
//     cout << "min is: " << min << endl;
//     return 0;
// }
