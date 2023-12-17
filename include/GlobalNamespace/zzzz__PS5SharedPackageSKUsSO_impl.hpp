#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5PublisherSKUSettingsSO_def.hpp"
constexpr void GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::__PS5SharedPackageSKUsSO__BuildType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType  GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::Application{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType  GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType::RemasterPatch{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion.get_masterVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(&::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_masterVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(),
                            "get_masterVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion.get_contentVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(&::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_contentVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(),
                            "get_contentVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(&::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23683a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__set__masterVersion(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__get__masterVersion()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__get__masterVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__set__contentVersion(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__get__contentVersion()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::__get__contentVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::StringW GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_masterVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(),
                            "get_masterVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::get_contentVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(),
                            "get_contentVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>());
}
inline void GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_availableSKUs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*> (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::get_availableSKUs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236833c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_availableSKUs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_conceptId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::get_conceptId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_conceptId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_buildType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::get_buildType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236834c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_buildType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_buildVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::get_buildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_buildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.get_latestBuildVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::get_latestBuildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236835c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_latestBuildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO.GetPrimarySKU
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PS5PublisherSKUSettingsSO* (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::GetPrimarySKU)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2368364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "GetPrimarySKU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5SharedPackageSKUsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&::GlobalNamespace::PS5SharedPackageSKUsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__availableSKUs(::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>& GlobalNamespace::PS5SharedPackageSKUsSO::__get__availableSKUs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*> const& GlobalNamespace::PS5SharedPackageSKUsSO::__get__availableSKUs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__conceptId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PS5SharedPackageSKUsSO::__get__conceptId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::PS5SharedPackageSKUsSO::__get__conceptId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__buildType(::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, 0x28>(this, std::forward<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType>(value));
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType& GlobalNamespace::PS5SharedPackageSKUsSO::__get__buildType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, 0x28>(this);
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType const& GlobalNamespace::PS5SharedPackageSKUsSO::__get__buildType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, 0x28>(this);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__buildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, 0x30>(this, std::forward<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>(value));
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::PS5SharedPackageSKUsSO::__get__buildVersion()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> GlobalNamespace::PS5SharedPackageSKUsSO::__get__buildVersion() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, 0x30>(this);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__latestBuildVersion(::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, 0x38>(this, std::forward<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*>(value));
}
constexpr ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::PS5SharedPackageSKUsSO::__get__latestBuildVersion()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*> GlobalNamespace::PS5SharedPackageSKUsSO::__get__latestBuildVersion() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, 0x38>(this);
}
inline ::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*> GlobalNamespace::PS5SharedPackageSKUsSO::get_availableSKUs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_availableSKUs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::PS5PublisherSKUSettingsSO*,::Array<::GlobalNamespace::PS5PublisherSKUSettingsSO*>*>, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::PS5SharedPackageSKUsSO::get_conceptId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_conceptId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType GlobalNamespace::PS5SharedPackageSKUsSO::get_buildType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_buildType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS5SharedPackageSKUsSO__BuildType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::PS5SharedPackageSKUsSO::get_buildVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_buildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion* GlobalNamespace::PS5SharedPackageSKUsSO::get_latestBuildVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "get_latestBuildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PS5SharedPackageSKUsSO__PS5BuildVersion*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PS5PublisherSKUSettingsSO* GlobalNamespace::PS5SharedPackageSKUsSO::GetPrimarySKU()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            "GetPrimarySKU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PS5PublisherSKUSettingsSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PS5SharedPackageSKUsSO* GlobalNamespace::PS5SharedPackageSKUsSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PS5SharedPackageSKUsSO*>());
}
inline void GlobalNamespace::PS5SharedPackageSKUsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5SharedPackageSKUsSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
