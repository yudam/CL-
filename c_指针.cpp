
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

    /* 
       ** 指向指针的指针
       *two_value  返回的值是指针value的地址
       two_value   表示的是一个新的地址
     */
    std::cout << " *two_value : " << *two_value << " two_value : " << two_value << std::endl;



    /*  测试 提交 */

}