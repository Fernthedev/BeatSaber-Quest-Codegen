#pragma once
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
constexpr void HMUI::__NoTransitionsButton__SelectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__NoTransitionsButton__SelectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__NoTransitionsButton__SelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__NoTransitionsButton__SelectionState::__NoTransitionsButton__SelectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__NoTransitionsButton__SelectionState  HMUI::__NoTransitionsButton__SelectionState::Normal{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__NoTransitionsButton__SelectionState  HMUI::__NoTransitionsButton__SelectionState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__NoTransitionsButton__SelectionState  HMUI::__NoTransitionsButton__SelectionState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::HMUI::__NoTransitionsButton__SelectionState  HMUI::__NoTransitionsButton__SelectionState::Disabled{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.get_selectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__NoTransitionsButton__SelectionState (::HMUI::NoTransitionsButton::*)()>(&::HMUI::NoTransitionsButton::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.add_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*)>(&::HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2130304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.remove_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*)>(&::HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21304ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(&::HMUI::NoTransitionsButton::DoStateTransition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2130ae8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)()>(&::HMUI::NoTransitionsButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::NoTransitionsButton::__set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*, 0x100>(this, std::forward<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*>(value));
}
constexpr ::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>* HMUI::NoTransitionsButton::__get_selectionStateDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*> HMUI::NoTransitionsButton::__get_selectionStateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*, 0x100>(this);
}
constexpr void HMUI::NoTransitionsButton::__set__selectionState(::HMUI::__NoTransitionsButton__SelectionState  value)  {
::cordl_internals::setInstanceField<::HMUI::__NoTransitionsButton__SelectionState, 0x108>(this, std::forward<::HMUI::__NoTransitionsButton__SelectionState>(value));
}
constexpr ::HMUI::__NoTransitionsButton__SelectionState& HMUI::NoTransitionsButton::__get__selectionState()  {
return ::cordl_internals::getInstanceField<::HMUI::__NoTransitionsButton__SelectionState, 0x108>(this);
}
constexpr ::HMUI::__NoTransitionsButton__SelectionState const& HMUI::NoTransitionsButton::__get__selectionState() const {
return ::cordl_internals::getInstanceField<::HMUI::__NoTransitionsButton__SelectionState, 0x108>(this);
}
inline ::HMUI::__NoTransitionsButton__SelectionState HMUI::NoTransitionsButton::get_selectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__NoTransitionsButton__SelectionState, false>(*this, ___internal_method);
}
inline void HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__NoTransitionsButton__SelectionState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::NoTransitionsButton::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, instant);
}
inline ::HMUI::NoTransitionsButton* HMUI::NoTransitionsButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::NoTransitionsButton*>());
}
inline void HMUI::NoTransitionsButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
