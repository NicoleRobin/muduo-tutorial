#include "time.h"

#include <muduo/base/Logging.h>
#include <muduo/net/EventLoop.h>

using namespace muduo;
using namespace muduo::net;

int main(int argc, char **argv)
{
	LOG_INFO << "pid = " << getpid() << " port = " << 2037;
	EventLoop loop;
	InetAddress listenAddr(2037);
	TimeServer server(&loop, listenAddr);
	server.start();
	loop.loop();

	return 0;
}
