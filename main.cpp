#include <iostream>
#include <unistd.h>
#include <string>
#include <cpr/cpr.h>

int connect_send(char *usr, char *passwd)
{
    std::string username = usr;
    std::string password = passwd;
    auto response = cpr::Post(cpr::Url{"http://10.110.2.15/lxportal/getIP.php"},
                              cpr::Body{"username=" + username + "&password=" + password});
    if (response.text != "0")
    {
        std::cout << "connection failed" << std::endl;
    }
    else
    {
        std::cout << "connection success" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    int argvs;
    char *usr;
    char *passwd;
    int data_comfirm;
    while ((argvs = getopt(argc, argv, "u:p:")) != -1)
    {
        switch (argvs)
        {
        case 'u':
            usr = optarg;
            data_comfirm = 1;
            break;
        case 'p':
            passwd = optarg;
            data_comfirm = 2;
            break;
        default:
            abort();
            break;
        }
    }
    if (data_comfirm = 2)
    {
        connect_send(usr, passwd);
    }
    return 0;
}