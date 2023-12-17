#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
constexpr void GlobalNamespace::__AppInitSetupData__RunMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AppInitSetupData__RunMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__AppInitSetupData__RunMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode::__AppInitSetupData__RunMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode  GlobalNamespace::__AppInitSetupData__RunMode::Game{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode  GlobalNamespace::__AppInitSetupData__RunMode::PlayTest{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::AppInitSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitSetupData::*)()>(&::GlobalNamespace::AppInitSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe1eac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AppInitSetupData::__set_runMode(::GlobalNamespace::__AppInitSetupData__RunMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__AppInitSetupData__RunMode, 0x10>(this, std::forward<::GlobalNamespace::__AppInitSetupData__RunMode>(value));
}
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode& GlobalNamespace::AppInitSetupData::__get_runMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AppInitSetupData__RunMode, 0x10>(this);
}
constexpr ::GlobalNamespace::__AppInitSetupData__RunMode const& GlobalNamespace::AppInitSetupData::__get_runMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AppInitSetupData__RunMode, 0x10>(this);
}
inline ::GlobalNamespace::AppInitSetupData* GlobalNamespace::AppInitSetupData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AppInitSetupData*>());
}
inline void GlobalNamespace::AppInitSetupData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
