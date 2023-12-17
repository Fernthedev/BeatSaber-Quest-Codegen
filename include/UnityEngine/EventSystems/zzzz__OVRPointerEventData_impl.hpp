#pragma once
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPointerEventData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPointerEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::OVRPointerEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(&::UnityEngine::EventSystems::OVRPointerEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27fa218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::OVRPointerEventData.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::OVRPointerEventData::*)()>(&::UnityEngine::EventSystems::OVRPointerEventData::ToString)> {
  constexpr static std::size_t size = 0x13b4;
  constexpr static std::size_t addrs = 0x27fc304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::OVRPointerEventData::__set_worldSpaceRay(::UnityEngine::Ray  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Ray, 0x160>(this, std::forward<::UnityEngine::Ray>(value));
}
constexpr ::UnityEngine::Ray& UnityEngine::EventSystems::OVRPointerEventData::__get_worldSpaceRay()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Ray, 0x160>(this);
}
constexpr ::UnityEngine::Ray const& UnityEngine::EventSystems::OVRPointerEventData::__get_worldSpaceRay() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Ray, 0x160>(this);
}
constexpr void UnityEngine::EventSystems::OVRPointerEventData::__set_swipeStart(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x178>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::EventSystems::OVRPointerEventData::__get_swipeStart()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x178>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::EventSystems::OVRPointerEventData::__get_swipeStart() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x178>(this);
}
inline ::UnityEngine::EventSystems::OVRPointerEventData* UnityEngine::EventSystems::OVRPointerEventData::New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::OVRPointerEventData*>(eventSystem));
}
inline void UnityEngine::EventSystems::OVRPointerEventData::_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventSystem);
}
inline ::StringW UnityEngine::EventSystems::OVRPointerEventData::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::OVRPointerEventData*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
