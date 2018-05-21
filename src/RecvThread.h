

#ifndef _RECVTHREAD_H
#define _RECVTHREAD_H

#include "Thread.h"

class Socket;

/// @brief 接收线程
class RecvThread : public Thread {
public:
	/// @brief 构造器
	RecvThread (
		Socket* socket ///< [in] 套接字
	);
	/// @brief 析构器
	~RecvThread (void);

private:
	/// @brief 线程处理函数
	/// @note 根据接收线程的任务实现基类中的纯虚函数
	void* run (void);

	/// @brief 套接字
	Socket* m_socket;
};

#endif // _RECVTHREAD_H
