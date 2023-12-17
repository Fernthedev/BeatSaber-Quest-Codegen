#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/Oculus/zzzz__Development_def.hpp"
#include "Unity/XR/Oculus/zzzz__Development_def.hpp"
constexpr void Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache::__Development__UserDeveloperModeSettingCache(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache  Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache::NoUserSettingCached{static_cast<int32_t>(0x0)};
constexpr ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache  Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache::UserSettingFalse{static_cast<int32_t>(0x1)};
constexpr ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache  Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache::UserSettingTrue{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Unity::XR::Oculus::Development.TrySetDeveloperMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::Development::TrySetDeveloperMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c77668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get(),
                            "TrySetDeveloperMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Development.OverrideDeveloperModeStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::Development::OverrideDeveloperModeStart)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c776c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get(),
                            "OverrideDeveloperModeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Development.OverrideDeveloperModeStop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::Development::OverrideDeveloperModeStop)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c77794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get(),
                            "OverrideDeveloperModeStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void Unity::XR::Oculus::Development::setStaticF_s_CachedMode(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache  value)  {
::cordl_internals::setStaticField<::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache, "s_CachedMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get>(std::forward<::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache>(value));
}
inline ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache Unity::XR::Oculus::Development::getStaticF_s_CachedMode()  {
return ::cordl_internals::getStaticField<::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache, "s_CachedMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get>();
}
inline void Unity::XR::Oculus::Development::TrySetDeveloperMode(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get(),
                            "TrySetDeveloperMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, active);
}
inline void Unity::XR::Oculus::Development::OverrideDeveloperModeStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get(),
                            "OverrideDeveloperModeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::XR::Oculus::Development::OverrideDeveloperModeStop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development*>::get(),
                            "OverrideDeveloperModeStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
