#include "echo.h"

EchoServer::EchoServer(muduo::net::EventLoop *loop, 
		muduo::net:InetAddress &listenAddr)
{

}

void EchoServer::Start()
{
	_server.Start();
}

void EchoServer::OnConnection()
{
}

void EchoServer::OnMessage()
{
	
}
