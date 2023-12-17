#pragma once
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
constexpr void HMUI::__ToggleWithCallbacks__SelectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__ToggleWithCallbacks__SelectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__ToggleWithCallbacks__SelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState::__ToggleWithCallbacks__SelectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState  HMUI::__ToggleWithCallbacks__SelectionState::Normal{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState  HMUI::__ToggleWithCallbacks__SelectionState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState  HMUI::__ToggleWithCallbacks__SelectionState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState  HMUI::__ToggleWithCallbacks__SelectionState::Selected{static_cast<int32_t>(0x3)};
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState  HMUI::__ToggleWithCallbacks__SelectionState::Disabled{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.add_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*)>(&::HMUI::ToggleWithCallbacks::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2146be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.remove_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*)>(&::HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2146ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.get_selectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__ToggleWithCallbacks__SelectionState (::HMUI::ToggleWithCallbacks::*)()>(&::HMUI::ToggleWithCallbacks::get_selectionState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2146f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(&::HMUI::ToggleWithCallbacks::DoStateTransition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x214aac4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)()>(&::HMUI::ToggleWithCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214ab10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ToggleWithCallbacks::__set_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*, 0x120>(this, std::forward<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>(value));
}
constexpr ::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* HMUI::ToggleWithCallbacks::__get_stateDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*> HMUI::ToggleWithCallbacks::__get_stateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*, 0x120>(this);
}
inline void HMUI::ToggleWithCallbacks::add_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HMUI::__ToggleWithCallbacks__SelectionState HMUI::ToggleWithCallbacks::get_selectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__ToggleWithCallbacks__SelectionState, false>(*this, ___internal_method);
}
inline void HMUI::ToggleWithCallbacks::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, instant);
}
inline ::HMUI::ToggleWithCallbacks* HMUI::ToggleWithCallbacks::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ToggleWithCallbacks*>());
}
inline void HMUI::ToggleWithCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
