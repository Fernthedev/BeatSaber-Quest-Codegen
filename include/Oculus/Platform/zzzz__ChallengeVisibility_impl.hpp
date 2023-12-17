#pragma once
#include "Oculus/Platform/zzzz__ChallengeVisibility_def.hpp"
constexpr void Oculus::Platform::ChallengeVisibility::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::ChallengeVisibility::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::ChallengeVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ChallengeVisibility::ChallengeVisibility(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::InviteOnly{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::Public{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::ChallengeVisibility  Oculus::Platform::ChallengeVisibility::Private{static_cast<int32_t>(0x3)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
