#include <iostream>
#include <string>
#include <cpr/cpr.h>

int main(int argc, char *argv[])
{
    std::string username = argv[1];
    std::string password = argv[2];
    auto response = cpr::Post(cpr::Url{"http://10.110.2.15/lxportal/getIP.php"},
                              cpr::Body{"username=" + username + "&password=" + password});
    if (response.text != "0")
    {
        std::cout << "connection failed" << std::endl;
    }else
    {
        printf("connection succuces");
    }
    return 0;
}