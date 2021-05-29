// array2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//void leftRotByOne(int *a, int size)
//{
//
//    int temp = a[0];
//    int j = 0;
//    for (j; j < size; j++)
//    {
//        a[j] = a[j + 1];
//    }
//    a[j - 1] = temp;
//}
//int fun(int* a, int n, int size)
//{
//    for (int i = 0; i < n; i++)
//    {
//            
//        leftRotByOne(a, size);
//    }
//    return 0;
//}
//int main()
//{
//    int a[] = { 1,2,3,4,5,6,7 };
//    int n;
//    cin >> n;
//    int size = sizeof(a) / sizeof(a[0]);
//    fun(a, n,size);
//  
//    for (int i = 0; i < size; i++)
//        cout << a[i] << "";
//    return 0;
//}


///*Fuction to get gcd of a and b*/
//int gcd(int a, int b)
//{
//    if (b == 0)
//        return a;
//
//    else
//        return gcd(b, a % b);
//}
//
///*Function to left rotate arr[] of siz n by d*/
//void leftRotate(int arr[], int d, int n)
//{
//    /* To handle if d >= n */
//    d = d % n;
//    int g_c_d = gcd(d, n);
//    for (int i = 0; i < g_c_d; i++) {
//        /* move i-th values of blocks */
//        int temp = arr[i];
//        int j = i;
//
//        while (1) {
//            int k = j + d;
//            if (k >= n)
//                k = k - n;
//
//            if (k == i)
//                break;
//
//            arr[j] = arr[k];
//            j = k;
//        }
//        arr[j] = temp;
//    }
//}
//
//// Function to print an array
//void printArray(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//}
//
///* Driver program to test above functions */
//int main()
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7,8,9,10,11,12 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // Function calling
//    leftRotate(arr, 3, n);
//    printArray(arr, n);
//
//    return 0;
//}

/*Binary Search algorithm*/
#include <iostream>
#include "header.h"
#include "vTable.h"
using namespace std;


int main()
{
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int size = sizeof(arr) / sizeof(arr[0]);
	int index = binarySearch(arr, key, 0, size);
	cout << "key found at::" << index << "::"<<arr[index]<<endl;*/

	/*std::string str;
	int nu;
	cin >> nu >> str;
	String_Problem(str, nu);*/

	//max_boarder();
	/*cout << "sizeof(int):" << sizeof(int) << "sizeof(int*)" << sizeof(int*) << endl;
	fun_pointer fun = NULL;
	TestDrived a;
	a.GetVtblAddress();
	a.GetFirstVtblFunctionAddress();
	a.GetSecondVtblFunctionAddress();
	a.CallFirstVtblFunction();
	a.CallSecondVtblFunction();*/

	StaticInCpp ob1, ob2;
	cout << "sizeof of classe :: " << sizeof(StaticInCpp) << endl;
	ob1.display();
	ob2.display();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
