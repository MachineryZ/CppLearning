# Lesson 2

TCP and UDP

Transmission Control Protocal TCP
1. tcp 连接差不多就是读取一个 data，然后写入一些 data，然后结束
2. 当处理文件时，可以询问文件大小，但是 tcp connection 不行
3. 在文件中可以使用指针，但是在 tcp connection 中不行。

User Datagram Protocal UDP
1. udp 是整块的 数据连接
2. udp 不需要 socket，只用接受和传输数据