#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
constexpr void GlobalNamespace::__UserInfo__Platform::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__UserInfo__Platform::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__UserInfo__Platform::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UserInfo__Platform::__UserInfo__Platform(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__UserInfo__Platform  GlobalNamespace::__UserInfo__Platform::Test{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__UserInfo__Platform  GlobalNamespace::__UserInfo__Platform::Steam{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__UserInfo__Platform  GlobalNamespace::__UserInfo__Platform::Oculus{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__UserInfo__Platform  GlobalNamespace::__UserInfo__Platform::PS4{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__UserInfo__Platform  GlobalNamespace::__UserInfo__Platform::PS5{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::UserInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UserInfo::*)(::GlobalNamespace::__UserInfo__Platform, ::StringW, ::StringW)>(&::GlobalNamespace::UserInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27fe0dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UserInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::UserInfo::__set_platform(::GlobalNamespace::__UserInfo__Platform  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__UserInfo__Platform, 0x10>(this, std::forward<::GlobalNamespace::__UserInfo__Platform>(value));
}
constexpr ::GlobalNamespace::__UserInfo__Platform& GlobalNamespace::UserInfo::__get_platform()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UserInfo__Platform, 0x10>(this);
}
constexpr ::GlobalNamespace::__UserInfo__Platform const& GlobalNamespace::UserInfo::__get_platform() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__UserInfo__Platform, 0x10>(this);
}
constexpr void GlobalNamespace::UserInfo::__set_platformUserId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::UserInfo::__get_platformUserId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::UserInfo::__get_platformUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::UserInfo::__set_userName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::UserInfo::__get_userName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::UserInfo::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline ::GlobalNamespace::UserInfo* GlobalNamespace::UserInfo::New_ctor(::GlobalNamespace::__UserInfo__Platform  platform, ::StringW  platformUserId, ::StringW  userName)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::UserInfo*>(platform, platformUserId, userName));
}
inline void GlobalNamespace::UserInfo::_ctor(::GlobalNamespace::__UserInfo__Platform  platform, ::StringW  platformUserId, ::StringW  userName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UserInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__UserInfo__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, platform, platformUserId, userName);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
