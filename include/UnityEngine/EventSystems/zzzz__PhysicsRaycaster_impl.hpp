#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2da1350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::*)()>(&::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da1390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr  UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
inline void UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::setStaticF_instance(::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*  value)  {
::cordl_internals::setStaticField<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get>(std::forward<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>(value));
}
inline ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get>();
}
inline int32_t UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::Compare(::UnityEngine::RaycastHit  x, ::UnityEngine::RaycastHit  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, x, y);
}
inline ::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer* UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>());
}
inline void UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PhysicsRaycaster__RaycastHitComparer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2da0450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_eventCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2da0df4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_depth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_depth)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2da0e98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_finalEventMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2da0d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_finalEventMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_eventMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_eventMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.set_eventMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(::UnityEngine::LayerMask)>(&::UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "set_eventMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.get_maxRayIntersections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::EventSystems::PhysicsRaycaster::*)()>(&::UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_maxRayIntersections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.set_maxRayIntersections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(int32_t)>(&::UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da0f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "set_maxRayIntersections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.ComputeRayAndDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::PhysicsRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ByRef<::UnityEngine::Ray>, ByRef<int32_t>, ByRef<float_t>)>(&::UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2da0a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "ComputeRayAndDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PhysicsRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PhysicsRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::PhysicsRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2da0f7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_EventCamera(::UnityEngine::Camera*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Camera*, 0x20>(this, std::forward<::UnityEngine::Camera*>(value));
}
constexpr ::UnityEngine::Camera* UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventCamera()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventCamera() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Camera*, 0x20>(this);
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_EventMask(::UnityEngine::LayerMask  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x28>(this, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x28>(this);
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_EventMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x28>(this);
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_MaxRayIntersections(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_MaxRayIntersections()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_MaxRayIntersections() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_LastMaxRayIntersections(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_LastMaxRayIntersections()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_LastMaxRayIntersections() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void UnityEngine::EventSystems::PhysicsRaycaster::__set_m_Hits(::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, 0x38>(this, std::forward<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_Hits()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, 0x38>(this);
}
constexpr ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> const& UnityEngine::EventSystems::PhysicsRaycaster::__get_m_Hits() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>, 0x38>(this);
}
inline ::UnityEngine::EventSystems::PhysicsRaycaster* UnityEngine::EventSystems::PhysicsRaycaster::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::PhysicsRaycaster*>());
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Camera* UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_eventCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera*, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_depth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_depth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_finalEventMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_eventMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "set_eventMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "get_maxRayIntersections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "set_maxRayIntersections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance(::UnityEngine::EventSystems::PointerEventData*  eventData, ByRef<::UnityEngine::Ray>  ray, ByRef<int32_t>  eventDisplayIndex, ByRef<float_t>  distanceToClipPlane)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "ComputeRayAndDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Ray>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, eventData, ray, eventDisplayIndex, distanceToClipPlane);
}
inline void UnityEngine::EventSystems::PhysicsRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PhysicsRaycaster*>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData, resultAppendList);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
