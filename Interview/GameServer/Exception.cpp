#include "Exception.h"

/************************************************************************/
/* 服务器错误异常                                              */
/************************************************************************/
std::ServerException::ServerException() : s_Msg("Error Server")
{

}

std::ServerException::ServerException(const string& msg) : s_Msg("Error Server" + msg)
{

}

std::ServerException::~ServerException()
{

}

const char* std::ServerException::what() const throw()
{
	return s_Msg.c_str();
}



/************************************************************************/
/*     数据库错误异常                           */
/************************************************************************/
std::DBException::DBException() : ServerException("DB Error")
{

}

std::DBException::~DBException()
{

}

std::DBException::DBException(const string& msg) : ServerException(msg)
{

}


/************************************************************************/
/*     网络错误异常                                               */
/************************************************************************/
std::SocketException::SocketException()
{

}

std::SocketException::~SocketException()
{

}

std::SocketException::SocketException(const string& msg)
{

}


/************************************************************************/
/*  线程错误异常                                */
/************************************************************************/

std::ThreadException::ThreadException()
{

}

std::ThreadException::~ThreadException()
{

}

std::ThreadException::ThreadException(const string& msg)
{

}
