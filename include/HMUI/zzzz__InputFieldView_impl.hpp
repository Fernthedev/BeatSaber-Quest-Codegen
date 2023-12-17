#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void HMUI::__InputFieldView__SelectionState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__InputFieldView__SelectionState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__InputFieldView__SelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__InputFieldView__SelectionState::__InputFieldView__SelectionState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__InputFieldView__SelectionState  HMUI::__InputFieldView__SelectionState::Normal{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__InputFieldView__SelectionState  HMUI::__InputFieldView__SelectionState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__InputFieldView__SelectionState  HMUI::__InputFieldView__SelectionState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::HMUI::__InputFieldView__SelectionState  HMUI::__InputFieldView__SelectionState::Disabled{static_cast<int32_t>(0x3)};
constexpr ::HMUI::__InputFieldView__SelectionState  HMUI::__InputFieldView__SelectionState::Selected{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::HMUI::InputFieldView.get_selectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__InputFieldView__SelectionState (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_keyboardPositionOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_keyboardPositionOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x214095c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_keyboardPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.add_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::__InputFieldView__SelectionState>*)>(&::HMUI::InputFieldView::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x214096c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.remove_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::__InputFieldView__SelectionState>*)>(&::HMUI::InputFieldView::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2140a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__InputFieldView__InputFieldChanged* (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::__InputFieldView__InputFieldChanged*)>(&::HMUI::InputFieldView::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__InputFieldChanged*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_useGlobalKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_useGlobalKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_useGlobalKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2140aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::set_text)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2140af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2140c6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2140d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(&::HMUI::InputFieldView::DoStateTransition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2140d6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ActivateKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::ActivateKeyboard)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2140dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "ActivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DeactivateKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::DeactivateKeyboard)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2141000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "DeactivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21411d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ClearInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::ClearInput)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21411ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "ClearInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardKeyPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(char16_t)>(&::HMUI::InputFieldView::KeyboardKeyPressed)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x214123c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "KeyboardKeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardDeletePressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::KeyboardDeletePressed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2141364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "KeyboardDeletePressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.BlinkingCaretCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::BlinkingCaretCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2140f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "BlinkingCaretCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateCaretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateCaretPosition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2140b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "UpdateCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdatePlaceholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdatePlaceholder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2140c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "UpdatePlaceholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateClearButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateClearButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21411a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "UpdateClearButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2141468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._Awake_b__34_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_Awake_b__34_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21415e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "<Awake>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::InputFieldView::__set__textView(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0xf8>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* HMUI::InputFieldView::__get__textView()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> HMUI::InputFieldView::__get__textView() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0xf8>(this);
}
constexpr void HMUI::InputFieldView::__set__textViewCanvasGroup(::UnityEngine::CanvasGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup*, 0x100>(this, std::forward<::UnityEngine::CanvasGroup*>(value));
}
constexpr ::UnityEngine::CanvasGroup* HMUI::InputFieldView::__get__textViewCanvasGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> HMUI::InputFieldView::__get__textViewCanvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup*, 0x100>(this);
}
constexpr void HMUI::InputFieldView::__set__blinkingCaret(::HMUI::ImageView*  value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView*, 0x108>(this, std::forward<::HMUI::ImageView*>(value));
}
constexpr ::HMUI::ImageView* HMUI::InputFieldView::__get__blinkingCaret()  {
return ::cordl_internals::getInstanceField<::HMUI::ImageView*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> HMUI::InputFieldView::__get__blinkingCaret() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView*, 0x108>(this);
}
constexpr void HMUI::InputFieldView::__set__placeholderText(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x110>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* HMUI::InputFieldView::__get__placeholderText()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> HMUI::InputFieldView::__get__placeholderText() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x110>(this);
}
constexpr void HMUI::InputFieldView::__set__clearSearchButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x118>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* HMUI::InputFieldView::__get__clearSearchButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> HMUI::InputFieldView::__get__clearSearchButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x118>(this);
}
constexpr void HMUI::InputFieldView::__set__useGlobalKeyboard(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x120>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::InputFieldView::__get__useGlobalKeyboard()  {
return ::cordl_internals::getInstanceField<bool, 0x120>(this);
}
constexpr bool const& HMUI::InputFieldView::__get__useGlobalKeyboard() const {
return ::cordl_internals::getInstanceField<bool, 0x120>(this);
}
constexpr void HMUI::InputFieldView::__set__keyboardPositionOffset(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x124>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HMUI::InputFieldView::__get__keyboardPositionOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x124>(this);
}
constexpr ::UnityEngine::Vector3 const& HMUI::InputFieldView::__get__keyboardPositionOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x124>(this);
}
constexpr void HMUI::InputFieldView::__set__useUppercase(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x130>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::InputFieldView::__get__useUppercase()  {
return ::cordl_internals::getInstanceField<bool, 0x130>(this);
}
constexpr bool const& HMUI::InputFieldView::__get__useUppercase() const {
return ::cordl_internals::getInstanceField<bool, 0x130>(this);
}
constexpr void HMUI::InputFieldView::__set__textLengthLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x134>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::InputFieldView::__get__textLengthLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x134>(this);
}
constexpr int32_t const& HMUI::InputFieldView::__get__textLengthLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x134>(this);
}
constexpr void HMUI::InputFieldView::__set__caretOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x138>(this, std::forward<float_t>(value));
}
constexpr float_t& HMUI::InputFieldView::__get__caretOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x138>(this);
}
constexpr float_t const& HMUI::InputFieldView::__get__caretOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x138>(this);
}
constexpr void HMUI::InputFieldView::__set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*, 0x140>(this, std::forward<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>(value));
}
constexpr ::System::Action_1<::HMUI::__InputFieldView__SelectionState>* HMUI::InputFieldView::__get_selectionStateDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*> HMUI::InputFieldView::__get_selectionStateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*, 0x140>(this);
}
constexpr void HMUI::InputFieldView::__set__selectionState(::HMUI::__InputFieldView__SelectionState  value)  {
::cordl_internals::setInstanceField<::HMUI::__InputFieldView__SelectionState, 0x148>(this, std::forward<::HMUI::__InputFieldView__SelectionState>(value));
}
constexpr ::HMUI::__InputFieldView__SelectionState& HMUI::InputFieldView::__get__selectionState()  {
return ::cordl_internals::getInstanceField<::HMUI::__InputFieldView__SelectionState, 0x148>(this);
}
constexpr ::HMUI::__InputFieldView__SelectionState const& HMUI::InputFieldView::__get__selectionState() const {
return ::cordl_internals::getInstanceField<::HMUI::__InputFieldView__SelectionState, 0x148>(this);
}
constexpr void HMUI::InputFieldView::__set__text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x150>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HMUI::InputFieldView::__get__text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x150>(this);
}
constexpr ::StringW const& HMUI::InputFieldView::__get__text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x150>(this);
}
constexpr void HMUI::InputFieldView::__set__hasKeyboardAssigned(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x158>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::InputFieldView::__get__hasKeyboardAssigned()  {
return ::cordl_internals::getInstanceField<bool, 0x158>(this);
}
constexpr bool const& HMUI::InputFieldView::__get__hasKeyboardAssigned() const {
return ::cordl_internals::getInstanceField<bool, 0x158>(this);
}
constexpr void HMUI::InputFieldView::__set__buttonBinder(::HMUI::ButtonBinder*  value)  {
::cordl_internals::setInstanceField<::HMUI::ButtonBinder*, 0x160>(this, std::forward<::HMUI::ButtonBinder*>(value));
}
constexpr ::HMUI::ButtonBinder* HMUI::InputFieldView::__get__buttonBinder()  {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder*, 0x160>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> HMUI::InputFieldView::__get__buttonBinder() const {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder*, 0x160>(this);
}
constexpr void HMUI::InputFieldView::__set__onValueChanged(::HMUI::__InputFieldView__InputFieldChanged*  value)  {
::cordl_internals::setInstanceField<::HMUI::__InputFieldView__InputFieldChanged*, 0x168>(this, std::forward<::HMUI::__InputFieldView__InputFieldChanged*>(value));
}
constexpr ::HMUI::__InputFieldView__InputFieldChanged* HMUI::InputFieldView::__get__onValueChanged()  {
return ::cordl_internals::getInstanceField<::HMUI::__InputFieldView__InputFieldChanged*, 0x168>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__InputFieldView__InputFieldChanged*> HMUI::InputFieldView::__get__onValueChanged() const {
return ::cordl_internals::getInstanceField<::HMUI::__InputFieldView__InputFieldChanged*, 0x168>(this);
}
constexpr void HMUI::InputFieldView::__set__blinkWaitYieldInstruction(::UnityEngine::YieldInstruction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::YieldInstruction*, 0x170>(this, std::forward<::UnityEngine::YieldInstruction*>(value));
}
constexpr ::UnityEngine::YieldInstruction* HMUI::InputFieldView::__get__blinkWaitYieldInstruction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::YieldInstruction*, 0x170>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::YieldInstruction*> HMUI::InputFieldView::__get__blinkWaitYieldInstruction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::YieldInstruction*, 0x170>(this);
}
inline ::HMUI::__InputFieldView__SelectionState HMUI::InputFieldView::get_selectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__InputFieldView__SelectionState, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 HMUI::InputFieldView::get_keyboardPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_keyboardPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::InputFieldView::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::__InputFieldView__SelectionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__InputFieldView__SelectionState>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::HMUI::__InputFieldView__InputFieldChanged* HMUI::InputFieldView::get_onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::__InputFieldView__InputFieldChanged*, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::set_onValueChanged(::HMUI::__InputFieldView__InputFieldChanged*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__InputFieldChanged*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HMUI::InputFieldView::get_useGlobalKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_useGlobalKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW HMUI::InputFieldView::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::InputFieldView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, instant);
}
inline void HMUI::InputFieldView::ActivateKeyboard(::HMUI::UIKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "ActivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::DeactivateKeyboard(::HMUI::UIKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "DeactivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::SetText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::InputFieldView::ClearInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "ClearInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::KeyboardKeyPressed(char16_t  letter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "KeyboardKeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, letter);
}
inline void HMUI::InputFieldView::KeyboardDeletePressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "KeyboardDeletePressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HMUI::InputFieldView::BlinkingCaretCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "BlinkingCaretCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateCaretPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "UpdateCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdatePlaceholder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "UpdatePlaceholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateClearButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "UpdateClearButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HMUI::InputFieldView* HMUI::InputFieldView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::InputFieldView*>());
}
inline void HMUI::InputFieldView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::InputFieldView::_Awake_b__34_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                            "<Awake>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__InputFieldView__InputFieldChanged._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView__InputFieldChanged::*)()>(&::HMUI::__InputFieldView__InputFieldChanged::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21415a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView__InputFieldChanged*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::HMUI::__InputFieldView__InputFieldChanged* HMUI::__InputFieldView__InputFieldChanged::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__InputFieldView__InputFieldChanged*>());
}
inline void HMUI::__InputFieldView__InputFieldChanged::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView__InputFieldChanged*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)(int32_t)>(&::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2141440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2141670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2141674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2141700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2141708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2141748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__set___4__this(::HMUI::InputFieldView*  value)  {
::cordl_internals::setInstanceField<::HMUI::InputFieldView*, 0x20>(this, std::forward<::HMUI::InputFieldView*>(value));
}
constexpr ::HMUI::InputFieldView* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___4__this()  {
return ::cordl_internals::getInstanceField<::HMUI::InputFieldView*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::InputFieldView*, 0x20>(this);
}
inline ::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>(__1__state));
}
inline void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__InputFieldView___BlinkingCaretCoroutine_d__43*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
