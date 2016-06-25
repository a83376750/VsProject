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
};

