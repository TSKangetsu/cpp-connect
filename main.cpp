#include <iostream>
#include <cpr/cpr.h>

int main(int argc, char *argv[])
{
    // char *headerINFO = "username=";
    // char *headerINFO2 = "&password=";
    // char *fucmainINFO = headerINFO + *argv[0] + *headerINFO2 + *argv[1];
    //http://10.110.2.15/lxportal/getIP.php
    // std::cout << *fucmainINFO << std::endl;
    auto response = cpr::Post(cpr::Url{"http://10.110.2.15/lxportal/getIP.php"},
                              cpr::Body{"username=19924613328&password=A02082635"});
    std::cout << response.text << std::endl;
    return 0;
}