#include <memory>
#include <cstdarg>

#include "BaseLog.h"

#ifdef ACTIVATE_LOGGING

BaseLog::BaseLog(const std::string& name, const std::string& pattern)
{
    m_Logger = spdlog::stdout_color_mt(name);
    m_Logger->set_level(spdlog::level::trace);
    m_Logger->set_pattern(pattern);
}

#endif // ACTIVATE_LOGGING
