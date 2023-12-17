#pragma once
#include "Oculus/Platform/zzzz__ChallengeViewerFilter_def.hpp"
constexpr void Oculus::Platform::ChallengeViewerFilter::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::ChallengeViewerFilter::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Oculus::Platform::ChallengeViewerFilter::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ChallengeViewerFilter::ChallengeViewerFilter(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::AllVisible{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::Participating{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::Invited{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::ChallengeViewerFilter  Oculus::Platform::ChallengeViewerFilter::ParticipatingOrInvited{static_cast<int32_t>(0x4)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
