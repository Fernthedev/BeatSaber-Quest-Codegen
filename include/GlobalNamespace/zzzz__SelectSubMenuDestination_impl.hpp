#pragma once
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
constexpr void GlobalNamespace::__SelectSubMenuDestination__Destination::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SelectSubMenuDestination__Destination::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__SelectSubMenuDestination__Destination::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination::__SelectSubMenuDestination__Destination(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination  GlobalNamespace::__SelectSubMenuDestination__Destination::MainMenu{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination  GlobalNamespace::__SelectSubMenuDestination__Destination::Campaign{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination  GlobalNamespace::__SelectSubMenuDestination__Destination::SoloFreePlay{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination  GlobalNamespace::__SelectSubMenuDestination__Destination::PartyFreePlay{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination  GlobalNamespace::__SelectSubMenuDestination__Destination::Settings{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination  GlobalNamespace::__SelectSubMenuDestination__Destination::Tutorial{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination  GlobalNamespace::__SelectSubMenuDestination__Destination::Multiplayer{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::GlobalNamespace::SelectSubMenuDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectSubMenuDestination::*)(::GlobalNamespace::__SelectSubMenuDestination__Destination)>(&::GlobalNamespace::SelectSubMenuDestination::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x223d0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectSubMenuDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectSubMenuDestination__Destination>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectSubMenuDestination::__set_menuDestination(::GlobalNamespace::__SelectSubMenuDestination__Destination  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SelectSubMenuDestination__Destination, 0x10>(this, std::forward<::GlobalNamespace::__SelectSubMenuDestination__Destination>(value));
}
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination& GlobalNamespace::SelectSubMenuDestination::__get_menuDestination()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectSubMenuDestination__Destination, 0x10>(this);
}
constexpr ::GlobalNamespace::__SelectSubMenuDestination__Destination const& GlobalNamespace::SelectSubMenuDestination::__get_menuDestination() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SelectSubMenuDestination__Destination, 0x10>(this);
}
inline ::GlobalNamespace::SelectSubMenuDestination* GlobalNamespace::SelectSubMenuDestination::New_ctor(::GlobalNamespace::__SelectSubMenuDestination__Destination  menuDestination)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectSubMenuDestination*>(menuDestination));
}
inline void GlobalNamespace::SelectSubMenuDestination::_ctor(::GlobalNamespace::__SelectSubMenuDestination__Destination  menuDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectSubMenuDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectSubMenuDestination__Destination>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, menuDestination);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
