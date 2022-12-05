#define _CRT_SECURE_NO_WARNINGS 1
//using reloaded template functions


#include<string>
#include<fstream>
#include<iostream>

template <typename T>//origianl template
void Swap(T &a, T &b);

template <typename T>//new reloaded functon templates
void Swap(T &a, T &b,int n);

int main(char argc, char** argv)
{




	return 0;
}
template <typename T>
void Swap(T &a, T &b)
{


}
template <typename T>
void Swap(T *a, T *b, int n)
{


}