#pragma once
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPhaseControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b0bbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b0bc6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(::UnityEngine::InputSystem::TouchPhase, ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b0bc94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* UnityEngine::InputSystem::Controls::TouchPhaseControl::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>());
}
inline void UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::TouchPhase UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase, false>(*this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase  value, ::cordl_internals::Ptr<void>  statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::TouchPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, statePtr);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
