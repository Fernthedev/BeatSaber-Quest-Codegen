#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SystemVoipState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SystemVoipState::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::SystemVoipState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2708f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SystemVoipState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::SystemVoipState::__set_MicrophoneMuted(::Oculus::Platform::VoipMuteState  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::VoipMuteState, 0x10>(this, std::forward<::Oculus::Platform::VoipMuteState>(value));
}
constexpr ::Oculus::Platform::VoipMuteState& Oculus::Platform::Models::SystemVoipState::__get_MicrophoneMuted()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::VoipMuteState, 0x10>(this);
}
constexpr ::Oculus::Platform::VoipMuteState const& Oculus::Platform::Models::SystemVoipState::__get_MicrophoneMuted() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::VoipMuteState, 0x10>(this);
}
constexpr void Oculus::Platform::Models::SystemVoipState::__set_Status(::Oculus::Platform::SystemVoipStatus  value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::SystemVoipStatus, 0x14>(this, std::forward<::Oculus::Platform::SystemVoipStatus>(value));
}
constexpr ::Oculus::Platform::SystemVoipStatus& Oculus::Platform::Models::SystemVoipState::__get_Status()  {
return ::cordl_internals::getInstanceField<::Oculus::Platform::SystemVoipStatus, 0x14>(this);
}
constexpr ::Oculus::Platform::SystemVoipStatus const& Oculus::Platform::Models::SystemVoipState::__get_Status() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::SystemVoipStatus, 0x14>(this);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::Models::SystemVoipState::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::SystemVoipState*>(o));
}
inline void Oculus::Platform::Models::SystemVoipState::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SystemVoipState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
