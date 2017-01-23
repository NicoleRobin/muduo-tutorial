#ifndef ECHO_H__
#define ECHO_H__

#include <muduo/net/TcpServer.h>

class EchoServer
{
public:
	EchoServer(muduo::net::EventLoop *loop, const muduo::net::InetAddress &listenAddr);
	void start();	// call _server.start();

private:
	void onConnection(const muduo::net::TcpConnectionPtr &conn);
	void onMessage(const muduo::net::TcpConnectionPtr &conn, 
			muduo::net::Buffer *buf, muduo::Timestamp time);

private:
	muduo::net::TcpServer server_;

};

#endif /* ECHO_H_ */
