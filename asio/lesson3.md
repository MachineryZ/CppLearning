# Lesson 3
https://dens.website/tutorials/cpp-asio/simplest-server


UDP echo server
~~~c++
#include <boost/asio.hpp>

int main() {
    std::uint16_t port = 15001;

    boost::asio::io_context io_context;
    boost::asio::ip::udp::endpoint receiver(boost::asio::ip::udp::v4(), port);
    boost::asio::ip::udp::socket socket(io_context, receiver);

    for(;;) {
        char buffer[65536];
        boost::asio::ip::udp::endpoint sender;
        std::size_t bytes_tansferred = socket.reveive_from(boost::asio::buffer(buffer), sender);
        socket.send_to(boost::asio::buffer(buffer, bytes_))
    }
}
~~~

1. boost::asio::io_context 是一个 io service provider，简单的可以认为就是一个 调度任务的执行器
2. boost::asio::ip::udp::endpoint 是一堆 ip address 和 port
3. boost::asio::ip::udp::socket 是一个 socket
4. boost::asio::ip::udp::v4 返回一个 udp network 接口的实例
5. boost::asio::buffer 是一个缓存区，pointer + buffer size，但是没有内存分配，这里是 char array
6. socket::receive_from 等待一个 udp packet，填充 buffer 用接受到的文件，填充 sender 用收到的消息，这个 sender 也是一对 ip 地址和端口
7. socket::send_to 发送一个 udp packet 用 buffer 中的 data，