#pragma once
#include <string>

namespace std
{
	class ServerException : public exception
	{
	public:
		ServerException();
		ServerException(const string& msg);
		~ServerException();

		const char* what()const throw();
	private:
		string s_Msg;
	};

	class DBException : public ServerException
	{
	public:
		DBException();
		DBException(const string& msg);
		~DBException();
	};

	class SocketException : public ServerException
	{
	public:
		SocketException();
		SocketException(const string& msg);
		~SocketException();
	};

	class ThreadException : public ServerException
	{
	public:
		ThreadException();
		ThreadException(const string& msg);
		~ThreadException();
	};
}