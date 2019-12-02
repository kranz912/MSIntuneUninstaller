#include <stdio.h>
#include <sys/stat.h>
#include <string>
int main() {
    std::string dir  = "C:\\Program Files\\Microsoft\\OnlineManagement\\Common";
    std::string exe =  "\\ProvisioningUtil.exe";

    std::string parameters = " /UninstallAgents /MicrosoftIntune";
    struct stat sb;

   
    std::string command  = "\""+ dir + exe+"\" " + parameters;

    if(stat(dir.c_str(),&sb)==0){
        printf("Directory Found \n");
        printf("Executing Command %s \n",command.c_str());

    
        system(command.c_str());

    }
    else{
        printf("Directory Not Found");
    }
    
    getchar();


    return 0;
}