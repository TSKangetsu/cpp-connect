#include <iostream>
#include <cpr/cpr.h>

int main()
{
    cpr::Session session;
    session.SetUrl("https://www.baidu.com");
    auto response = session.Get();
    // auto r = cpr::Get(cpr::Url{"http://www.baidu.com"});
    std::cout << response.text << std::endl;
    std::cout << response.header["set-cookie"] << std::endl;
    std::cout << response.status_code << std::endl;
    return 0;
}