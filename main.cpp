#include <cstdio>
#include <iostream>
#include "ccapi.h"

static CCAPI ccapi;


int get_temps(std::string console_ip) {
    
    int rsx;
    int cell;
    ccapi.GetTemperature(&cell, &rsx);
}

int main() {

    std::string console_ip = "192.168.137.153"; // yeah it's hardcoded idc
    if (!ccapi.GetLibraryState())
    {
        printf("CCAPI.dll couldn't be loaded. Make sure you have the DLL in the same folder.\n");
        exit(-1);
    }

    if (!ccapi.Connect(console_ip)) {
        printf("Couldn't connect to your console...\n");
        exit(-1);
    }









}