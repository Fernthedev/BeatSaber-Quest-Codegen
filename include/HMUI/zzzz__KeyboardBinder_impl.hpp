#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__KeyboardBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "HMUI/zzzz__KeyboardBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
constexpr void HMUI::__KeyboardBinder__KeyBindingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__KeyboardBinder__KeyBindingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__KeyboardBinder__KeyBindingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__KeyboardBinder__KeyBindingType::__KeyboardBinder__KeyBindingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__KeyboardBinder__KeyBindingType  HMUI::__KeyboardBinder__KeyBindingType::KeyDown{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__KeyboardBinder__KeyBindingType  HMUI::__KeyboardBinder__KeyBindingType::KeyUp{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__KeyboardBinder__KeyBindingType  HMUI::__KeyboardBinder__KeyBindingType::KeyPress{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HMUI::KeyboardBinder.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211952c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.set_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(bool)>(&::HMUI::KeyboardBinder::set_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2119534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2119540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>*)>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21195f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*)>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2119808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21195ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*)>(&::HMUI::KeyboardBinder::AddBindings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x21198c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "AddBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>*)>(&::HMUI::KeyboardBinder::AddBinding)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x21196c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "AddBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ClearBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2119a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2119aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::KeyboardBinder::__set__enabled_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::KeyboardBinder::__get__enabled_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::KeyboardBinder::__get__enabled_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::KeyboardBinder::__set__shouldClearBindings(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::KeyboardBinder::__get__shouldClearBindings()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& HMUI::KeyboardBinder::__get__shouldClearBindings() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void HMUI::KeyboardBinder::__set__newBindings(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>* HMUI::KeyboardBinder::__get__newBindings()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*> HMUI::KeyboardBinder::__get__newBindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*, 0x18>(this);
}
constexpr void HMUI::KeyboardBinder::__set__bindings(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>* HMUI::KeyboardBinder::__get__bindings()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*> HMUI::KeyboardBinder::__get__bindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*, 0x20>(this);
}
inline bool HMUI::KeyboardBinder::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HMUI::KeyboardBinder::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::KeyboardBinder*>());
}
inline void HMUI::KeyboardBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor(::UnityEngine::KeyCode  keycode, ::HMUI::__KeyboardBinder__KeyBindingType  keyBindingType, ::System::Action_1<bool>*  action)  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::KeyboardBinder*>(keycode, keyBindingType, action));
}
inline void HMUI::KeyboardBinder::_ctor(::UnityEngine::KeyCode  keycode, ::HMUI::__KeyboardBinder__KeyBindingType  keyBindingType, ::System::Action_1<bool>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keycode, keyBindingType, action);
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*  bindingData)  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::KeyboardBinder*>(bindingData));
}
inline void HMUI::KeyboardBinder::_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindingData);
}
inline void HMUI::KeyboardBinder::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::KeyboardBinder::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "AddBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindingData);
}
inline void HMUI::KeyboardBinder::AddBinding(::UnityEngine::KeyCode  keyCode, ::HMUI::__KeyboardBinder__KeyBindingType  keyBindingType, ::System::Action_1<bool>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "AddBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyCode, keyBindingType, action);
}
inline void HMUI::KeyboardBinder::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::KeyboardBinder::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
