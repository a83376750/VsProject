#include "ServerSocket.h"
#include <iostream>

#ifdef WIN32
	#include <WinSock2.h>
#endif

#ifdef LINUX
	#include <netinet/in.h>
#endif

ServerSocket::ServerSocket()
{
}


ServerSocket::ServerSocket(short port, const std::string &IP) throw(std::SocketException)
{
	std::cout << "Start Server!" << std::endl;
	CreateSocket();
}

void ServerSocket::CreateSocket()
{
#ifdef WIN32
	CreateSocketFromWin32();
#endif

#ifdef LINUX
	CreateSocketFromLinux();
#endif

}

ServerSocket::~ServerSocket()
{
}

#ifdef WIN32
void ServerSocket::CreateSocketFromWin32()
{
	WSADATA data;
	//WSAStartup(MAKEWORD(2, 2), &data);
	//socket = WSASocket();
}
#endif

#ifdef LINUX
void ServerSocket::CreateSocketFromLinux()
{
	m_Socket = socket(AF_INET, SOCKET_STREAM, 0);
	if (m_Socket == -1)
	{
		throw SocketException(streeror(errno));
	}
}
#endif
