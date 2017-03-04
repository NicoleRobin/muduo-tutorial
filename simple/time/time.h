#ifndef MUDUO_EXAMPLES_SIMPLE_TIME_TIME_H__
#define MUDUO_EXAMPLES_SIMPLE_TIME_TIME_H__

#include <muduo/net/TcpServer.h>

// RFC 868
class TimeServer
{
public:
	TimeServer();
	void start();

private:
	void onConnection(const muduo::net::TcpConnectionPtr &conn);
	void onMessage(const muduo::net::TcpConnectionPtr &conn,
		muduo::net::Buffer *buf,
		muduo::Timestamp time);

private:
	muduo::net::TcpServer server_;
};

#endif /* MUDUO_EXAMPLES_SIMPLE_TIME_TIME_H__ */