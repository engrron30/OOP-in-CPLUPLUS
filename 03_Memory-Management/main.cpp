#include <stdio.h>
#include <stdlib.h>
#include <memory>
#include <iostream>
using namespace std;

void function_1()
{
    // Stack Variable; get cleaned when function has exited
    int stack_var = 12;

    // Variable that uses heap memory
    int *heap_ptr = (int *) malloc(sizeof(int));
    free(heap_ptr);

    // Raw pointer in C++
    int *raw_ptr = new int();
    delete raw_ptr;

    // Smart pointers
    unique_ptr<int> smart_ptr = make_unique <int>(200);
    cout << __func__ << ": Hello" << endl;
}

int main()
{
    function_1();
	return 0;
}
