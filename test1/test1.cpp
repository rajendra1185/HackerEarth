// test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPresent(int a, int* b, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (b[i] == a)
			return true;
	}
	return false;
}
int countNo(int *a, int num, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == num)
			count++;
	}
	return count;
}
int main()
{
	int N, nu;
	cin >> N;
	int a[100] = { 3,1,2,0,2,0,0,3,3,3,2,5,4,1,2,1,2,2,2,5,3,0,4,0,4,4,3,0,0,1,5,0,4,1,0,5,1,4,5,5,3,5,2,1,1,3,3,0,4,4,4,2,3,0,4,2,0,4,0,4,3,0,0,4,0,4,5,2,3,3,2,1,4,3,4,5,2,0,4,2,0,1,1,4,0,0,3,3,2,0,2,4,5,5,5,2,1,5,2,0 };
	int b[100], c[100];
	int i = 0, j=0,count=0,big =0,k;
	/*for (i; i < N; i++)
	{
		cin >> nu;
		a[i] = nu;
	}*/
	for (i = 0; i < N; i++)
	{
		if (!isPresent(a[i], b,j))
		{
			count = countNo(a, a[i], N);
			b[j] = a[i];
			c[j] = count;
			j++;
		}
		count = 0;
	}
	for (i = 0; i < j; i++)
	{
		if (big < c[i])
		{
			big = c[i];
			k = i;
		}
	}
	cout << b[k];
}
//Problem
//This is one of the most easiest problem you will ever code.
//
//Mr.Bournville loves programmingand he likes to face new programming challenges.After completing many challenges he has now given you one challenge which is one of his favourites.He has given you a list of N random integersand he wants you to find the integer which has the maximum frequency in the given list.
//
//Being a programmer himself, he had made this task a challenge for youand he will calculate your score for this task using a formula.
//
//Formula for calculating the score : (max_score)-(number of characters in your code / 15.0)
//
//Mr.Bournville already has a solution for this but he is not satisfied with his solution.He wants you to write a shortest possible code for this task.In case Frequency of two numbers is same print the smaller one
//
//Input :
//First line of input contains N, number of integers.
//Second line will contains N spaces separated integers.
//
//Output :
//	Print the most frequent integer.
//
//	Contraints :
//	3 <= N <= 104
//	- 106 <= Integer <= 106
//
//	Sample Input
//	5
//	1 1 1 2 2
//	Sample Output
//	1
//	Explanation
//	Clearly, count of 1 more than count of 2.
