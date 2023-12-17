#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.get_token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::XPlatformAccessTokenData::*)()>(&::GlobalNamespace::XPlatformAccessTokenData::get_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "get_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.set_token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::StringW)>(&::GlobalNamespace::XPlatformAccessTokenData::set_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "set_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.get_platformEnvironment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlatformEnvironment (::GlobalNamespace::XPlatformAccessTokenData::*)()>(&::GlobalNamespace::XPlatformAccessTokenData::get_platformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "get_platformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.set_platformEnvironment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::XPlatformAccessTokenData::set_platformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "set_platformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::XPlatformAccessTokenData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe51d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::XPlatformAccessTokenData::__set__token_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::XPlatformAccessTokenData::__get__token_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::XPlatformAccessTokenData::__get__token_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::XPlatformAccessTokenData::__set__platformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformEnvironment, 0x18>(this, std::forward<::GlobalNamespace::PlatformEnvironment>(value));
}
constexpr ::GlobalNamespace::PlatformEnvironment& GlobalNamespace::XPlatformAccessTokenData::__get__platformEnvironment_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformEnvironment, 0x18>(this);
}
constexpr ::GlobalNamespace::PlatformEnvironment const& GlobalNamespace::XPlatformAccessTokenData::__get__platformEnvironment_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformEnvironment, 0x18>(this);
}
inline ::StringW GlobalNamespace::XPlatformAccessTokenData::get_token()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "get_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::XPlatformAccessTokenData::set_token(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "set_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::PlatformEnvironment GlobalNamespace::XPlatformAccessTokenData::get_platformEnvironment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "get_platformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlatformEnvironment, false>(*this, ___internal_method);
}
inline void GlobalNamespace::XPlatformAccessTokenData::set_platformEnvironment(::GlobalNamespace::PlatformEnvironment  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            "set_platformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::XPlatformAccessTokenData* GlobalNamespace::XPlatformAccessTokenData::New_ctor(::StringW  token, ::GlobalNamespace::PlatformEnvironment  platformEnvironment)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::XPlatformAccessTokenData*>(token, platformEnvironment));
}
inline void GlobalNamespace::XPlatformAccessTokenData::_ctor(::StringW  token, ::GlobalNamespace::PlatformEnvironment  platformEnvironment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, token, platformEnvironment);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
