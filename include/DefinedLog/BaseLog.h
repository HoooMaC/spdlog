#pragma once

//#define ACTIVATE_LOGGING
#ifdef ACTIVATE_LOGGING

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

#include "spdlog/fmt/fmt.h"
#include "spdlog/fmt/ostr.h"

class BaseLog
{
public:
    inline std::shared_ptr<spdlog::logger>& GetLogger()
    {
        return m_Logger;
    }

protected:
    BaseLog(const std::string& name, const std::string& pattern = "%^[%n] %v %$");
    std::shared_ptr<spdlog::logger> m_Logger;
};
#endif // ACTIVATE_LOGGING
