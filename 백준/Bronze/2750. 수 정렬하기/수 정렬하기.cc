#include <iostream>
using namespace std;


int main()
{
    int N;
    int tmp;
    cin >> N;
    int* arr = new int[N];
    int j = N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    while (j!=0)
    {
        for (int k = 0; k < N-1; k++)
        {
            if (arr[k] > arr[k+1])
            {
                tmp = arr[k];
                arr[k] = arr[k+1];
                arr[k +1] = tmp;
            }
        }
        j--;
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << '\n';
    }
}