#include <iostream>
using namespace std;

double Mas(int a[], int n, int i = 0, int sum = 0, int count = 0)
{
    if (i >= n)
    {
        return (count == 0) ? 0 : static_cast<double>(sum) / count;
    }

    
    if (i % 2 == 0)
    {
        sum += a[i];
        count++;
    }

    return Mas(a, n, i + 1, sum, count);
}

int main() {
    int n;
    cout << "Count: ";
    cin >> n;

    int* a = new int[n];  // динамічний масив
    cout << "Enter elements: "; 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double result = Mas(a, n);
    cout << "Half result: " << result << endl;

    delete[] a;   
    return 0;
}
