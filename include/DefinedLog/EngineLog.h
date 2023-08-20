#pragma once
#include "BaseLog.h"

#ifdef ACTIVATE_LOGGING

class EngineLog : public BaseLog
{
public:
    EngineLog()
        : BaseLog("Engine") {}
};


inline EngineLog engineLog;

#define ENGINE_TRACE(...) engineLog.GetLogger()->trace(##__VA_ARGS__)
#define ENGINE_CRITICAL(...) engineLog.GetLogger()->critical(##__VA_ARGS__)
#define ENGINE_INFO(...) engineLog.GetLogger()->info(##__VA_ARGS__)
#define ENGINE_DEBUG(...) engineLog.GetLogger()->debug(##__VA_ARGS__)
#define ENGINE_WARN(...) engineLog.GetLogger()->warn(##__VA_ARGS__)
#define ENGINE_ERROR(...) engineLog.GetLogger()->error(##__VA_ARGS__)

#else

#define ENGINE_TRACE(...)
#define ENGINE_CRITICAL(...)
#define ENGINE_INFO(...)
#define ENGINE_DEBUG(...)
#define ENGINE_WARN(...) 
#define ENGINE_ERROR(...)

#endif // ACTIVATE_LOGGING