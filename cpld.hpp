#pragma once

#include "handler.hpp"

#include <ipmid/api.h>

namespace google
{
namespace ipmi
{

// Given a cpld identifier, return a version if available.
ipmi_ret_t cpldVersion(const uint8_t* reqBuf, uint8_t* replyBuf,
                       size_t* dataLen, const HandlerInterface* handler);

} // namespace ipmi
} // namespace google
