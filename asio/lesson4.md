# Lesson 4

Synchronous approach
~~~c++
std::size_t bytes_transferred = socket.receive_from(buffer, sender);
std::cout << "Message is received, message size is " << byyes_transferred;
~~~

Asychronous version of IO functions in Boost. 
~~~c++
socket.async_receive_from(buffer, sender, [&] (boost::system::error_code error, std::size_t bytes_transferred) {
    std::cout << "Message is received, message size is " << bytes_transferred;
})
~~~
s