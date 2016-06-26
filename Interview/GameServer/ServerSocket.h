#pragma once
#include <string>
#include "Exception.h"

class ServerSocket
{
public:
	ServerSocket(short port, const std::string &IP)throw(std::SocketException);
private:
	ServerSocket();
	~ServerSocket();
	
public:

	void CreateSocket();
#ifdef WIN32
	void CreateSocketFromWin32();
#endif

#ifdef LINUX
	void CreateSocketFromLinux();
#endif

private:
	int m_Socket;		//�׽���

};

