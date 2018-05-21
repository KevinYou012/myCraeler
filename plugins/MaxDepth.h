

#ifndef _MAXDEPTH_H
#define _MAXDEPTH_H

#include "Plugin.h"

/// @brief 最大深度插件
class MaxDepth : public Plugin {
private:
	/// @brief 插件初始化
	/// @retval true  成功
	/// @retval false 失败
	/// @note 根据最大深度插件的功能实现基类中的虚函数
	bool init (
		WebCrawler* app ///< [in,out] 应用程序对象
	);
	/// @brief 插件处理
	/// @retval true  成功
	/// @retval false 失败
	/// @note 根据最大深度插件的功能实现基类中的虚函数
	bool handler (
		void* arg ///< [in,out] 插件参数
	);
};

#endif // _MAXDEPTH_H
