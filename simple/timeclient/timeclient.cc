#include <muduo/base/Logging.h>
#include <muduo/net/Endian.h>
#include <muduo/net/EventLoop.h>
#include <muduo/net/InetAddress.h>
#include <muduo/net/TcpClient.h>

#include <boost/bind.hpp>

#include <utility>

#include <stdio.h>
#include <uinstd.h>

using namespace muduo;
using namespace muduo::net;

class TimeClient : boost::noncopyable
{
public:
	TimeClient();
	void Connect()
	{
		client_.connect();
	}

private:
	void onConnection(const TcpConnectionPtr &conn)
	{

	}

private:
	EventLoop *loop_;
	TcpClient client_;
};

int main(int argc, char* argv[])
{
	LOG_INFO << "pid = " << getpid();
	if (argc > 1)
	{
		EventLoop loop;
		InetAddress serverAddr(argv[1], 2037);

		TimeClient timeClient(&loop, serverAddr);
		timeClient.connect();
		loop.loop();
	}
	else
	{
		printf("Usage: %s host_ip\n", argv[0]);
	}

	return 0;
}
