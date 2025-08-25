#include <iostream>
using namespace std;

int fo(int a[], int b, int key)
{
    int mid;
    int ans = -1;
    int s = 0;
    int e = b - 1;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (a[mid] >= key)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int lo(int a[], int b, int key)
{
    int mid;
    int s = 0;
    int e = b - 1;
    int ans = 1;

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (a[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int b;
    cout << "Enter the size of array:" << endl;
    cin >> b;
    int a[b];
    cout << "enter the elements of the arrays: ";

    for (int i = 0; i < b; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "enter the element:";
    cin >> key;
    cout << fo(a, b, key) << " ";
    cout << lo(a, b, key);
}