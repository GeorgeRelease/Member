#pragma once

#pragma pack(1)
struct UserData
{
    char account[128];
    char idcard[128];
    char name[128];
    char card_type[128];
    char userid[128];
    char sid[128];
    char netbarid[128];
    char money[64];
};
#pragma pack()

bool DDNSDK_Query(const char *card, UserData *outData);
