#ifndef HPP_003_PKT_C2S_QueryStatusReq_HPP
#define HPP_003_PKT_C2S_QueryStatusReq_HPP
#include "base.hpp"

#pragma pack(push, 1)
struct PKT_C2S_QueryStatusReq_s
        : DefaultPacket<PKT_C2S_QueryStatusReq, CHANNEL_GENERIC_APP_TO_SERVER>
{
};
#pragma pack(pop)

#endif
