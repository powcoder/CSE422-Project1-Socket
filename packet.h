https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// Simple packet structure
#ifndef _PACKET_H_
#define _PACKET_H_

#define JOIN            2000
#define JOIN_GRANT      2001
#define GUESS           3000
#define RESPONSE        3001
#define EXIT            9000
#define EXIT_GRANT      9001

#define TYPE_NAME_LEN   16
#define BUFF_LEN        256

#include <string.h>
#include <iostream>

using std::cerr;
using std::endl;

struct My_Packet
{
    unsigned int type;
    char buffer[BUFF_LEN];
};

/*********************************
 * Name:    get_type_name
 * Purpose: When receiving a message, we can only see the type as integer
 *          (ie, 2000, 2001, 3000 ... etc). This function converts those
 *          integers into coresponding char arrays.
 * Receive: The type in integer
 * Return:  the type in char array, length = 16
 *********************************/
void get_type_name(int type, char *type_name)
{
    memset(type_name, 0, TYPE_NAME_LEN);
    switch(type)
    {
        case JOIN:
            memcpy(type_name, "JOIN\0", TYPE_NAME_LEN); 
            break;
        case JOIN_GRANT:
            memcpy(type_name, "JOIN_GRANT\0", TYPE_NAME_LEN); 
            break;
        case GUESS:
            memcpy(type_name, "GUESS\0", TYPE_NAME_LEN); 
            break;
        case RESPONSE:
            memcpy(type_name, "RESPONSE\0", TYPE_NAME_LEN); 
            break;
        case EXIT:
            memcpy(type_name, "EXIT\0", TYPE_NAME_LEN); 
            break;
        case EXIT_GRANT:
            memcpy(type_name, "EXIT_GRANT\0", TYPE_NAME_LEN); 
            break;
        default:
            cerr << "[SYS] Invalid command type." << endl;
            break; 
    }
}

#endif
