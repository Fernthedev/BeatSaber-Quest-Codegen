#pragma once
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::BaseEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(&::UnityEngine::EventSystems::BaseEventData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d95400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.get_currentInputModule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseInputModule* (::UnityEngine::EventSystems::BaseEventData::*)()>(&::UnityEngine::EventSystems::BaseEventData::get_currentInputModule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d9544c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            "get_currentInputModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.get_selectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::UnityEngine::EventSystems::BaseEventData::*)()>(&::UnityEngine::EventSystems::BaseEventData::get_selectedObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d95468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            "get_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::BaseEventData.set_selectedObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::BaseEventData::*)(::UnityEngine::GameObject*)>(&::UnityEngine::EventSystems::BaseEventData::set_selectedObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d95484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            "set_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::EventSystems::BaseEventData::__set_m_EventSystem(::UnityEngine::EventSystems::EventSystem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x18>(this, std::forward<::UnityEngine::EventSystems::EventSystem*>(value));
}
constexpr ::UnityEngine::EventSystems::EventSystem* UnityEngine::EventSystems::BaseEventData::__get_m_EventSystem()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> UnityEngine::EventSystems::BaseEventData::__get_m_EventSystem() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::EventSystem*, 0x18>(this);
}
inline ::UnityEngine::EventSystems::BaseEventData* UnityEngine::EventSystems::BaseEventData::New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::BaseEventData*>(eventSystem));
}
inline void UnityEngine::EventSystems::BaseEventData::_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::EventSystem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventSystem);
}
inline ::UnityEngine::EventSystems::BaseInputModule* UnityEngine::EventSystems::BaseEventData::get_currentInputModule()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            "get_currentInputModule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseInputModule*, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* UnityEngine::EventSystems::BaseEventData::get_selectedObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            "get_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::BaseEventData::set_selectedObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::BaseEventData*>::get(),
                            "set_selectedObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
