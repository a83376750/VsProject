#include "ServerSocket.h"
#include "Exception.h"
#include <iostream>

#ifdef WIN32
	#include <WinSock2.h>
	#pragma comment(lib,"ws2_32.lib")
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
	m_port = port;
	m_IP = IP;
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
	if (WSAStartup(MAKEWORD(2, 2), &data) != 0)
		throw std::SocketException("启动socket失败");

// 	LPWSAPROTOCOL_INFO LPWInfo;
// 	SOCKET socket = WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, LPWInfo);

	//创建socket
	SOCKET ServerSocketFD = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (ServerSocketFD == INVALID_SOCKET)
	{

	}

	SOCKADDR_IN addr;
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	addr.sin_port = htons(m_port);
	addr.sin_family = AF_INET;

	bind(ServerSocketFD, LPSOCKADDR(&addr), sizeof(SOCKADDR_IN));
}

void ServerSocket::ThrowSocketError()
{
	WSACleanup();

	//释放套接字
	switch (WSAGetLastError())
	{
		case WSANOTINITIALISED:
			throw std::SocketException("请在创建socket前调用WSAStartup!!");
			break;
		default:
			throw std::SocketException("创建socket失败!!");
	}
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
