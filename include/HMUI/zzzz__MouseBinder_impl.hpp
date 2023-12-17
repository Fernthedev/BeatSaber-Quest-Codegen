#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "HMUI/zzzz__MouseBinder_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void HMUI::__MouseBinder__MouseEventType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__MouseBinder__MouseEventType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__MouseBinder__MouseEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__MouseBinder__MouseEventType::__MouseBinder__MouseEventType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__MouseBinder__MouseEventType  HMUI::__MouseBinder__MouseEventType::ButtonDown{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__MouseBinder__MouseEventType  HMUI::__MouseBinder__MouseEventType::ButtonUp{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__MouseBinder__MouseEventType  HMUI::__MouseBinder__MouseEventType::ButtonPress{static_cast<int32_t>(0x2)};
constexpr void HMUI::__MouseBinder__ButtonType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__MouseBinder__ButtonType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__MouseBinder__ButtonType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__MouseBinder__ButtonType::__MouseBinder__ButtonType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__MouseBinder__ButtonType  HMUI::__MouseBinder__ButtonType::Primary{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__MouseBinder__ButtonType  HMUI::__MouseBinder__ButtonType::Secondary{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__MouseBinder__ButtonType  HMUI::__MouseBinder__ButtonType::Middle{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HMUI::MouseBinder.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2119bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.set_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(bool)>(&::HMUI::MouseBinder::set_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2119bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2119bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2119be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*)>(&::HMUI::MouseBinder::AddScrollBindings)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2119ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddScrollBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddScrollBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::HMUI::MouseBinder::AddScrollBinding)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2119de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddScrollBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveScrollBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::UnityEngine::Events::UnityAction_1<float_t>*)>(&::HMUI::MouseBinder::RemoveScrollBinding)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2119e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "RemoveScrollBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>*>*)>(&::HMUI::MouseBinder::AddButtonBindings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2119ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddButtonBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.AddButtonBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*)>(&::HMUI::MouseBinder::AddButtonBinding)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x211a054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddButtonBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.RemoveButtonBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)(::HMUI::__MouseBinder__ButtonType, ::HMUI::__MouseBinder__MouseEventType, ::UnityEngine::Events::UnityAction*)>(&::HMUI::MouseBinder::RemoveButtonBinding)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211a14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "RemoveButtonBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ClearBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ClearBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x211a1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::MouseBinder.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::MouseBinder::*)()>(&::HMUI::MouseBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x211a2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::MouseBinder::__set__enabled_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::MouseBinder::__get__enabled_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HMUI::MouseBinder::__get__enabled_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HMUI::MouseBinder::__set__scrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>* HMUI::MouseBinder::__get__scrollBindings()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*> HMUI::MouseBinder::__get__scrollBindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*, 0x18>(this);
}
constexpr void HMUI::MouseBinder::__set__buttonBindings(::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>>* HMUI::MouseBinder::__get__buttonBindings()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>>*> HMUI::MouseBinder::__get__buttonBindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>>*, 0x20>(this);
}
inline bool HMUI::MouseBinder::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HMUI::MouseBinder::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "set_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HMUI::MouseBinder* HMUI::MouseBinder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::MouseBinder*>());
}
inline void HMUI::MouseBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::MouseBinder::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::MouseBinder::AddScrollBindings(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddScrollBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float_t>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddScrollBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void HMUI::MouseBinder::RemoveScrollBinding(::UnityEngine::Events::UnityAction_1<float_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "RemoveScrollBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, action);
}
inline void HMUI::MouseBinder::AddButtonBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>*>*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddButtonBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::__MouseBinder__ButtonType,::HMUI::__MouseBinder__MouseEventType,::UnityEngine::Events::UnityAction*>*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bindingData);
}
inline void HMUI::MouseBinder::AddButtonBinding(::HMUI::__MouseBinder__ButtonType  buttonType, ::HMUI::__MouseBinder__MouseEventType  keyBindingType, ::UnityEngine::Events::UnityAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "AddButtonBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::RemoveButtonBinding(::HMUI::__MouseBinder__ButtonType  buttonType, ::HMUI::__MouseBinder__MouseEventType  keyBindingType, ::UnityEngine::Events::UnityAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "RemoveButtonBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__ButtonType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__MouseBinder__MouseEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buttonType, keyBindingType, action);
}
inline void HMUI::MouseBinder::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "ClearBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::MouseBinder::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::MouseBinder*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
