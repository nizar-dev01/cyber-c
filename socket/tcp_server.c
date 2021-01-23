#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(){
    char message[] = "You have reached the server";

    // Creating server socket
    int server_socket;
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // Defining server address
    struct sockaddr_in server_addr;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8001);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    // Bind the socket to the IP and the port
    bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr));
    listen(server_socket, 5);

    // Sending message to the client
    int client_sock = accept(server_socket, NULL, NULL);
    send(client_sock, message, sizeof(message), 0);

    // Closing the socket
    close(server_socket);

    return 0;
}