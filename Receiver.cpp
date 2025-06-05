#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

int main() {
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2, 2), &wsaData);

    SOCKET sock = socket(AF_INET, SOCK_DGRAM, 0);

    sockaddr_in localAddr{};
    localAddr.sin_family = AF_INET;
    localAddr.sin_port = htons(2300);
    localAddr.sin_addr.s_addr = INADDR_ANY;

    bind(sock, (sockaddr*)&localAddr, sizeof(localAddr));

    ip_mreq mreq{};
    mreq.imr_multiaddr.s_addr = inet_addr("225.2.2.2");
    mreq.imr_interface.s_addr = INADDR_ANY;

    setsockopt(sock, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char*)&mreq, sizeof(mreq));

    char buffer[1024];
    sockaddr_in senderAddr{};
    int senderLen = sizeof(senderAddr);

    int bytesReceived = recvfrom(sock, buffer, sizeof(buffer), 0, (sockaddr*)&senderAddr, &senderLen);
    if (bytesReceived > 0) {
        buffer[bytesReceived] = '\0';
        std::cout << "Received: " << buffer << std::endl;
    }

    closesocket(sock);
    WSACleanup();
    std::cout << "Socket Closed" << std::endl;
    return 0;
}
