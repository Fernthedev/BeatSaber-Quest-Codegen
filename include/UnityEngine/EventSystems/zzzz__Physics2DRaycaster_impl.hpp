#pragma once
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__Physics2DRaycaster_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::Physics2DRaycaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::Physics2DRaycaster::*)()>(&::UnityEngine::EventSystems::Physics2DRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2da0428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::Physics2DRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::Physics2DRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::Physics2DRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x2da0478;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::Physics2DRaycaster::__set_m_Hits(::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>& UnityEngine::EventSystems::Physics2DRaycaster::__get_m_Hits()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*> const& UnityEngine::EventSystems::Physics2DRaycaster::__get_m_Hits() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::RaycastHit2D,::Array<::UnityEngine::RaycastHit2D>*>, 0x40>(this);
}
inline ::UnityEngine::EventSystems::Physics2DRaycaster* UnityEngine::EventSystems::Physics2DRaycaster::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::Physics2DRaycaster*>());
}
inline void UnityEngine::EventSystems::Physics2DRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::Physics2DRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData*  eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*  resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::Physics2DRaycaster*>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData, resultAppendList);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
