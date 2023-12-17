#pragma once
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
constexpr void LIV::SDK::Unity::TEXTURE_COLOR_SPACE::__set_value__(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& LIV::SDK::Unity::TEXTURE_COLOR_SPACE::__get_value__()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& LIV::SDK::Unity::TEXTURE_COLOR_SPACE::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE::TEXTURE_COLOR_SPACE(uint32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::UNDEFINED{static_cast<uint32_t>(0x20100u)};
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::LINEAR{static_cast<uint32_t>(0x1000201u)};
constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  LIV::SDK::Unity::TEXTURE_COLOR_SPACE::SRGB{static_cast<uint32_t>(0x2010002u)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
