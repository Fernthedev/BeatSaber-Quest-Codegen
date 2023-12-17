#pragma once
#include "UnityEngine/Animations/zzzz__AnimationHumanStream_def.hpp"
constexpr void UnityEngine::Animations::AnimationHumanStream::__set_stream(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& UnityEngine::Animations::AnimationHumanStream::__get_stream()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& UnityEngine::Animations::AnimationHumanStream::__get_stream() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "stream", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Animations::AnimationHumanStream::AnimationHumanStream(::cordl_internals::intptr_t  stream) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->stream = stream;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
