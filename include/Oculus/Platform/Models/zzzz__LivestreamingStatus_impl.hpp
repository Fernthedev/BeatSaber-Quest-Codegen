#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingStatus::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::LivestreamingStatus::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2707304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStatus*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_CommentsVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_CommentsVisible()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_CommentsVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_IsPaused(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_IsPaused()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_IsPaused() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_LivestreamingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_LivestreamingType(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingType()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_MicEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_MicEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_MicEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::Models::LivestreamingStatus::New_ctor(::cordl_internals::intptr_t  o)  {
return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LivestreamingStatus*>(o));
}
inline void Oculus::Platform::Models::LivestreamingStatus::_ctor(::cordl_internals::intptr_t  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStatus*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, o);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
