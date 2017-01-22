#ifndef ECHO_H__
#define ECHO_H__

#include <muduo/net/TcpServer.h>

class EchoServer
{
public:
	EchoServer(muduo::net::EventLoop *loop, const muduo::net::InetAddresss &listenAddr);
	void Start();	// call _server.Start();

private:
	void OnConnection(const muduo::net::TcpConnectionPtr &conn);
	void OnMessage(const muduo::net::TcpConnectionPtr &conn, 
			muduo::net::Buffer *buf, muduo::TimeStamp time);

private:
	muduo::net::TcpServer _server;

};

#endif /* ECHO_H_ */_
