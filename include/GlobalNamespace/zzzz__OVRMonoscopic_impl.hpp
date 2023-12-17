#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMonoscopic_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMonoscopic.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMonoscopic::*)()>(&::GlobalNamespace::OVRMonoscopic::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x27b469c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRMonoscopic._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMonoscopic::*)()>(&::GlobalNamespace::OVRMonoscopic::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27b478c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRMonoscopic::__set_toggleButton(::GlobalNamespace::__OVRInput__RawButton  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this, std::forward<::GlobalNamespace::__OVRInput__RawButton>(value));
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::OVRMonoscopic::__get_toggleButton()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this);
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::OVRMonoscopic::__get_toggleButton() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRInput__RawButton, 0x18>(this);
}
constexpr void GlobalNamespace::OVRMonoscopic::__set_monoscopic(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::OVRMonoscopic::__get_monoscopic()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::OVRMonoscopic::__get_monoscopic() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
inline void GlobalNamespace::OVRMonoscopic::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRMonoscopic* GlobalNamespace::OVRMonoscopic::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRMonoscopic*>());
}
inline void GlobalNamespace::OVRMonoscopic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMonoscopic*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
