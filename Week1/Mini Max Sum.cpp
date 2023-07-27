#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(int arr[5])
{
    long long swapp, Max=0, Min=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                swapp = arr[i];
                arr[i] = arr[j];
                arr[j] = swapp;
            }
        }
    }
