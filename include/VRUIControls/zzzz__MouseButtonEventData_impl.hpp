#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData.PressedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::PressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2eb41a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(),
                            "PressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData.ReleasedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::ReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2eb41b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(),
                            "ReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseButtonEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::MouseButtonEventData::*)()>(&::VRUIControls::MouseButtonEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb41cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void VRUIControls::MouseButtonEventData::__set_buttonState(::UnityEngine::EventSystems::__PointerEventData__FramePressState  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::__PointerEventData__FramePressState, 0x10>(this, std::forward<::UnityEngine::EventSystems::__PointerEventData__FramePressState>(value));
}
constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState& VRUIControls::MouseButtonEventData::__get_buttonState()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::__PointerEventData__FramePressState, 0x10>(this);
}
constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState const& VRUIControls::MouseButtonEventData::__get_buttonState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::__PointerEventData__FramePressState, 0x10>(this);
}
constexpr void VRUIControls::MouseButtonEventData::__set_buttonData(::UnityEngine::EventSystems::PointerEventData*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x18>(this, std::forward<::UnityEngine::EventSystems::PointerEventData*>(value));
}
constexpr ::UnityEngine::EventSystems::PointerEventData* VRUIControls::MouseButtonEventData::__get_buttonData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> VRUIControls::MouseButtonEventData::__get_buttonData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x18>(this);
}
inline bool VRUIControls::MouseButtonEventData::PressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(),
                            "PressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool VRUIControls::MouseButtonEventData::ReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(),
                            "ReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::VRUIControls::MouseButtonEventData* VRUIControls::MouseButtonEventData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::VRUIControls::MouseButtonEventData*>());
}
inline void VRUIControls::MouseButtonEventData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseButtonEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
