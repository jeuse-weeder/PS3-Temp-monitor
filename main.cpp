#include <cstdio>
#include <iostream>
#include "ccapi.h"

static CCAPI ccapi;



int main() {

    
    int cell, rsx;
    std::string console_ip = "192.168.137.153"; // yeah it's hardcoded idc
    if (!ccapi.GetLibraryState())
    {
        printf("CCAPI.dll couldn't be loaded. Make sure you have the DLL in the same folder.\n");
        exit(-1);
    }

    if (ccapi.Connect(console_ip) != CCAPI_OK) 
    {
        std::cout << "Couldn't establish a connection with your PS3." << std::endl
            << "Verify your ps3 ip." << std::endl;
    }
    else {
        std::cout << "Connected to your PS3" << std::endl;
        ccapi.VshNotify(CCAPI::NotifyArrow, "Connected");
        int ret = ccapi.GetTemperature(&cell, &rsx);
        if (ret != CCAPI_OK) {
            std::cout << "Something went wrong";
            exit(-1);
        }
        else {
            
        }
            
    }

    









}