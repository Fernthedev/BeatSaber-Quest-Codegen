#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionPhase_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "System/zzzz__Type_def.hpp"
constexpr void UnityEngine::InputSystem::__InputAction__ActionFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputAction__ActionFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputAction__ActionFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputAction__ActionFlags::__InputAction__ActionFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::__InputAction__ActionFlags  UnityEngine::InputSystem::__InputAction__ActionFlags::WantsInitialStateCheck{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_actionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_actionIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_actionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_bindingIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_bindingIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a37324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_controlIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_controlIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a37358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_interactionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_interactionIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a3738c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_phase)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a373c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_started
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_started)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a373f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_performed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_performed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a37428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_canceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_canceled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a37460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_action
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_action)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a37498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_control
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_control)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a374c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_interaction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::IInputInteraction* (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_interaction)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a3750c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_interaction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_time)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a37564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_startTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_startTime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a3759c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_duration)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a375d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_valueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_valueType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a3763c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_valueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.get_valueSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a3768c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_valueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.ReadValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)(::cordl_internals::Ptr<void>, int32_t)>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::ReadValue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2a376dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.ReadValueAsButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::ReadValueAsButton)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a378a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "ReadValueAsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.ReadValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a37928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputAction__CallbackContext.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputAction__CallbackContext::*)()>(&::UnityEngine::InputSystem::__InputAction__CallbackContext::ToString)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x2a379b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputAction__CallbackContext::__set_m_State(::UnityEngine::InputSystem::InputActionState*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::InputActionState*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::__InputAction__CallbackContext::__get_m_State()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> UnityEngine::InputSystem::__InputAction__CallbackContext::__get_m_State() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputAction__CallbackContext::__set_m_ActionIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputAction__CallbackContext::__get_m_ActionIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputAction__CallbackContext::__get_m_ActionIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline int32_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_actionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_actionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_bindingIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_bindingIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_controlIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_controlIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_interactionIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_interactionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::__InputAction__CallbackContext::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputAction__CallbackContext::get_started()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputAction__CallbackContext::get_performed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputAction__CallbackContext::get_canceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::__InputAction__CallbackContext::get_action()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::__InputAction__CallbackContext::get_control()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_control",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::IInputInteraction* UnityEngine::InputSystem::__InputAction__CallbackContext::get_interaction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_interaction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::IInputInteraction*, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_startTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_startTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline ::System::Type* UnityEngine::InputSystem::__InputAction__CallbackContext::get_valueType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_valueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::__InputAction__CallbackContext::get_valueSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "get_valueSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputAction__CallbackContext::ReadValue(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "ReadValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, bufferSize);
}
template<typename TValue>
inline TValue UnityEngine::InputSystem::__InputAction__CallbackContext::ReadValue()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
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
inline bool UnityEngine::InputSystem::__InputAction__CallbackContext::ReadValueAsButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "ReadValueAsButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputAction__CallbackContext::ReadValueAsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputAction__CallbackContext::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_ActionIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputAction__CallbackContext::__InputAction__CallbackContext(::UnityEngine::InputSystem::InputActionState*  m_State, int32_t  m_ActionIndex) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_State = m_State;
this->m_ActionIndex = m_ActionIndex;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a35858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionType (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a35860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_id)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a35868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_idDontGenerate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_idDontGenerate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a358e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_idDontGenerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_expectedControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_expectedControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a35930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_expectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_expectedControlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::StringW)>(&::UnityEngine::InputSystem::InputAction::set_expectedControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a35938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "set_expectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_processors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a35940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_interactions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_interactions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a35948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_interactions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_actionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_actionMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a35950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_actionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a35990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputAction::set_bindingMask)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2a359a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_bindings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a35c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_controls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_controls)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a35d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_phase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_phase)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a35e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_inProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_inProgress)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a35ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_inProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_enabled)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a35eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_started
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::add_started)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a35f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "add_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_started
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::remove_started)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a35f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "remove_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_canceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::add_canceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a35fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "add_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_canceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::remove_canceled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a3603c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "remove_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.add_performed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::add_performed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a36094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "add_performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.remove_performed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputAction::remove_performed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a360ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "remove_performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_triggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_triggered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a36144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_triggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_activeControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_activeControl)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a361e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_activeControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_wantsInitialStateCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a36274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.set_wantsInitialStateCheck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(bool)>(&::UnityEngine::InputSystem::InputAction::set_wantsInitialStateCheck)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a36290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "set_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a362ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)(::StringW, ::UnityEngine::InputSystem::InputActionType, ::StringW, ::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputAction::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a362bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a363dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ToString)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2a363f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Enable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Enable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a366c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Disable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Disable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a36750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Clone)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a367c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.System_ICloneable_Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3689c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ReadValueAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a368a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::Reset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a3693c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.IsPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::IsPressed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a369d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "IsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.IsInProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::IsInProgress)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a36a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "IsInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPressedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPressedThisFrame)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a36a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "WasPressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasReleasedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasReleasedThisFrame)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a36b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "WasReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.WasPerformedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::WasPerformedThisFrame)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a36148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "WasPerformedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetTimeoutCompletionPercentage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GetTimeoutCompletionPercentage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a36bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "GetTimeoutCompletionPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_isSingletonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_isSingletonAction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a35970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_isSingletonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.get_currentState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionState__TriggerState (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::get_currentState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a35e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_currentState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.MakeSureIdIsInPlace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::MakeSureIdIsInPlace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a3589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "MakeSureIdIsInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GenerateId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GenerateId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a36cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "GenerateId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.GetOrCreateActionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::GetOrCreateActionMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a35b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "GetOrCreateActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.CreateInternalActionMapForSingletonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::CreateInternalActionMapForSingletonAction)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a36d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "CreateInternalActionMapForSingletonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.RequestInitialStateCheckOnEnabledAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::RequestInitialStateCheckOnEnabledAction)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a36e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "RequestInitialStateCheckOnEnabledAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.ActiveControlIsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputAction::*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputAction::ActiveControlIsValid)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a36e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "ActiveControlIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.FindEffectiveBindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputAction::*)()>(&::UnityEngine::InputSystem::InputAction::FindEffectiveBindingMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a37024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "FindEffectiveBindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.BindingIndexOnActionToBindingIndexOnMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)(int32_t)>(&::UnityEngine::InputSystem::InputAction::BindingIndexOnActionToBindingIndexOnMap)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2a370b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "BindingIndexOnActionToBindingIndexOnMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputAction.BindingIndexOnMapToBindingIndexOnAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputAction::*)(int32_t)>(&::UnityEngine::InputSystem::InputAction::BindingIndexOnMapToBindingIndexOnAction)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a37254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "BindingIndexOnMapToBindingIndexOnAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr  UnityEngine::InputSystem::InputAction::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputAction::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_Name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__get_m_Name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_Type(::UnityEngine::InputSystem::InputActionType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionType, 0x18>(this, std::forward<::UnityEngine::InputSystem::InputActionType>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionType& UnityEngine::InputSystem::InputAction::__get_m_Type()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionType, 0x18>(this);
}
constexpr ::UnityEngine::InputSystem::InputActionType const& UnityEngine::InputSystem::InputAction::__get_m_Type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionType, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_ExpectedControlType(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__get_m_ExpectedControlType()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__get_m_ExpectedControlType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_Id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__get_m_Id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__get_m_Id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_Processors(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__get_m_Processors()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__get_m_Processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_Interactions(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::InputAction::__get_m_Interactions()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::InputAction::__get_m_Interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_SingletonActionBindings(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& UnityEngine::InputSystem::InputAction::__get_m_SingletonActionBindings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& UnityEngine::InputSystem::InputAction::__get_m_SingletonActionBindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x40>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_Flags(::UnityEngine::InputSystem::__InputAction__ActionFlags  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputAction__ActionFlags, 0x48>(this, std::forward<::UnityEngine::InputSystem::__InputAction__ActionFlags>(value));
}
constexpr ::UnityEngine::InputSystem::__InputAction__ActionFlags& UnityEngine::InputSystem::InputAction::__get_m_Flags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputAction__ActionFlags, 0x48>(this);
}
constexpr ::UnityEngine::InputSystem::__InputAction__ActionFlags const& UnityEngine::InputSystem::InputAction::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputAction__ActionFlags, 0x48>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x50>(this, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputAction::__get_m_BindingMask()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x50>(this);
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputAction::__get_m_BindingMask() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x50>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_BindingsStartIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__get_m_BindingsStartIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__get_m_BindingsStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_BindingsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__get_m_BindingsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__get_m_BindingsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_ControlStartIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__get_m_ControlStartIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__get_m_ControlStartIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_ControlCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xbc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__get_m_ControlCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__get_m_ControlCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_ActionIndexInState(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputAction::__get_m_ActionIndexInState()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputAction::__get_m_ActionIndexInState() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_ActionMap(::UnityEngine::InputSystem::InputActionMap*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionMap*, 0xc8>(this, std::forward<::UnityEngine::InputSystem::InputActionMap*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputAction::__get_m_ActionMap()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionMap*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionMap*> UnityEngine::InputSystem::InputAction::__get_m_ActionMap() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionMap*, 0xc8>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_OnStarted(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0xd0>(this, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>& UnityEngine::InputSystem::InputAction::__get_m_OnStarted()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0xd0>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& UnityEngine::InputSystem::InputAction::__get_m_OnStarted() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0xd0>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_OnCanceled(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0x120>(this, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>& UnityEngine::InputSystem::InputAction::__get_m_OnCanceled()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0x120>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& UnityEngine::InputSystem::InputAction::__get_m_OnCanceled() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0x120>(this);
}
constexpr void UnityEngine::InputSystem::InputAction::__set_m_OnPerformed(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0x170>(this, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>& UnityEngine::InputSystem::InputAction::__get_m_OnPerformed()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0x170>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& UnityEngine::InputSystem::InputAction::__get_m_OnPerformed() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0x170>(this);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionType UnityEngine::InputSystem::InputAction::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionType, false>(*this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputAction::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputAction::get_idDontGenerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_idDontGenerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_expectedControlType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_expectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_expectedControlType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "set_expectedControlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_processors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::get_interactions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_interactions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputAction::get_actionMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_actionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*, false>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputAction::get_controls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionPhase UnityEngine::InputSystem::InputAction::get_phase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_phase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionPhase, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_inProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_inProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::add_started(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "add_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_started(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "remove_started",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::add_canceled(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "add_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_canceled(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "remove_canceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::add_performed(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "add_performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputAction::remove_performed(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "remove_performed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputAction::get_triggered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_triggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputAction::get_activeControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_activeControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_wantsInitialStateCheck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::set_wantsInitialStateCheck(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "set_wantsInitialStateCheck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputAction*>());
}
inline void UnityEngine::InputSystem::InputAction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param name: ::StringW (default: csnull)
/// @param type: ::UnityEngine::InputSystem::InputActionType (default: static_cast<int32_t>(0x0))
/// @param binding: ::StringW (default: csnull)
/// @param interactions: ::StringW (default: csnull)
/// @param processors: ::StringW (default: csnull)
/// @param expectedControlType: ::StringW (default: csnull)
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::New_ctor(::StringW  name, ::UnityEngine::InputSystem::InputActionType  type, ::StringW  binding, ::StringW  interactions, ::StringW  processors, ::StringW  expectedControlType)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputAction*>(name, type, binding, interactions, processors, expectedControlType));
}
/// @param name: ::StringW (default: csnull)
/// @param type: ::UnityEngine::InputSystem::InputActionType (default: static_cast<int32_t>(0x0))
/// @param binding: ::StringW (default: csnull)
/// @param interactions: ::StringW (default: csnull)
/// @param processors: ::StringW (default: csnull)
/// @param expectedControlType: ::StringW (default: csnull)
inline void UnityEngine::InputSystem::InputAction::_ctor(::StringW  name, ::UnityEngine::InputSystem::InputActionType  type, ::StringW  binding, ::StringW  interactions, ::StringW  processors, ::StringW  expectedControlType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, type, binding, interactions, processors, expectedControlType);
}
inline void UnityEngine::InputSystem::InputAction::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Enable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Disable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputAction::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputAction::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<typename TValue>
inline TValue UnityEngine::InputSystem::InputAction::ReadValue()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
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
inline ::System::Object* UnityEngine::InputSystem::InputAction::ReadValueAsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "ReadValueAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::IsPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "IsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::IsInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "IsInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "WasPressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "WasReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::WasPerformedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "WasPerformedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::InputAction::GetTimeoutCompletionPercentage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "GetTimeoutCompletionPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::get_isSingletonAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_isSingletonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionState__TriggerState UnityEngine::InputSystem::InputAction::get_currentState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "get_currentState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionState__TriggerState, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputAction::MakeSureIdIsInPlace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "MakeSureIdIsInPlace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::GenerateId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "GenerateId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputAction::GetOrCreateActionMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "GetOrCreateActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::CreateInternalActionMapForSingletonAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "CreateInternalActionMapForSingletonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputAction::RequestInitialStateCheckOnEnabledAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "RequestInitialStateCheckOnEnabledAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputAction::ActiveControlIsValid(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "ActiveControlIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, control);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputAction::FindEffectiveBindingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "FindEffectiveBindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputAction::BindingIndexOnActionToBindingIndexOnMap(int32_t  indexOfBindingOnAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "BindingIndexOnActionToBindingIndexOnMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, indexOfBindingOnAction);
}
inline int32_t UnityEngine::InputSystem::InputAction::BindingIndexOnMapToBindingIndexOnAction(int32_t  indexOfBindingOnMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputAction*>::get(),
                            "BindingIndexOnMapToBindingIndexOnAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, indexOfBindingOnMap);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
