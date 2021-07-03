//Find the richest customer
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noOfCust, noOfBank;
    cout << "Enter the no. of customers and banks: ";
    cin >> noOfCust >> noOfBank;
    int arr[noOfCust][noOfBank];
    for (int i = 0; i < noOfCust; i++)
    {
        for (int j = 0; j < noOfBank; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0, max = 0, cust = 0;
    for (int i = 0; i < noOfCust; i++)
    {
        sum = 0;
        for (int j = 0; j < noOfBank; j++)
        {
            sum += arr[i][j];
        }
        if (max < sum)
        {
            max = sum;
            cust = i + 1;
        }
    }
    cout << "Richest Customer is Customer-" << cust;
    return 0;
}