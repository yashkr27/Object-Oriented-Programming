#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    SOCKET sock = socket(AF_INET, SOCK_DGRAM, 0);

    sockaddr_in groupAddr{};
    groupAddr.sin_family = AF_INET;
    groupAddr.sin_port = htons(2300);
    inet_pton(AF_INET, "225.2.2.2", &groupAddr.sin_addr);

    const char* message = "UDP Multicasting";

    sendto(sock, message, strlen(message), 0, (sockaddr*)&groupAddr, sizeof(groupAddr));

    closesocket(sock);
    WSACleanup();
    return 0;
}
