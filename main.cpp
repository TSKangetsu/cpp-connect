#include <iostream>
#include <cpr/cpr.h>

int main()
{
    std::cout << "ins" << std::endl;
    auto r = cpr::Get(cpr::Url{"http://www.baidu.com"});
    std::cout<< r.text << std::endl;
    return 0;
}