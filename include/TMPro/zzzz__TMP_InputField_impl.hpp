#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "TMPro/zzzz__TMP_ScrollbarEventHandler_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "TMPro/zzzz__TMP_InputValidator_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
constexpr void TMPro::__TMP_InputField__ContentType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_InputField__ContentType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::__TMP_InputField__ContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__ContentType::__TMP_InputField__ContentType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::Standard{static_cast<int32_t>(0x0)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::Autocorrected{static_cast<int32_t>(0x1)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::IntegerNumber{static_cast<int32_t>(0x2)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::DecimalNumber{static_cast<int32_t>(0x3)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::Alphanumeric{static_cast<int32_t>(0x4)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::Name{static_cast<int32_t>(0x5)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::EmailAddress{static_cast<int32_t>(0x6)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::Password{static_cast<int32_t>(0x7)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::Pin{static_cast<int32_t>(0x8)};
constexpr ::TMPro::__TMP_InputField__ContentType  TMPro::__TMP_InputField__ContentType::Custom{static_cast<int32_t>(0x9)};
constexpr void TMPro::__TMP_InputField__InputType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_InputField__InputType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::__TMP_InputField__InputType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__InputType::__TMP_InputField__InputType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::__TMP_InputField__InputType  TMPro::__TMP_InputField__InputType::Standard{static_cast<int32_t>(0x0)};
constexpr ::TMPro::__TMP_InputField__InputType  TMPro::__TMP_InputField__InputType::AutoCorrect{static_cast<int32_t>(0x1)};
constexpr ::TMPro::__TMP_InputField__InputType  TMPro::__TMP_InputField__InputType::Password{static_cast<int32_t>(0x2)};
constexpr void TMPro::__TMP_InputField__CharacterValidation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_InputField__CharacterValidation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::__TMP_InputField__CharacterValidation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__CharacterValidation::__TMP_InputField__CharacterValidation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::None{static_cast<int32_t>(0x0)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::Digit{static_cast<int32_t>(0x1)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::Integer{static_cast<int32_t>(0x2)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::Decimal{static_cast<int32_t>(0x3)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::Alphanumeric{static_cast<int32_t>(0x4)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::Name{static_cast<int32_t>(0x5)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::Regex{static_cast<int32_t>(0x6)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::EmailAddress{static_cast<int32_t>(0x7)};
constexpr ::TMPro::__TMP_InputField__CharacterValidation  TMPro::__TMP_InputField__CharacterValidation::CustomValidator{static_cast<int32_t>(0x8)};
constexpr void TMPro::__TMP_InputField__LineType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_InputField__LineType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::__TMP_InputField__LineType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__LineType::__TMP_InputField__LineType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::__TMP_InputField__LineType  TMPro::__TMP_InputField__LineType::SingleLine{static_cast<int32_t>(0x0)};
constexpr ::TMPro::__TMP_InputField__LineType  TMPro::__TMP_InputField__LineType::MultiLineSubmit{static_cast<int32_t>(0x1)};
constexpr ::TMPro::__TMP_InputField__LineType  TMPro::__TMP_InputField__LineType::MultiLineNewline{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__OnValidateInput::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::TMPro::__TMP_InputField__OnValidateInput::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c38eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::__TMP_InputField__OnValidateInput::*)(::StringW, int32_t, char16_t)>(&::TMPro::__TMP_InputField__OnValidateInput::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c38fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::TMPro::__TMP_InputField__OnValidateInput::*)(::StringW, int32_t, char16_t, ::System::AsyncCallback*, ::System::Object*)>(&::TMPro::__TMP_InputField__OnValidateInput::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c38fd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnValidateInput.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::__TMP_InputField__OnValidateInput::*)(::System::IAsyncResult*)>(&::TMPro::__TMP_InputField__OnValidateInput::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c39098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__OnValidateInput* TMPro::__TMP_InputField__OnValidateInput::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField__OnValidateInput*>(object, method));
}
inline void TMPro::__TMP_InputField__OnValidateInput::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline char16_t TMPro::__TMP_InputField__OnValidateInput::Invoke(::StringW  text, int32_t  charIndex, char16_t  addedChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method, text, charIndex, addedChar);
}
inline ::System::IAsyncResult* TMPro::__TMP_InputField__OnValidateInput::BeginInvoke(::StringW  text, int32_t  charIndex, char16_t  addedChar, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, text, charIndex, addedChar, callback, object);
}
inline char16_t TMPro::__TMP_InputField__OnValidateInput::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnValidateInput*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::TMPro::__TMP_InputField__SubmitEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__SubmitEvent::*)()>(&::TMPro::__TMP_InputField__SubmitEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c390c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SubmitEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__SubmitEvent* TMPro::__TMP_InputField__SubmitEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField__SubmitEvent*>());
}
inline void TMPro::__TMP_InputField__SubmitEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SubmitEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TMPro::__TMP_InputField__OnChangeEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__OnChangeEvent::*)()>(&::TMPro::__TMP_InputField__OnChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c39108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnChangeEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__OnChangeEvent* TMPro::__TMP_InputField__OnChangeEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField__OnChangeEvent*>());
}
inline void TMPro::__TMP_InputField__OnChangeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__OnChangeEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TMPro::__TMP_InputField__SelectionEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__SelectionEvent::*)()>(&::TMPro::__TMP_InputField__SelectionEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c39150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SelectionEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__SelectionEvent* TMPro::__TMP_InputField__SelectionEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField__SelectionEvent*>());
}
inline void TMPro::__TMP_InputField__SelectionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__SelectionEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TMPro::__TMP_InputField__TextSelectionEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__TextSelectionEvent::*)()>(&::TMPro::__TMP_InputField__TextSelectionEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c39198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TextSelectionEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::__TMP_InputField__TextSelectionEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField__TextSelectionEvent*>());
}
inline void TMPro::__TMP_InputField__TextSelectionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TextSelectionEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField__TouchScreenKeyboardEvent::*)()>(&::TMPro::__TMP_InputField__TouchScreenKeyboardEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c391e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* TMPro::__TMP_InputField__TouchScreenKeyboardEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>());
}
inline void TMPro::__TMP_InputField__TouchScreenKeyboardEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void TMPro::__TMP_InputField__EditState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_InputField__EditState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::__TMP_InputField__EditState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::__TMP_InputField__EditState::__TMP_InputField__EditState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TMPro::__TMP_InputField__EditState  TMPro::__TMP_InputField__EditState::Continue{static_cast<int32_t>(0x0)};
constexpr ::TMPro::__TMP_InputField__EditState  TMPro::__TMP_InputField__EditState::Finish{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___CaretBlink_d__276::*)(int32_t)>(&::TMPro::__TMP_InputField___CaretBlink_d__276::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c39228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::__TMP_InputField___CaretBlink_d__276::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c39250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::__TMP_InputField___CaretBlink_d__276::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2c39254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c39360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c39368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___CaretBlink_d__276.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c393a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  TMPro::__TMP_InputField___CaretBlink_d__276::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  TMPro::__TMP_InputField___CaretBlink_d__276::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  TMPro::__TMP_InputField___CaretBlink_d__276::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void TMPro::__TMP_InputField___CaretBlink_d__276::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_InputField___CaretBlink_d__276::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& TMPro::__TMP_InputField___CaretBlink_d__276::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void TMPro::__TMP_InputField___CaretBlink_d__276::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* TMPro::__TMP_InputField___CaretBlink_d__276::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> TMPro::__TMP_InputField___CaretBlink_d__276::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void TMPro::__TMP_InputField___CaretBlink_d__276::__set___4__this(::TMPro::TMP_InputField*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_InputField*, 0x20>(this, std::forward<::TMPro::TMP_InputField*>(value));
}
constexpr ::TMPro::TMP_InputField* TMPro::__TMP_InputField___CaretBlink_d__276::__get___4__this()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputField*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_InputField*> TMPro::__TMP_InputField___CaretBlink_d__276::__get___4__this() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputField*, 0x20>(this);
}
inline ::TMPro::__TMP_InputField___CaretBlink_d__276* TMPro::__TMP_InputField___CaretBlink_d__276::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField___CaretBlink_d__276*>(__1__state));
}
inline void TMPro::__TMP_InputField___CaretBlink_d__276::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void TMPro::__TMP_InputField___CaretBlink_d__276::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool TMPro::__TMP_InputField___CaretBlink_d__276::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___CaretBlink_d__276*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)(int32_t)>(&::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c393b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c393d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2c393dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c39630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c39638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c39678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__set___4__this(::TMPro::TMP_InputField*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_InputField*, 0x20>(this, std::forward<::TMPro::TMP_InputField*>(value));
}
constexpr ::TMPro::TMP_InputField* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get___4__this()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputField*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_InputField*> TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get___4__this() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputField*, 0x20>(this);
}
constexpr void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__set_eventData(::UnityEngine::EventSystems::PointerEventData*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x28>(this, std::forward<::UnityEngine::EventSystems::PointerEventData*>(value));
}
constexpr ::UnityEngine::EventSystems::PointerEventData* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get_eventData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::__get_eventData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x28>(this);
}
inline ::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>(__1__state));
}
inline void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* TMPro::__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_InputField___MouseDragOutsideRect_d__294*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseInput* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputSystem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2c1235c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_inputSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_compositionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_compositionString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c1246c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_compositionLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_compositionLength)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c12500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_compositionLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2c1252c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_mesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c12850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c128f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c12940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_shouldHideSoftKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_shouldHideSoftKeyboard)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c129cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_shouldHideSoftKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_shouldHideSoftKeyboard)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c12a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.isKeyboardUsingEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::isKeyboardUsingEvents)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c12b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "isKeyboardUsingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c12bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c12bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c12d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW, bool)>(&::TMPro::TMP_InputField::SetText)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2c12bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_isFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1328c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretBlinkRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_caretBlinkRate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c1329c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1336c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretWidth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c13374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_textViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_textViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_textViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::RectTransform*)>(&::TMPro::TMP_InputField::set_textViewport)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c03528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Text* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_textComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_InputField::set_textComponent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c03580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Graphic* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_placeholder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::Graphic*)>(&::TMPro::TMP_InputField::set_placeholder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c035f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_verticalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Scrollbar* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_verticalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::Scrollbar*)>(&::TMPro::TMP_InputField::set_verticalScrollbar)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2c13460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_scrollSensitivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_scrollSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_scrollSensitivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_scrollSensitivity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c13620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretColor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c13694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Color)>(&::TMPro::TMP_InputField::set_caretColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c136d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_customCaretColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_customCaretColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c1370c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c13728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Color)>(&::TMPro::TMP_InputField::set_selectionColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c1373c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SubmitEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onEndEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SubmitEvent*)>(&::TMPro::TMP_InputField::set_onEndEdit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c13770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SubmitEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c137c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SubmitEvent*)>(&::TMPro::TMP_InputField::set_onSubmit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c137d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SelectionEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SelectionEvent*)>(&::TMPro::TMP_InputField::set_onSelect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c13830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__SelectionEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__SelectionEvent*)>(&::TMPro::TMP_InputField::set_onDeselect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c13890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__TextSelectionEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onTextSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c138e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__TextSelectionEvent*)>(&::TMPro::TMP_InputField::set_onTextSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c138f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onEndTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__TextSelectionEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onEndTextSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onEndTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__TextSelectionEvent*)>(&::TMPro::TMP_InputField::set_onEndTextSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c13950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__OnChangeEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c139a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__OnChangeEvent*)>(&::TMPro::TMP_InputField::set_onValueChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c139b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnChangeEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onTouchScreenKeyboardStatusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onTouchScreenKeyboardStatusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*)>(&::TMPro::TMP_InputField::set_onTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c13a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__OnValidateInput* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onValidateInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__OnValidateInput*)>(&::TMPro::TMP_InputField::set_onValidateInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c13a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnValidateInput*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_characterLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_characterLimit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c13ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_pointSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_pointSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_pointSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_pointSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c13b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_fontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_fontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_fontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_InputField::set_fontAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c0364c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onFocusSelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onFocusSelectAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onFocusSelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_onFocusSelectAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c13e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_resetOnDeActivation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_resetOnDeActivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_resetOnDeActivation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_resetOnDeActivation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c13e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_restoreOriginalTextOnEscape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_restoreOriginalTextOnEscape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_restoreOriginalTextOnEscape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_restoreOriginalTextOnEscape)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c13e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_isRichTextEditingAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_isRichTextEditingAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_isRichTextEditingAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_isRichTextEditingAllowed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c13e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__ContentType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__ContentType)>(&::TMPro::TMP_InputField::set_contentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c13e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__ContentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__LineType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c13fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__LineType)>(&::TMPro::TMP_InputField::set_lineType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c13fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__LineType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_lineLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_lineLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c140c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_lineLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_lineLimit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c140cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__InputType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c14138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__InputType)>(&::TMPro::TMP_InputField::set_inputType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c14140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__InputType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboardType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_keyboardType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c141dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::TouchScreenKeyboardType)>(&::TMPro::TMP_InputField::set_keyboardType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c141e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__CharacterValidation (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_characterValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c14268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__CharacterValidation)>(&::TMPro::TMP_InputField::set_characterValidation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c14270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_InputValidator* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c142f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_inputValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_InputValidator*)>(&::TMPro::TMP_InputField::set_inputValidator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c142fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_InputValidator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_readOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c14398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_readOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c143a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_richText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_richText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c143ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_richText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_richText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c143b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_multiLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_multiLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c14448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_asteriskChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1445c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::set_asteriskChar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c14464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_wasCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_wasCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c144d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ClampStringPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(ByRef<int32_t>)>(&::TMPro::TMP_InputField::ClampStringPos)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c144e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ClampStringPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ClampCaretPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(ByRef<int32_t>)>(&::TMPro::TMP_InputField::ClampCaretPos)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c14518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ClampCaretPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1455c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretPositionInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c14574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c14584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c1459c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c145d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c145ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringSelectPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c145fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringSelectPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c14614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_hasSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_hasSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c1464c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c14688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c146a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1474c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c146d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c14764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c14710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1477c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c14794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionStringAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionStringAnchorPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c14878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionStringAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionStringAnchorPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c147c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionStringFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionStringFocusPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c14890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionStringFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionStringFocusPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c14820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnEnable)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x2c148a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnDisable)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2c154cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ON_TEXT_CHANGED
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Object*)>(&::TMPro::TMP_InputField::ON_TEXT_CHANGED)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c159b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ON_TEXT_CHANGED",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CaretBlink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CaretBlink)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c15c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetCaretVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetCaretVisible)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c15c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetCaretActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetCaretActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c13318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c15cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SelectAll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c15cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveTextEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveTextEnd)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2c15d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveTextStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveTextStart)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2c15eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveToEndOfLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveToEndOfLine)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2c15fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveToEndOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveToStartOfLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveToStartOfLine)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2c16168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveToStartOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_InputField::get_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c162f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::TMPro::TMP_InputField::set_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c16300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.InPlaceEditing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::InPlaceEditing)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2c16308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateStringPositionFromKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateStringPositionFromKeyboard)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2c163cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateStringPositionFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::LateUpdate)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x2c16514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MayDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::MayDrag)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c17808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::OnBeginDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c1790c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::OnDrag)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2c1792c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MouseDragOutsideRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::MouseDragOutsideRect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c17bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnEndDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::OnEndDrag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c17c2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::OnPointerDown)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x2c17c48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.KeyPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::__TMP_InputField__EditState (::TMPro::TMP_InputField::*)(::UnityEngine::Event*)>(&::TMPro::TMP_InputField::KeyPressed)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2c18378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.IsValidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::IsValidChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c197a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ProcessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Event*)>(&::TMPro::TMP_InputField::ProcessEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c197c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnUpdateSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::TMPro::TMP_InputField::OnUpdateSelected)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2c197cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::OnScroll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2c199c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetScrollPositionRelativeToViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GetScrollPositionRelativeToViewport)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2c19b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetScrollPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetSelectedString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GetSelectedString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c18d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.FindNextWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::FindNextWordBegin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2c19e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "FindNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveRight)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2c1937c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.FindPrevWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::FindPrevWordBegin)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2c19f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "FindPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveLeft)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2c18fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LineUpCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2c19ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LineDownCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2c1a144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.PageUpCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::PageUpCharacterPosition)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2c1a290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "PageUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.PageDownCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::PageDownCharacterPosition)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2c1a49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "PageDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c19784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveDown)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2c1a6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c19778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveUp)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2c1a86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MovePageUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c19790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MovePageUp)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2c1aa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MovePageDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1979c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MovePageDown)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2c1ad04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::Delete)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2c18df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DeleteKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::DeleteKey)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2c18b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "DeleteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Backspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::Backspace)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2c1878c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::Append)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c1b000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::Append)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2c1b0b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::Insert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2c1b2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateTouchKeyboardFromEditChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateTouchKeyboardFromEditChanges)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c18f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnValueChangedAndUpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnValueChangedAndUpdateLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c177f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnValueChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c13230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnEndEdit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c1b3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnSubmit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c1996c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnFocus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c1b448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnFocusLost)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c1b4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnTextSelection)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c1b500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnEndTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnEndTextSelection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c1b5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendTouchScreenKeyboardStatusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c16fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateLabel)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2c12d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateScrollbar)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2c15b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnScrollbarValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::OnScrollbarValueChange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c1b644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnScrollbarValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateMaskRegions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateMaskRegions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c154c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateMaskRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AdjustTextPositionRelativeToViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::AdjustTextPositionRelativeToViewport)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2c19c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "AdjustTextPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetCaretPositionFromStringIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c15acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetMinCaretPositionFromStringIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetMinCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c1b680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetMinCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetMaxCaretPositionFromStringIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetMaxCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c1b6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetMaxCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetStringIndexFromCaretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetStringIndexFromCaretPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c15e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetStringIndexFromCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ForceLabelUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ForceLabelUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c1b764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MarkGeometryAsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::MarkGeometryAsDirty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c133e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::CanvasUpdate)>(&::TMPro::TMP_InputField::Rebuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c1b768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c1b82c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c1b830;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateGeometry)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c1b778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AssignPositioningIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::AssignPositioningIfNeeded)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2c14fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnFillVBO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Mesh*)>(&::TMPro::TMP_InputField::OnFillVBO)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2c1b834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GenerateCaret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(&::TMPro::TMP_InputField::GenerateCaret)> {
  constexpr static std::size_t size = 0xfe4;
  constexpr static std::size_t addrs = 0x2c1bb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CreateCursorVerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CreateCursorVerts)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2c1d42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GenerateHightlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(&::TMPro::TMP_InputField::GenerateHightlight)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x2c1cb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GenerateHightlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AdjustRectTransformRelativeToViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Vector2, float_t, bool)>(&::TMPro::TMP_InputField::AdjustRectTransformRelativeToViewport)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x2c1d57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "AdjustRectTransformRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::TMP_InputField::*)(::StringW, int32_t, char16_t)>(&::TMPro::TMP_InputField::Validate)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x2c1701c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ActivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ActivateInputField)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c1daac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ActivateInputFieldInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ActivateInputFieldInternal)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x2c16b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::TMPro::TMP_InputField::OnSelect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c1dbc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::TMPro::TMP_InputField::OnPointerClick)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c1dbe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnControlClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnControlClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c1dc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnControlClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ReleaseSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ReleaseSelection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c16f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ReleaseSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DeactivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::DeactivateInputField)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2c157fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::TMPro::TMP_InputField::OnDeselect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c1dc0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::TMPro::TMP_InputField::OnSubmit)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c1dc44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.EnforceContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::EnforceContentType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c13ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextComponentWrapMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetTextComponentWrapMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2c127bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetTextComponentWrapMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextComponentRichTextMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetTextComponentRichTextMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c143c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetTextComponentRichTextMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustomIfContentTypeIsNot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::ArrayW<::TMPro::__TMP_InputField__ContentType,::Array<::TMPro::__TMP_InputField__ContentType>*>)>(&::TMPro::TMP_InputField::SetToCustomIfContentTypeIsNot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c1406c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::__TMP_InputField__ContentType,::Array<::TMPro::__TMP_InputField__ContentType>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c141c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::__TMP_InputField__CharacterValidation)>(&::TMPro::TMP_InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c14380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(&::TMPro::TMP_InputField::DoStateTransition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c1dc98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CalculateLayoutInputHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c1dcc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CalculateLayoutInputVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c1dcc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_minWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1dccc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_preferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_preferredWidth)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c1dcd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  77
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_flexibleWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1de04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  78
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_minHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1de0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_preferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_preferredHeight)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c1de14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  80
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_flexibleHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1df44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_layoutPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1df4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                                  82
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetGlobalPointSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::SetGlobalPointSize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c13c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetGlobalPointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetGlobalFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_InputField::SetGlobalFontAsset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c13d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetGlobalFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1dfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr  TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
constexpr void TMPro::TMP_InputField::__set_m_SoftKeyboard(::UnityEngine::TouchScreenKeyboard*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TouchScreenKeyboard*, 0xf8>(this, std::forward<::UnityEngine::TouchScreenKeyboard*>(value));
}
constexpr ::UnityEngine::TouchScreenKeyboard* TMPro::TMP_InputField::__get_m_SoftKeyboard()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboard*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> TMPro::TMP_InputField::__get_m_SoftKeyboard() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboard*, 0xf8>(this);
}
inline void TMPro::TMP_InputField::setStaticF_kSeparators(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> TMPro::TMP_InputField::getStaticF_kSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get>();
}
constexpr void TMPro::TMP_InputField::__set_m_RectTransform(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x100>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* TMPro::TMP_InputField::__get_m_RectTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> TMPro::TMP_InputField::__get_m_RectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x100>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_TextViewport(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x108>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* TMPro::TMP_InputField::__get_m_TextViewport()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> TMPro::TMP_InputField::__get_m_TextViewport() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x108>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_TextComponentRectMask(::UnityEngine::UI::RectMask2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::RectMask2D*, 0x110>(this, std::forward<::UnityEngine::UI::RectMask2D*>(value));
}
constexpr ::UnityEngine::UI::RectMask2D* TMPro::TMP_InputField::__get_m_TextComponentRectMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::RectMask2D*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::RectMask2D*> TMPro::TMP_InputField::__get_m_TextComponentRectMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::RectMask2D*, 0x110>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_TextViewportRectMask(::UnityEngine::UI::RectMask2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::RectMask2D*, 0x118>(this, std::forward<::UnityEngine::UI::RectMask2D*>(value));
}
constexpr ::UnityEngine::UI::RectMask2D* TMPro::TMP_InputField::__get_m_TextViewportRectMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::RectMask2D*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::RectMask2D*> TMPro::TMP_InputField::__get_m_TextViewportRectMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::RectMask2D*, 0x118>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CachedViewportRect(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x120>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& TMPro::TMP_InputField::__get_m_CachedViewportRect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x120>(this);
}
constexpr ::UnityEngine::Rect const& TMPro::TMP_InputField::__get_m_CachedViewportRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x120>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_TextComponent(::TMPro::TMP_Text*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Text*, 0x130>(this, std::forward<::TMPro::TMP_Text*>(value));
}
constexpr ::TMPro::TMP_Text* TMPro::TMP_InputField::__get_m_TextComponent()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> TMPro::TMP_InputField::__get_m_TextComponent() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text*, 0x130>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_TextComponentRectTransform(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x138>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* TMPro::TMP_InputField::__get_m_TextComponentRectTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> TMPro::TMP_InputField::__get_m_TextComponentRectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x138>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_Placeholder(::UnityEngine::UI::Graphic*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Graphic*, 0x140>(this, std::forward<::UnityEngine::UI::Graphic*>(value));
}
constexpr ::UnityEngine::UI::Graphic* TMPro::TMP_InputField::__get_m_Placeholder()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> TMPro::TMP_InputField::__get_m_Placeholder() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic*, 0x140>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_VerticalScrollbar(::UnityEngine::UI::Scrollbar*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Scrollbar*, 0x148>(this, std::forward<::UnityEngine::UI::Scrollbar*>(value));
}
constexpr ::UnityEngine::UI::Scrollbar* TMPro::TMP_InputField::__get_m_VerticalScrollbar()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Scrollbar*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Scrollbar*> TMPro::TMP_InputField::__get_m_VerticalScrollbar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Scrollbar*, 0x148>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_VerticalScrollbarEventHandler(::TMPro::TMP_ScrollbarEventHandler*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_ScrollbarEventHandler*, 0x150>(this, std::forward<::TMPro::TMP_ScrollbarEventHandler*>(value));
}
constexpr ::TMPro::TMP_ScrollbarEventHandler* TMPro::TMP_InputField::__get_m_VerticalScrollbarEventHandler()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_ScrollbarEventHandler*, 0x150>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_ScrollbarEventHandler*> TMPro::TMP_InputField::__get_m_VerticalScrollbarEventHandler() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_ScrollbarEventHandler*, 0x150>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_IsDrivenByLayoutComponents(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x158>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_IsDrivenByLayoutComponents()  {
return ::cordl_internals::getInstanceField<bool, 0x158>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_IsDrivenByLayoutComponents() const {
return ::cordl_internals::getInstanceField<bool, 0x158>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_LayoutGroup(::UnityEngine::UI::LayoutGroup*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::LayoutGroup*, 0x160>(this, std::forward<::UnityEngine::UI::LayoutGroup*>(value));
}
constexpr ::UnityEngine::UI::LayoutGroup* TMPro::TMP_InputField::__get_m_LayoutGroup()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::LayoutGroup*, 0x160>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::LayoutGroup*> TMPro::TMP_InputField::__get_m_LayoutGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::LayoutGroup*, 0x160>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_IScrollHandlerParent(::UnityEngine::EventSystems::IScrollHandler*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::IScrollHandler*, 0x168>(this, std::forward<::UnityEngine::EventSystems::IScrollHandler*>(value));
}
constexpr ::UnityEngine::EventSystems::IScrollHandler* TMPro::TMP_InputField::__get_m_IScrollHandlerParent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::IScrollHandler*, 0x168>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::IScrollHandler*> TMPro::TMP_InputField::__get_m_IScrollHandlerParent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::IScrollHandler*, 0x168>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ScrollPosition(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x170>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_ScrollPosition()  {
return ::cordl_internals::getInstanceField<float_t, 0x170>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_ScrollPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x170>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ScrollSensitivity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x174>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_ScrollSensitivity()  {
return ::cordl_internals::getInstanceField<float_t, 0x174>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_ScrollSensitivity() const {
return ::cordl_internals::getInstanceField<float_t, 0x174>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ContentType(::TMPro::__TMP_InputField__ContentType  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__ContentType, 0x178>(this, std::forward<::TMPro::__TMP_InputField__ContentType>(value));
}
constexpr ::TMPro::__TMP_InputField__ContentType& TMPro::TMP_InputField::__get_m_ContentType()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__ContentType, 0x178>(this);
}
constexpr ::TMPro::__TMP_InputField__ContentType const& TMPro::TMP_InputField::__get_m_ContentType() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__ContentType, 0x178>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_InputType(::TMPro::__TMP_InputField__InputType  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__InputType, 0x17c>(this, std::forward<::TMPro::__TMP_InputField__InputType>(value));
}
constexpr ::TMPro::__TMP_InputField__InputType& TMPro::TMP_InputField::__get_m_InputType()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__InputType, 0x17c>(this);
}
constexpr ::TMPro::__TMP_InputField__InputType const& TMPro::TMP_InputField::__get_m_InputType() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__InputType, 0x17c>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_AsteriskChar(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x180>(this, std::forward<char16_t>(value));
}
constexpr char16_t& TMPro::TMP_InputField::__get_m_AsteriskChar()  {
return ::cordl_internals::getInstanceField<char16_t, 0x180>(this);
}
constexpr char16_t const& TMPro::TMP_InputField::__get_m_AsteriskChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0x180>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x184>(this, std::forward<::UnityEngine::TouchScreenKeyboardType>(value));
}
constexpr ::UnityEngine::TouchScreenKeyboardType& TMPro::TMP_InputField::__get_m_KeyboardType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x184>(this);
}
constexpr ::UnityEngine::TouchScreenKeyboardType const& TMPro::TMP_InputField::__get_m_KeyboardType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x184>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_LineType(::TMPro::__TMP_InputField__LineType  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__LineType, 0x188>(this, std::forward<::TMPro::__TMP_InputField__LineType>(value));
}
constexpr ::TMPro::__TMP_InputField__LineType& TMPro::TMP_InputField::__get_m_LineType()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__LineType, 0x188>(this);
}
constexpr ::TMPro::__TMP_InputField__LineType const& TMPro::TMP_InputField::__get_m_LineType() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__LineType, 0x188>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_HideMobileInput(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18c>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_HideMobileInput()  {
return ::cordl_internals::getInstanceField<bool, 0x18c>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_HideMobileInput() const {
return ::cordl_internals::getInstanceField<bool, 0x18c>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_HideSoftKeyboard(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18d>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_HideSoftKeyboard()  {
return ::cordl_internals::getInstanceField<bool, 0x18d>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_HideSoftKeyboard() const {
return ::cordl_internals::getInstanceField<bool, 0x18d>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CharacterValidation(::TMPro::__TMP_InputField__CharacterValidation  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__CharacterValidation, 0x190>(this, std::forward<::TMPro::__TMP_InputField__CharacterValidation>(value));
}
constexpr ::TMPro::__TMP_InputField__CharacterValidation& TMPro::TMP_InputField::__get_m_CharacterValidation()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__CharacterValidation, 0x190>(this);
}
constexpr ::TMPro::__TMP_InputField__CharacterValidation const& TMPro::TMP_InputField::__get_m_CharacterValidation() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__CharacterValidation, 0x190>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_RegexValue(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x198>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_InputField::__get_m_RegexValue()  {
return ::cordl_internals::getInstanceField<::StringW, 0x198>(this);
}
constexpr ::StringW const& TMPro::TMP_InputField::__get_m_RegexValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x198>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_GlobalPointSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1a0>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_GlobalPointSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x1a0>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_GlobalPointSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x1a0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CharacterLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1a4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_CharacterLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1a4>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_CharacterLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1a4>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnEndEdit(::TMPro::__TMP_InputField__SubmitEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__SubmitEvent*, 0x1a8>(this, std::forward<::TMPro::__TMP_InputField__SubmitEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__SubmitEvent* TMPro::TMP_InputField::__get_m_OnEndEdit()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SubmitEvent*, 0x1a8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> TMPro::TMP_InputField::__get_m_OnEndEdit() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SubmitEvent*, 0x1a8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnSubmit(::TMPro::__TMP_InputField__SubmitEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__SubmitEvent*, 0x1b0>(this, std::forward<::TMPro::__TMP_InputField__SubmitEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__SubmitEvent* TMPro::TMP_InputField::__get_m_OnSubmit()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SubmitEvent*, 0x1b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SubmitEvent*> TMPro::TMP_InputField::__get_m_OnSubmit() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SubmitEvent*, 0x1b0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnSelect(::TMPro::__TMP_InputField__SelectionEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__SelectionEvent*, 0x1b8>(this, std::forward<::TMPro::__TMP_InputField__SelectionEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__SelectionEvent* TMPro::TMP_InputField::__get_m_OnSelect()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SelectionEvent*, 0x1b8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> TMPro::TMP_InputField::__get_m_OnSelect() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SelectionEvent*, 0x1b8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnDeselect(::TMPro::__TMP_InputField__SelectionEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__SelectionEvent*, 0x1c0>(this, std::forward<::TMPro::__TMP_InputField__SelectionEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__SelectionEvent* TMPro::TMP_InputField::__get_m_OnDeselect()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SelectionEvent*, 0x1c0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__SelectionEvent*> TMPro::TMP_InputField::__get_m_OnDeselect() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__SelectionEvent*, 0x1c0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__TextSelectionEvent*, 0x1c8>(this, std::forward<::TMPro::__TMP_InputField__TextSelectionEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::TMP_InputField::__get_m_OnTextSelection()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__TextSelectionEvent*, 0x1c8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> TMPro::TMP_InputField::__get_m_OnTextSelection() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__TextSelectionEvent*, 0x1c8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__TextSelectionEvent*, 0x1d0>(this, std::forward<::TMPro::__TMP_InputField__TextSelectionEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::TMP_InputField::__get_m_OnEndTextSelection()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__TextSelectionEvent*, 0x1d0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TextSelectionEvent*> TMPro::TMP_InputField::__get_m_OnEndTextSelection() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__TextSelectionEvent*, 0x1d0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnValueChanged(::TMPro::__TMP_InputField__OnChangeEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__OnChangeEvent*, 0x1d8>(this, std::forward<::TMPro::__TMP_InputField__OnChangeEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__OnChangeEvent* TMPro::TMP_InputField::__get_m_OnValueChanged()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__OnChangeEvent*, 0x1d8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnChangeEvent*> TMPro::TMP_InputField::__get_m_OnValueChanged() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__OnChangeEvent*, 0x1d8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*, 0x1e0>(this, std::forward<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>(value));
}
constexpr ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* TMPro::TMP_InputField::__get_m_OnTouchScreenKeyboardStatusChanged()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*, 0x1e0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*> TMPro::TMP_InputField::__get_m_OnTouchScreenKeyboardStatusChanged() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*, 0x1e0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnValidateInput(::TMPro::__TMP_InputField__OnValidateInput*  value)  {
::cordl_internals::setInstanceField<::TMPro::__TMP_InputField__OnValidateInput*, 0x1e8>(this, std::forward<::TMPro::__TMP_InputField__OnValidateInput*>(value));
}
constexpr ::TMPro::__TMP_InputField__OnValidateInput* TMPro::TMP_InputField::__get_m_OnValidateInput()  {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__OnValidateInput*, 0x1e8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::__TMP_InputField__OnValidateInput*> TMPro::TMP_InputField::__get_m_OnValidateInput() const {
return ::cordl_internals::getInstanceField<::TMPro::__TMP_InputField__OnValidateInput*, 0x1e8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CaretColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x1f0>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& TMPro::TMP_InputField::__get_m_CaretColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x1f0>(this);
}
constexpr ::UnityEngine::Color const& TMPro::TMP_InputField::__get_m_CaretColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x1f0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CustomCaretColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x200>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_CustomCaretColor()  {
return ::cordl_internals::getInstanceField<bool, 0x200>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_CustomCaretColor() const {
return ::cordl_internals::getInstanceField<bool, 0x200>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_SelectionColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x204>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& TMPro::TMP_InputField::__get_m_SelectionColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x204>(this);
}
constexpr ::UnityEngine::Color const& TMPro::TMP_InputField::__get_m_SelectionColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x204>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_Text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x218>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_InputField::__get_m_Text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x218>(this);
}
constexpr ::StringW const& TMPro::TMP_InputField::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x218>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CaretBlinkRate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x220>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_CaretBlinkRate()  {
return ::cordl_internals::getInstanceField<float_t, 0x220>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_CaretBlinkRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x220>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CaretWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x224>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_CaretWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x224>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_CaretWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x224>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ReadOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x228>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_ReadOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x228>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_ReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x228>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_RichText(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x229>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_RichText()  {
return ::cordl_internals::getInstanceField<bool, 0x229>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_RichText() const {
return ::cordl_internals::getInstanceField<bool, 0x229>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_StringPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x22c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_StringPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x22c>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_StringPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x22c>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_StringSelectPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x230>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_StringSelectPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x230>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_StringSelectPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x230>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CaretPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x234>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_CaretPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x234>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_CaretPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x234>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CaretSelectPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x238>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_CaretSelectPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x238>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_CaretSelectPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x238>(this);
}
constexpr void TMPro::TMP_InputField::__set_caretRectTrans(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x240>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* TMPro::TMP_InputField::__get_caretRectTrans()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x240>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> TMPro::TMP_InputField::__get_caretRectTrans() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x240>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>, 0x248>(this, std::forward<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>& TMPro::TMP_InputField::__get_m_CursorVerts()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>, 0x248>(this);
}
constexpr ::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*> const& TMPro::TMP_InputField::__get_m_CursorVerts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>, 0x248>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CachedInputRenderer(::UnityEngine::CanvasRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasRenderer*, 0x250>(this, std::forward<::UnityEngine::CanvasRenderer*>(value));
}
constexpr ::UnityEngine::CanvasRenderer* TMPro::TMP_InputField::__get_m_CachedInputRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasRenderer*, 0x250>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasRenderer*> TMPro::TMP_InputField::__get_m_CachedInputRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasRenderer*, 0x250>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_LastPosition(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x258>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_InputField::__get_m_LastPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x258>(this);
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_InputField::__get_m_LastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x258>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_Mesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x260>(this, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* TMPro::TMP_InputField::__get_m_Mesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x260>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> TMPro::TMP_InputField::__get_m_Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x260>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_AllowInput(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x268>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_AllowInput()  {
return ::cordl_internals::getInstanceField<bool, 0x268>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_AllowInput() const {
return ::cordl_internals::getInstanceField<bool, 0x268>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ShouldActivateNextUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x269>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_ShouldActivateNextUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x269>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_ShouldActivateNextUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x269>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_UpdateDrag(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x26a>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_UpdateDrag()  {
return ::cordl_internals::getInstanceField<bool, 0x26a>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_UpdateDrag() const {
return ::cordl_internals::getInstanceField<bool, 0x26a>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_DragPositionOutOfBounds(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x26b>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_DragPositionOutOfBounds()  {
return ::cordl_internals::getInstanceField<bool, 0x26b>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_DragPositionOutOfBounds() const {
return ::cordl_internals::getInstanceField<bool, 0x26b>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_CaretVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x26c>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_CaretVisible()  {
return ::cordl_internals::getInstanceField<bool, 0x26c>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_CaretVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x26c>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_BlinkCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine*, 0x270>(this, std::forward<::UnityEngine::Coroutine*>(value));
}
constexpr ::UnityEngine::Coroutine* TMPro::TMP_InputField::__get_m_BlinkCoroutine()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x270>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> TMPro::TMP_InputField::__get_m_BlinkCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x270>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_BlinkStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x278>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_BlinkStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x278>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_BlinkStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x278>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_DragCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine*, 0x280>(this, std::forward<::UnityEngine::Coroutine*>(value));
}
constexpr ::UnityEngine::Coroutine* TMPro::TMP_InputField::__get_m_DragCoroutine()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x280>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> TMPro::TMP_InputField::__get_m_DragCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x280>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OriginalText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x288>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_InputField::__get_m_OriginalText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x288>(this);
}
constexpr ::StringW const& TMPro::TMP_InputField::__get_m_OriginalText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x288>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_WasCanceled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x290>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_WasCanceled()  {
return ::cordl_internals::getInstanceField<bool, 0x290>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_WasCanceled() const {
return ::cordl_internals::getInstanceField<bool, 0x290>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_HasDoneFocusTransition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x291>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_HasDoneFocusTransition()  {
return ::cordl_internals::getInstanceField<bool, 0x291>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_HasDoneFocusTransition() const {
return ::cordl_internals::getInstanceField<bool, 0x291>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::WaitForSecondsRealtime*, 0x298>(this, std::forward<::UnityEngine::WaitForSecondsRealtime*>(value));
}
constexpr ::UnityEngine::WaitForSecondsRealtime* TMPro::TMP_InputField::__get_m_WaitForSecondsRealtime()  {
return ::cordl_internals::getInstanceField<::UnityEngine::WaitForSecondsRealtime*, 0x298>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> TMPro::TMP_InputField::__get_m_WaitForSecondsRealtime() const {
return ::cordl_internals::getInstanceField<::UnityEngine::WaitForSecondsRealtime*, 0x298>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_PreventCallback(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a0>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_PreventCallback()  {
return ::cordl_internals::getInstanceField<bool, 0x2a0>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_PreventCallback() const {
return ::cordl_internals::getInstanceField<bool, 0x2a0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_TouchKeyboardAllowsInPlaceEditing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a1>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_TouchKeyboardAllowsInPlaceEditing()  {
return ::cordl_internals::getInstanceField<bool, 0x2a1>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_TouchKeyboardAllowsInPlaceEditing() const {
return ::cordl_internals::getInstanceField<bool, 0x2a1>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_IsTextComponentUpdateRequired(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a2>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_IsTextComponentUpdateRequired()  {
return ::cordl_internals::getInstanceField<bool, 0x2a2>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_IsTextComponentUpdateRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x2a2>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_isLastKeyBackspace(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a3>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_isLastKeyBackspace()  {
return ::cordl_internals::getInstanceField<bool, 0x2a3>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_isLastKeyBackspace() const {
return ::cordl_internals::getInstanceField<bool, 0x2a3>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_PointerDownClickStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2a4>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_PointerDownClickStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x2a4>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_PointerDownClickStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a4>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_KeyDownStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2a8>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_KeyDownStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x2a8>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_KeyDownStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_DoubleClickDelay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2ac>(this, std::forward<float_t>(value));
}
constexpr float_t& TMPro::TMP_InputField::__get_m_DoubleClickDelay()  {
return ::cordl_internals::getInstanceField<float_t, 0x2ac>(this);
}
constexpr float_t const& TMPro::TMP_InputField::__get_m_DoubleClickDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x2ac>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_IsCompositionActive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2b0>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_IsCompositionActive()  {
return ::cordl_internals::getInstanceField<bool, 0x2b0>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_IsCompositionActive() const {
return ::cordl_internals::getInstanceField<bool, 0x2b0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ShouldUpdateIMEWindowPosition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2b1>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_ShouldUpdateIMEWindowPosition()  {
return ::cordl_internals::getInstanceField<bool, 0x2b1>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_ShouldUpdateIMEWindowPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x2b1>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_PreviousIMEInsertionLine(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_PreviousIMEInsertionLine()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2b4>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_PreviousIMEInsertionLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b4>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_GlobalFontAsset(::TMPro::TMP_FontAsset*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset*, 0x2b8>(this, std::forward<::TMPro::TMP_FontAsset*>(value));
}
constexpr ::TMPro::TMP_FontAsset* TMPro::TMP_InputField::__get_m_GlobalFontAsset()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x2b8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_FontAsset*> TMPro::TMP_InputField::__get_m_GlobalFontAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset*, 0x2b8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_OnFocusSelectAll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c0>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_OnFocusSelectAll()  {
return ::cordl_internals::getInstanceField<bool, 0x2c0>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_OnFocusSelectAll() const {
return ::cordl_internals::getInstanceField<bool, 0x2c0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_isSelectAll(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c1>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_isSelectAll()  {
return ::cordl_internals::getInstanceField<bool, 0x2c1>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_isSelectAll() const {
return ::cordl_internals::getInstanceField<bool, 0x2c1>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ResetOnDeActivation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c2>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_ResetOnDeActivation()  {
return ::cordl_internals::getInstanceField<bool, 0x2c2>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_ResetOnDeActivation() const {
return ::cordl_internals::getInstanceField<bool, 0x2c2>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_SelectionStillActive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c3>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_SelectionStillActive()  {
return ::cordl_internals::getInstanceField<bool, 0x2c3>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_SelectionStillActive() const {
return ::cordl_internals::getInstanceField<bool, 0x2c3>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ReleaseSelection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c4>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_ReleaseSelection()  {
return ::cordl_internals::getInstanceField<bool, 0x2c4>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_ReleaseSelection() const {
return ::cordl_internals::getInstanceField<bool, 0x2c4>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_PreviouslySelectedObject(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x2c8>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* TMPro::TMP_InputField::__get_m_PreviouslySelectedObject()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x2c8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> TMPro::TMP_InputField::__get_m_PreviouslySelectedObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x2c8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_RestoreOriginalTextOnEscape(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2d0>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_RestoreOriginalTextOnEscape()  {
return ::cordl_internals::getInstanceField<bool, 0x2d0>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_RestoreOriginalTextOnEscape() const {
return ::cordl_internals::getInstanceField<bool, 0x2d0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_isRichTextEditingAllowed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2d1>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_isRichTextEditingAllowed()  {
return ::cordl_internals::getInstanceField<bool, 0x2d1>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_isRichTextEditingAllowed() const {
return ::cordl_internals::getInstanceField<bool, 0x2d1>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_LineLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2d4>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_InputField::__get_m_LineLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2d4>(this);
}
constexpr int32_t const& TMPro::TMP_InputField::__get_m_LineLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2d4>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_InputValidator(::TMPro::TMP_InputValidator*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_InputValidator*, 0x2d8>(this, std::forward<::TMPro::TMP_InputValidator*>(value));
}
constexpr ::TMPro::TMP_InputValidator* TMPro::TMP_InputField::__get_m_InputValidator()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputValidator*, 0x2d8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_InputValidator*> TMPro::TMP_InputField::__get_m_InputValidator() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputValidator*, 0x2d8>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_isSelected(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e0>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_isSelected()  {
return ::cordl_internals::getInstanceField<bool, 0x2e0>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_isSelected() const {
return ::cordl_internals::getInstanceField<bool, 0x2e0>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_IsStringPositionDirty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e1>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_IsStringPositionDirty()  {
return ::cordl_internals::getInstanceField<bool, 0x2e1>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_IsStringPositionDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x2e1>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_IsCaretPositionDirty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e2>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_IsCaretPositionDirty()  {
return ::cordl_internals::getInstanceField<bool, 0x2e2>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_IsCaretPositionDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x2e2>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_forceRectTransformAdjustment(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2e3>(this, std::forward<bool>(value));
}
constexpr bool& TMPro::TMP_InputField::__get_m_forceRectTransformAdjustment()  {
return ::cordl_internals::getInstanceField<bool, 0x2e3>(this);
}
constexpr bool const& TMPro::TMP_InputField::__get_m_forceRectTransformAdjustment() const {
return ::cordl_internals::getInstanceField<bool, 0x2e3>(this);
}
constexpr void TMPro::TMP_InputField::__set_m_ProcessingEvent(::UnityEngine::Event*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Event*, 0x2e8>(this, std::forward<::UnityEngine::Event*>(value));
}
constexpr ::UnityEngine::Event* TMPro::TMP_InputField::__get_m_ProcessingEvent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Event*, 0x2e8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> TMPro::TMP_InputField::__get_m_ProcessingEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Event*, 0x2e8>(this);
}
inline ::UnityEngine::EventSystems::BaseInput* TMPro::TMP_InputField::get_inputSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_inputSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseInput*, false>(*this, ___internal_method);
}
inline ::StringW TMPro::TMP_InputField::get_compositionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::get_compositionLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_compositionLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::TMPro::TMP_InputField* TMPro::TMP_InputField::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::TMP_InputField*>());
}
inline void TMPro::TMP_InputField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Mesh* TMPro::TMP_InputField::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(*this, ___internal_method);
}
inline bool TMPro::TMP_InputField::get_shouldHideMobileInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_shouldHideMobileInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_shouldHideSoftKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_shouldHideSoftKeyboard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::isKeyboardUsingEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "isKeyboardUsingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW TMPro::TMP_InputField::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void TMPro::TMP_InputField::SetTextWithoutNotify(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
/// @param sendCallback: bool (default: true)
inline void TMPro::TMP_InputField::SetText(::StringW  value, bool  sendCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, sendCallback);
}
inline bool TMPro::TMP_InputField::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_caretBlinkRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretBlinkRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_caretWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* TMPro::TMP_InputField::get_textViewport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_textViewport(::UnityEngine::RectTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::TMP_Text* TMPro::TMP_InputField::get_textComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Text*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_textComponent(::TMPro::TMP_Text*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Graphic* TMPro::TMP_InputField::get_placeholder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Graphic*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_placeholder(::UnityEngine::UI::Graphic*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Scrollbar* TMPro::TMP_InputField::get_verticalScrollbar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Scrollbar*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_verticalScrollbar(::UnityEngine::UI::Scrollbar*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t TMPro::TMP_InputField::get_scrollSensitivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_scrollSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color TMPro::TMP_InputField::get_caretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_customCaretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_customCaretColor(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color TMPro::TMP_InputField::get_selectionColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SubmitEvent* TMPro::TMP_InputField::get_onEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SubmitEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onEndEdit(::TMPro::__TMP_InputField__SubmitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SubmitEvent* TMPro::TMP_InputField::get_onSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SubmitEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onSubmit(::TMPro::__TMP_InputField__SubmitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SubmitEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SelectionEvent* TMPro::TMP_InputField::get_onSelect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SelectionEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onSelect(::TMPro::__TMP_InputField__SelectionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__SelectionEvent* TMPro::TMP_InputField::get_onDeselect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__SelectionEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onDeselect(::TMPro::__TMP_InputField__SelectionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__SelectionEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::TMP_InputField::get_onTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__TextSelectionEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__TextSelectionEvent* TMPro::TMP_InputField::get_onEndTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__TextSelectionEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onEndTextSelection(::TMPro::__TMP_InputField__TextSelectionEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TextSelectionEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__OnChangeEvent* TMPro::TMP_InputField::get_onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__OnChangeEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onValueChanged(::TMPro::__TMP_InputField__OnChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnChangeEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__TouchScreenKeyboardEvent* TMPro::TMP_InputField::get_onTouchScreenKeyboardStatusChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onTouchScreenKeyboardStatusChanged(::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__TouchScreenKeyboardEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__OnValidateInput* TMPro::TMP_InputField::get_onValidateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__OnValidateInput*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onValidateInput(::TMPro::__TMP_InputField__OnValidateInput*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__OnValidateInput*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_characterLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_characterLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t TMPro::TMP_InputField::get_pointSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_pointSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::TMP_FontAsset* TMPro::TMP_InputField::get_fontAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAsset*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_fontAsset(::TMPro::TMP_FontAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_onFocusSelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_onFocusSelectAll(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_resetOnDeActivation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_resetOnDeActivation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_restoreOriginalTextOnEscape()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_restoreOriginalTextOnEscape(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_isRichTextEditingAllowed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_isRichTextEditingAllowed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__ContentType TMPro::TMP_InputField::get_contentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__ContentType, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_contentType(::TMPro::__TMP_InputField__ContentType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__ContentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__LineType TMPro::TMP_InputField::get_lineType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__LineType, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_lineType(::TMPro::__TMP_InputField__LineType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__LineType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_lineLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_lineLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__InputType TMPro::TMP_InputField::get_inputType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__InputType, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_inputType(::TMPro::__TMP_InputField__InputType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__InputType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::TouchScreenKeyboardType TMPro::TMP_InputField::get_keyboardType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboardType, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_keyboardType(::UnityEngine::TouchScreenKeyboardType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::__TMP_InputField__CharacterValidation TMPro::TMP_InputField::get_characterValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__CharacterValidation, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_characterValidation(::TMPro::__TMP_InputField__CharacterValidation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::TMPro::TMP_InputValidator* TMPro::TMP_InputField::get_inputValidator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_InputValidator*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_inputValidator(::TMPro::TMP_InputValidator*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_InputValidator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_readOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_readOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_richText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_richText(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_multiLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline char16_t TMPro::TMP_InputField::get_asteriskChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_asteriskChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_wasCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::ClampStringPos(ByRef<int32_t>  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ClampStringPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos);
}
inline void TMPro::TMP_InputField::ClampCaretPos(ByRef<int32_t>  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ClampCaretPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos);
}
inline int32_t TMPro::TMP_InputField::get_caretPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretPositionInternal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_stringPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_stringPositionInternal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_caretSelectPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretSelectPositionInternal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_stringSelectPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_stringSelectPositionInternal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::get_hasSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::get_caretPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_caretPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionAnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionAnchorPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionFocusPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionFocusPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_stringPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_stringPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionStringAnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionStringAnchorPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t TMPro::TMP_InputField::get_selectionStringFocusPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::set_selectionStringFocusPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void TMPro::TMP_InputField::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::ON_TEXT_CHANGED(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ON_TEXT_CHANGED",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline ::System::Collections::IEnumerator* TMPro::TMP_InputField::CaretBlink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetCaretVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetCaretActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::MoveTextEnd(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveTextStart(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveToEndOfLine(bool  shift, bool  ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveToEndOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, ctrl);
}
inline void TMPro::TMP_InputField::MoveToStartOfLine(bool  shift, bool  ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveToStartOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, ctrl);
}
inline ::StringW TMPro::TMP_InputField::get_clipboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_InputField::set_clipboard(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool TMPro::TMP_InputField::InPlaceEditing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateStringPositionFromKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateStringPositionFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool TMPro::TMP_InputField::MayDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::System::Collections::IEnumerator* TMPro::TMP_InputField::MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnEndDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::TMPro::__TMP_InputField__EditState TMPro::TMP_InputField::KeyPressed(::UnityEngine::Event*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::__TMP_InputField__EditState, false>(*this, ___internal_method, evt);
}
inline bool TMPro::TMP_InputField::IsValidChar(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "IsValidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, c);
}
inline void TMPro::TMP_InputField::ProcessEvent(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void TMPro::TMP_InputField::OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnUpdateSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnScroll(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline float_t TMPro::TMP_InputField::GetScrollPositionRelativeToViewport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetScrollPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::StringW TMPro::TMP_InputField::GetSelectedString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::FindNextWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "FindNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::MoveRight(bool  shift, bool  ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, ctrl);
}
inline int32_t TMPro::TMP_InputField::FindPrevWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "FindPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::MoveLeft(bool  shift, bool  ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, ctrl);
}
inline int32_t TMPro::TMP_InputField::LineUpCharacterPosition(int32_t  originalPos, bool  goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, originalPos, goToFirstChar);
}
inline int32_t TMPro::TMP_InputField::LineDownCharacterPosition(int32_t  originalPos, bool  goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, originalPos, goToLastChar);
}
inline int32_t TMPro::TMP_InputField::PageUpCharacterPosition(int32_t  originalPos, bool  goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "PageUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, originalPos, goToFirstChar);
}
inline int32_t TMPro::TMP_InputField::PageDownCharacterPosition(int32_t  originalPos, bool  goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "PageDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, originalPos, goToLastChar);
}
inline void TMPro::TMP_InputField::MoveDown(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveDown(bool  shift, bool  goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, goToLastChar);
}
inline void TMPro::TMP_InputField::MoveUp(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MoveUp(bool  shift, bool  goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, goToFirstChar);
}
inline void TMPro::TMP_InputField::MovePageUp(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MovePageUp(bool  shift, bool  goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, goToFirstChar);
}
inline void TMPro::TMP_InputField::MovePageDown(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void TMPro::TMP_InputField::MovePageDown(bool  shift, bool  goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, goToLastChar);
}
inline void TMPro::TMP_InputField::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::DeleteKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "DeleteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::Backspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::Append(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline void TMPro::TMP_InputField::Append(char16_t  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline void TMPro::TMP_InputField::Insert(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, c);
}
inline void TMPro::TMP_InputField::UpdateTouchKeyboardFromEditChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnValueChangedAndUpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnFocusLost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendOnEndTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendOnEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SendTouchScreenKeyboardStatusChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SendTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateScrollbar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnScrollbarValueChange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnScrollbarValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void TMPro::TMP_InputField::UpdateMaskRegions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateMaskRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::AdjustTextPositionRelativeToViewport(float_t  relativePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "AdjustTextPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, relativePosition);
}
inline int32_t TMPro::TMP_InputField::GetCaretPositionFromStringIndex(int32_t  stringIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, stringIndex);
}
inline int32_t TMPro::TMP_InputField::GetMinCaretPositionFromStringIndex(int32_t  stringIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetMinCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, stringIndex);
}
inline int32_t TMPro::TMP_InputField::GetMaxCaretPositionFromStringIndex(int32_t  stringIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetMaxCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, stringIndex);
}
inline int32_t TMPro::TMP_InputField::GetStringIndexFromCaretPosition(int32_t  caretPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GetStringIndexFromCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, caretPosition);
}
inline void TMPro::TMP_InputField::ForceLabelUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::MarkGeometryAsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::Rebuild(::UnityEngine::UI::CanvasUpdate  update)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, update);
}
inline void TMPro::TMP_InputField::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::UpdateGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::AssignPositioningIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnFillVBO(::UnityEngine::Mesh*  vbo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, vbo);
}
inline void TMPro::TMP_InputField::GenerateCaret(::UnityEngine::UI::VertexHelper*  vbo, ::UnityEngine::Vector2  roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, vbo, roundingOffset);
}
inline void TMPro::TMP_InputField::CreateCursorVerts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::GenerateHightlight(::UnityEngine::UI::VertexHelper*  vbo, ::UnityEngine::Vector2  roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "GenerateHightlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, vbo, roundingOffset);
}
inline void TMPro::TMP_InputField::AdjustRectTransformRelativeToViewport(::UnityEngine::Vector2  startPosition, float_t  height, bool  isCharVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "AdjustRectTransformRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, startPosition, height, isCharVisible);
}
inline char16_t TMPro::TMP_InputField::Validate(::StringW  text, int32_t  pos, char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method, text, pos, ch);
}
inline void TMPro::TMP_InputField::ActivateInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::ActivateInputFieldInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnControlClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnControlClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::ReleaseSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "ReleaseSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param clearSelection: bool (default: false)
inline void TMPro::TMP_InputField::DeactivateInputField(bool  clearSelection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clearSelection);
}
inline void TMPro::TMP_InputField::OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void TMPro::TMP_InputField::EnforceContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetTextComponentWrapMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetTextComponentWrapMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetTextComponentRichTextMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetTextComponentRichTextMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetToCustomIfContentTypeIsNot(::ArrayW<::TMPro::__TMP_InputField__ContentType,::Array<::TMPro::__TMP_InputField__ContentType>*>  allowedContentTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::__TMP_InputField__ContentType,::Array<::TMPro::__TMP_InputField__ContentType>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, allowedContentTypes);
}
inline void TMPro::TMP_InputField::SetToCustom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetToCustom(::TMPro::__TMP_InputField__CharacterValidation  characterValidation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_InputField__CharacterValidation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, characterValidation);
}
inline void TMPro::TMP_InputField::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, instant);
}
inline void TMPro::TMP_InputField::CalculateLayoutInputHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "CalculateLayoutInputHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::CalculateLayoutInputVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "CalculateLayoutInputVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_minWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_preferredWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_preferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_flexibleWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_flexibleWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_minHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_minHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_preferredHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_preferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t TMPro::TMP_InputField::get_flexibleHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_flexibleHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t TMPro::TMP_InputField::get_layoutPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "get_layoutPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void TMPro::TMP_InputField::SetGlobalPointSize(float_t  pointSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetGlobalPointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pointSize);
}
inline void TMPro::TMP_InputField::SetGlobalFontAsset(::TMPro::TMP_FontAsset*  fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "SetGlobalFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fontAsset);
}
inline ::UnityEngine::Transform* TMPro::TMP_InputField::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField*>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
