#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyVersion_def.hpp"
#include "GlobalNamespace/zzzz__SonyVersion_def.hpp"
constexpr void GlobalNamespace::__SonyVersion__VersionFormat::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SonyVersion__VersionFormat::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SonyVersion__VersionFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SonyVersion__VersionFormat::__SonyVersion__VersionFormat(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__SonyVersion__VersionFormat  GlobalNamespace::__SonyVersion__VersionFormat::FullLong{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__SonyVersion__VersionFormat  GlobalNamespace::__SonyVersion__VersionFormat::Long{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__SonyVersion__VersionFormat  GlobalNamespace::__SonyVersion__VersionFormat::FullShort{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__SonyVersion__VersionFormat  GlobalNamespace::__SonyVersion__VersionFormat::Short{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.get_majorVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::get_majorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2369f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "get_majorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.get_minorVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::get_minorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2369f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "get_minorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyVersion::*)(uint32_t, uint32_t)>(&::GlobalNamespace::SonyVersion::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2369f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.GetFromString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SonyVersion* (*)(::StringW)>(&::GlobalNamespace::SonyVersion::GetFromString)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2369f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "GetFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.IsVersionFormatValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::SonyVersion::IsVersionFormatValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x236a4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "IsVersionFormatValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyVersion::*)(::GlobalNamespace::__SonyVersion__VersionFormat)>(&::GlobalNamespace::SonyVersion::Get)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x236a578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SonyVersion__VersionFormat>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SonyVersion::__set__majorVersion(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::SonyVersion::__get__majorVersion()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr uint32_t const& GlobalNamespace::SonyVersion::__get__majorVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this);
}
constexpr void GlobalNamespace::SonyVersion::__set__minorVersion(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& GlobalNamespace::SonyVersion::__get__minorVersion()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this);
}
constexpr uint32_t const& GlobalNamespace::SonyVersion::__get__minorVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this);
}
inline uint32_t GlobalNamespace::SonyVersion::get_majorVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "get_majorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline uint32_t GlobalNamespace::SonyVersion::get_minorVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "get_minorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SonyVersion* GlobalNamespace::SonyVersion::New_ctor(uint32_t  majorVersion, uint32_t  minorVersion)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SonyVersion*>(majorVersion, minorVersion));
}
inline void GlobalNamespace::SonyVersion::_ctor(uint32_t  majorVersion, uint32_t  minorVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, majorVersion, minorVersion);
}
inline ::GlobalNamespace::SonyVersion* GlobalNamespace::SonyVersion::GetFromString(::StringW  versionString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "GetFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SonyVersion*, false>(nullptr, ___internal_method, versionString);
}
inline bool GlobalNamespace::SonyVersion::IsVersionFormatValid(::StringW  versionString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "IsVersionFormatValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, versionString);
}
inline ::StringW GlobalNamespace::SonyVersion::Get(::GlobalNamespace::__SonyVersion__VersionFormat  format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SonyVersion__VersionFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, format);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
