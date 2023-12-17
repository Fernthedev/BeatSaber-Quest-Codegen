#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InputActionTrace_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InputActionTrace_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_action
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_action)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b0eb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_phase)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b0ebb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_control)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b0ebc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_interaction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::IInputInteraction* (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_interaction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b0ec04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_interaction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_time)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b0ec5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_startTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b0ec78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_duration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2b0ec84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.get_valueSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b0ecb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_valueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.ReadValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2b0ecc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)(::cordl_internals::Ptr<void>, int32_t)>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2b0ef04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ToString)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2b0e4dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__set_m_State(::UnityEngine::InputSystem::InputActionState*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::InputActionState*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__get_m_State()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__get_m_State() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__set_m_Ptr(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>>(value));
}
constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>& UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__get_m_Ptr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> const& UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_action()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_control()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_interaction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_interaction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::IInputInteraction*, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::get_valueSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "get_valueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValueAsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValue(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, bufferSize);
}
template<typename TValue>
inline TValue UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ReadValue()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                        "ReadValue",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Ptr", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr::__InputActionTrace__ActionEventPtr(::UnityEngine::InputSystem::InputActionState*  m_State, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_Ptr) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_State = m_State;
this->m_Ptr = m_Ptr;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)(::UnityEngine::InputSystem::Utilities::InputActionTrace*)>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b0e7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b0f008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b0f06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0f078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b0f07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::*)()>(&::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b0f0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr  UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__set_m_Trace(::UnityEngine::InputSystem::Utilities::InputActionTrace*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InputActionTrace*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::InputActionTrace*>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InputActionTrace* UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_Trace()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InputActionTrace*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::InputActionTrace*> UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_Trace() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InputActionTrace*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__set_m_Buffer(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>>(value));
}
constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_Buffer()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> const& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_Buffer() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__set_m_EventCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_EventCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_EventCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__set_m_CurrentEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>>(value));
}
constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_CurrentEvent()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> const& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_CurrentEvent() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__set_m_CurrentIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_CurrentIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__get_m_CurrentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::_ctor(::UnityEngine::InputSystem::Utilities::InputActionTrace*  trace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, trace);
}
inline bool UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Trace", ty: "::UnityEngine::InputSystem::Utilities::InputActionTrace*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentEvent", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Utilities::__InputActionTrace__Enumerator::__InputActionTrace__Enumerator(::UnityEngine::InputSystem::Utilities::InputActionTrace*  m_Trace, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_Buffer, int32_t  m_EventCount, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent>  m_CurrentEvent, int32_t  m_CurrentIndex) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->m_Trace = m_Trace;
this->m_Buffer = m_Buffer;
this->m_EventCount = m_EventCount;
this->m_CurrentEvent = m_CurrentEvent;
this->m_CurrentIndex = m_CurrentIndex;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.get_buffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventBuffer (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::get_buffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b0d4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "get_buffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.get_count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0d504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0d50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b0d514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b0d6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.SubscribeToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeToAll)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b0d854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "SubscribeToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnsubscribeFromAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFromAll)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2b0dc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnsubscribeFromAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.SubscribeTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2b0d590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "SubscribeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.SubscribeTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2b0d740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "SubscribeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnsubscribeFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2b0d9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnsubscribeFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnsubscribeFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2b0db10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnsubscribeFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.RecordAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::RecordAction)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2b0dd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "RecordAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::Clear)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b0df20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b0df74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::ToString)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2b0e108;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b0e7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.DisposeInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::DisposeInternal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2b0e008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "DisposeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>* (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::GetEnumerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b0e464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0e830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.HookOnActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::HookOnActionChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b0d930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "HookOnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.UnhookOnActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)()>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::UnhookOnActionChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b0dce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnhookOnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.OnActionChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::System::Object*, ::UnityEngine::InputSystem::InputActionChange)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::OnActionChange)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2b0e834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "OnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::InputActionTrace.CloneActionStateBeforeBindingsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::InputActionTrace::*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::Utilities::InputActionTrace::CloneActionStateBeforeBindingsChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b0ea98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "CloneActionStateBeforeBindingsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>"
constexpr  UnityEngine::InputSystem::Utilities::InputActionTrace::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::Utilities::InputActionTrace::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::Utilities::InputActionTrace::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_SubscribedToAll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_SubscribedToAll()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_SubscribedToAll() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_OnActionChangeHooked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_OnActionChangeHooked()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_OnActionChangeHooked() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_SubscribedActions(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>, 0x18>(this, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_SubscribedActions()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>, 0x18>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_SubscribedActions() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputAction*>, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_SubscribedActionMaps(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>, 0x30>(this, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_SubscribedActionMaps()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>, 0x30>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*> const& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_SubscribedActionMaps() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionMap*>, 0x30>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_EventBuffer(::UnityEngine::InputSystem::LowLevel::InputEventBuffer  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, 0x48>(this, std::forward<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_EventBuffer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, 0x48>(this);
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer const& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_EventBuffer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, 0x48>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_ActionMapStates(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>, 0x68>(this, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_ActionMapStates()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>, 0x68>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_ActionMapStates() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>, 0x68>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_ActionMapStateClones(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>, 0x80>(this, std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_ActionMapStateClones()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>, 0x80>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*> const& UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_ActionMapStateClones() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputActionState*>, 0x80>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_CallbackDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x98>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_CallbackDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_CallbackDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, 0x98>(this);
}
constexpr void UnityEngine::InputSystem::Utilities::InputActionTrace::__set_m_ActionChangeDelegate(::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*, 0xa0>(this, std::forward<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>(value));
}
constexpr ::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>* UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_ActionChangeDelegate()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*> UnityEngine::InputSystem::Utilities::InputActionTrace::__get_m_ActionChangeDelegate() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*, 0xa0>(this);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer UnityEngine::InputSystem::Utilities::InputActionTrace::get_buffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "get_buffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Utilities::InputActionTrace::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* UnityEngine::InputSystem::Utilities::InputActionTrace::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::InputActionTrace*>());
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* UnityEngine::InputSystem::Utilities::InputActionTrace::New_ctor(::UnityEngine::InputSystem::InputAction*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::InputActionTrace*>(action));
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline ::UnityEngine::InputSystem::Utilities::InputActionTrace* UnityEngine::InputSystem::Utilities::InputActionTrace::New_ctor(::UnityEngine::InputSystem::InputActionMap*  actionMap)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::InputActionTrace*>(actionMap));
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::_ctor(::UnityEngine::InputSystem::InputActionMap*  actionMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, actionMap);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeToAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "SubscribeToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFromAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnsubscribeFromAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "SubscribeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::SubscribeTo(::UnityEngine::InputSystem::InputActionMap*  actionMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "SubscribeTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, actionMap);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnsubscribeFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnsubscribeFrom(::UnityEngine::InputSystem::InputActionMap*  actionMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnsubscribeFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, actionMap);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::RecordAction(::UnityEngine::InputSystem::__InputAction__CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "RecordAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::InputActionTrace::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::DisposeInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "DisposeInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>* UnityEngine::InputSystem::Utilities::InputActionTrace::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::__InputActionTrace__ActionEventPtr>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::InputActionTrace::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::HookOnActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "HookOnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::UnhookOnActionChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "UnhookOnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::OnActionChange(::System::Object*  actionOrMapOrAsset, ::UnityEngine::InputSystem::InputActionChange  change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "OnActionChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, actionOrMapOrAsset, change);
}
inline void UnityEngine::InputSystem::Utilities::InputActionTrace::CloneActionStateBeforeBindingsChange(::UnityEngine::InputSystem::InputActionMap*  actionMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::InputActionTrace*>::get(),
                            "CloneActionStateBeforeBindingsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, actionMap);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
