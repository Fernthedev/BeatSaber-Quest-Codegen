#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResetOrientation_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRResetOrientation.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRResetOrientation::*)()>(&::GlobalNamespace::OVRResetOrientation::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27baa44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResetOrientation*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRResetOrientation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRResetOrientation::*)()>(&::GlobalNamespace::OVRResetOrientation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27bab24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResetOrientation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRResetOrientation::__set_resetButton(::GlobalNamespace::__OVRInput__RawButton  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this, std::forward<::GlobalNamespace::__OVRInput__RawButton>(value));
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::OVRResetOrientation::__get_resetButton()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this);
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::OVRResetOrientation::__get_resetButton() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this);
}
inline void GlobalNamespace::OVRResetOrientation::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResetOrientation*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRResetOrientation* GlobalNamespace::OVRResetOrientation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRResetOrientation*>());
}
inline void GlobalNamespace::OVRResetOrientation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRResetOrientation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
