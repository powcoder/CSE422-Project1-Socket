https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>
#include <sstream>

#include "packet.h"      // defined by us
#include "proj1_client.h" // some supporting functions.

using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char *argv[])
{
    char *              server_name_str = 0;
    unsigned short int  tcp_server_port;
    unsigned short int  udp_server_port;

    struct My_Packet    outgoing_pkt; 

    // prase the argvs, obtain server_name and tcp_server_port
    parse_argv(argc, argv, &server_name_str, tcp_server_port);

    cout << "[SYS] Bulls and Cows client started..." << endl;
    cout << "[TCP] Connecting to server: " << server_name_str
         << ":" << tcp_server_port << endl;

    while(1)
    {
        // TCP: CONNECT TO SERVER

        // TCP: THE FIRST COMMAND MUST BE JOIN
        //      THE RESPONSE MUST BE JOIN_GRANT WITH A UDP PORT NUMBER

        // GOT THE PORT NUMBER
        // EXIT THE LOOP AND CONTINUES TO UDP GAME PLAY
    }

    // Game play using UDP
    cout << "[UDP] Guesses will be sent to: " << server_name_str 
         << " at port:" << udp_server_port << endl;

    while(1)
    {

        // GAME PLAY IN UDP
        //
        while(get_command(outgoing_pkt) == false){}

        // UDP: SEND/RECV INTERACTIONS
    }

    return 0;
}

