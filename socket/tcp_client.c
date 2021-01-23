#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

#include <netinet/in.h>

int main(){
    // creating a socket
    int net_socket;
    net_socket = socket(AF_INET, SOCK_STREAM, 0);

    //address for the socket to connect
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8001);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    int conn_stat = connect(
        net_socket,
        (struct sockaddr*) &server_addr,
        sizeof(server_addr)
    );

    if(conn_stat == -1){
        printf("Oops! Somehting went wrong while connecting to the server\n");
    }else{
        // Recieve data fro the server
        char response[256];
        recv(net_socket, &response, sizeof(response), 0);
        printf("Server response : %s\n",response);
    }


    // Closing the socket
    close(net_socket);

    return 0;
}