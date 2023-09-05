
#include <iostream>

/*
  namespace 表示命名空间,通过 ::（域解析操作符号） 来致命变量、函数、类属于哪一个命名空间。
 */
namespace Mao
{

    char *name = "maodayu";

    void setName(char *userName)
    {
    }
}

namespace Da
{

    char *name = "maodayu";
}

/* 
  可以通过using namespace来指定默认的命名空间，

  还可以直接指定默认的命名空间中的某一个变量
 */
using namespace std;

using Mao::name;

int main()
{

    std::cout << "Mao name : " << Mao::name << std::endl;

    std::cout << "Da name : " << Da::name << std::endl;
}