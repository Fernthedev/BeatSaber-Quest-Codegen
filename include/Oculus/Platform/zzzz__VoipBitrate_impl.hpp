#pragma once
#include "Oculus/Platform/zzzz__VoipBitrate_def.hpp"
constexpr void Oculus::Platform::VoipBitrate::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::VoipBitrate::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::VoipBitrate::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipBitrate::VoipBitrate(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B16000{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B24000{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B32000{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B64000{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B96000{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B128000{static_cast<int32_t>(0x6)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
