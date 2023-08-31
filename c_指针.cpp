
#include <iostream>


int main()
{

    int number = 11;
    int *value = &number;
     
     /* 
        *value 表示指针指向的值
        value  表示指针指向的地址
      */
    std::cout << " *value : " << *value << "  value : " << value << std::endl; 

    int **two_value  = &value;
    std::cout << " *two_value : " << *two_value << " two_value : " << two_value << std::endl;
}