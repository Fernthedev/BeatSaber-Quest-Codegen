#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GetXPlatformAccessTokenRequestSteam_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetXPlatformAccessTokenRequestSteam._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GetXPlatformAccessTokenRequestSteam::*)(::StringW, int64_t)>(&::GlobalNamespace::GetXPlatformAccessTokenRequestSteam::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2800184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__set_platformToken(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__get_platformToken()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__get_platformToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__set_platformUserId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__get_platformUserId()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& GlobalNamespace::GetXPlatformAccessTokenRequestSteam::__get_platformUserId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSteam* GlobalNamespace::GetXPlatformAccessTokenRequestSteam::New_ctor(::StringW  platformToken, int64_t  platformUserId)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*>(platformToken, platformUserId));
}
inline void GlobalNamespace::GetXPlatformAccessTokenRequestSteam::_ctor(::StringW  platformToken, int64_t  platformUserId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, platformToken, platformUserId);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
