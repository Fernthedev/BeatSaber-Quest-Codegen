#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
constexpr void UnityEngine::UI::__InputField__ContentType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__InputField__ContentType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__InputField__ContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__InputField__ContentType::__InputField__ContentType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::Standard{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::Autocorrected{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::IntegerNumber{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::DecimalNumber{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::Alphanumeric{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::Name{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::EmailAddress{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::Password{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::Pin{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UI::__InputField__ContentType  UnityEngine::UI::__InputField__ContentType::Custom{static_cast<int32_t>(0x9)};
constexpr void UnityEngine::UI::__InputField__InputType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__InputField__InputType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__InputField__InputType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__InputField__InputType::__InputField__InputType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__InputField__InputType  UnityEngine::UI::__InputField__InputType::Standard{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__InputField__InputType  UnityEngine::UI::__InputField__InputType::AutoCorrect{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__InputField__InputType  UnityEngine::UI::__InputField__InputType::Password{static_cast<int32_t>(0x2)};
constexpr void UnityEngine::UI::__InputField__CharacterValidation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__InputField__CharacterValidation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__InputField__CharacterValidation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__InputField__CharacterValidation::__InputField__CharacterValidation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__InputField__CharacterValidation  UnityEngine::UI::__InputField__CharacterValidation::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__InputField__CharacterValidation  UnityEngine::UI::__InputField__CharacterValidation::Integer{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__InputField__CharacterValidation  UnityEngine::UI::__InputField__CharacterValidation::Decimal{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UI::__InputField__CharacterValidation  UnityEngine::UI::__InputField__CharacterValidation::Alphanumeric{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UI::__InputField__CharacterValidation  UnityEngine::UI::__InputField__CharacterValidation::Name{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UI::__InputField__CharacterValidation  UnityEngine::UI::__InputField__CharacterValidation::EmailAddress{static_cast<int32_t>(0x5)};
constexpr void UnityEngine::UI::__InputField__LineType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__InputField__LineType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__InputField__LineType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__InputField__LineType::__InputField__LineType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__InputField__LineType  UnityEngine::UI::__InputField__LineType::SingleLine{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__InputField__LineType  UnityEngine::UI::__InputField__LineType::MultiLineSubmit{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__InputField__LineType  UnityEngine::UI::__InputField__LineType::MultiLineNewline{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::UI::__InputField__OnValidateInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField__OnValidateInput::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::UnityEngine::UI::__InputField__OnValidateInput::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d69d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField__OnValidateInput.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::UnityEngine::UI::__InputField__OnValidateInput::*)(::StringW, int32_t, char16_t)>(&::UnityEngine::UI::__InputField__OnValidateInput::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d72ce0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField__OnValidateInput.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::UnityEngine::UI::__InputField__OnValidateInput::*)(::StringW, int32_t, char16_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::UI::__InputField__OnValidateInput::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d72cf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField__OnValidateInput.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::UnityEngine::UI::__InputField__OnValidateInput::*)(::System::IAsyncResult*)>(&::UnityEngine::UI::__InputField__OnValidateInput::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d72db4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::__InputField__OnValidateInput* UnityEngine::UI::__InputField__OnValidateInput::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__InputField__OnValidateInput*>(object, method));
}
inline void UnityEngine::UI::__InputField__OnValidateInput::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline char16_t UnityEngine::UI::__InputField__OnValidateInput::Invoke(::StringW  text, int32_t  charIndex, char16_t  addedChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method, text, charIndex, addedChar);
}
inline ::System::IAsyncResult* UnityEngine::UI::__InputField__OnValidateInput::BeginInvoke(::StringW  text, int32_t  charIndex, char16_t  addedChar, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, text, charIndex, addedChar, callback, object);
}
inline char16_t UnityEngine::UI::__InputField__OnValidateInput::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnValidateInput*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::UnityEngine::UI::__InputField__SubmitEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField__SubmitEvent::*)()>(&::UnityEngine::UI::__InputField__SubmitEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d696a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__SubmitEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::__InputField__SubmitEvent* UnityEngine::UI::__InputField__SubmitEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__InputField__SubmitEvent*>());
}
inline void UnityEngine::UI::__InputField__SubmitEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__SubmitEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::__InputField__EndEditEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField__EndEditEvent::*)()>(&::UnityEngine::UI::__InputField__EndEditEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d696ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__EndEditEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::__InputField__EndEditEvent* UnityEngine::UI::__InputField__EndEditEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__InputField__EndEditEvent*>());
}
inline void UnityEngine::UI::__InputField__EndEditEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__EndEditEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::__InputField__OnChangeEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField__OnChangeEvent::*)()>(&::UnityEngine::UI::__InputField__OnChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d69734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnChangeEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::__InputField__OnChangeEvent* UnityEngine::UI::__InputField__OnChangeEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__InputField__OnChangeEvent*>());
}
inline void UnityEngine::UI::__InputField__OnChangeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField__OnChangeEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
constexpr void UnityEngine::UI::__InputField__EditState::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__InputField__EditState::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__InputField__EditState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__InputField__EditState::__InputField__EditState(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__InputField__EditState  UnityEngine::UI::__InputField__EditState::Continue{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__InputField__EditState  UnityEngine::UI::__InputField__EditState::Finish{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___CaretBlink_d__172._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField___CaretBlink_d__172::*)(int32_t)>(&::UnityEngine::UI::__InputField___CaretBlink_d__172::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d6b958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___CaretBlink_d__172.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField___CaretBlink_d__172::*)()>(&::UnityEngine::UI::__InputField___CaretBlink_d__172::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d72ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___CaretBlink_d__172.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::__InputField___CaretBlink_d__172::*)()>(&::UnityEngine::UI::__InputField___CaretBlink_d__172::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d72de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___CaretBlink_d__172.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UI::__InputField___CaretBlink_d__172::*)()>(&::UnityEngine::UI::__InputField___CaretBlink_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___CaretBlink_d__172.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField___CaretBlink_d__172::*)()>(&::UnityEngine::UI::__InputField___CaretBlink_d__172::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d72ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___CaretBlink_d__172.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UI::__InputField___CaretBlink_d__172::*)()>(&::UnityEngine::UI::__InputField___CaretBlink_d__172::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::UI::__InputField___CaretBlink_d__172::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::UI::__InputField___CaretBlink_d__172::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UI::__InputField___CaretBlink_d__172::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UI::__InputField___CaretBlink_d__172::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__InputField___CaretBlink_d__172::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::UI::__InputField___CaretBlink_d__172::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::UI::__InputField___CaretBlink_d__172::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::UI::__InputField___CaretBlink_d__172::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::UI::__InputField___CaretBlink_d__172::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void UnityEngine::UI::__InputField___CaretBlink_d__172::__set___4__this(::UnityEngine::UI::InputField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::InputField*, 0x20>(this, std::forward<::UnityEngine::UI::InputField*>(value));
}
constexpr ::UnityEngine::UI::InputField* UnityEngine::UI::__InputField___CaretBlink_d__172::__get___4__this()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> UnityEngine::UI::__InputField___CaretBlink_d__172::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x20>(this);
}
inline ::UnityEngine::UI::__InputField___CaretBlink_d__172* UnityEngine::UI::__InputField___CaretBlink_d__172::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__InputField___CaretBlink_d__172*>(__1__state));
}
inline void UnityEngine::UI::__InputField___CaretBlink_d__172::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void UnityEngine::UI::__InputField___CaretBlink_d__172::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::__InputField___CaretBlink_d__172::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::__InputField___CaretBlink_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::__InputField___CaretBlink_d__172::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::__InputField___CaretBlink_d__172::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___CaretBlink_d__172*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::*)(int32_t)>(&::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d6dfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::*)()>(&::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d72f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::*)()>(&::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2d72f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::*)()>(&::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d731e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::*)()>(&::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d731f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::*)()>(&::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d73230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__set_eventData(::UnityEngine::EventSystems::PointerEventData*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x20>(this, std::forward<::UnityEngine::EventSystems::PointerEventData*>(value));
}
constexpr ::UnityEngine::EventSystems::PointerEventData* UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get_eventData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get_eventData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::PointerEventData*, 0x20>(this);
}
constexpr void UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__set___4__this(::UnityEngine::UI::InputField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::InputField*, 0x28>(this, std::forward<::UnityEngine::UI::InputField*>(value));
}
constexpr ::UnityEngine::UI::InputField* UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get___4__this()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::InputField*, 0x28>(this);
}
inline ::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194* UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>(__1__state));
}
inline void UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__InputField___MouseDragOutsideRect_d__194*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_input
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseInput* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_input)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d69368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_input",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_compositionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_compositionString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d69478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2d6950c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_mesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d69810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_cachedInputTextGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextGenerator* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_cachedInputTextGenerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d698b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_cachedInputTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d69924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d6997c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_shouldActivateOnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_shouldActivateOnSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d699c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_shouldActivateOnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_shouldActivateOnSelect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d699d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d699fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW)>(&::UnityEngine::UI::InputField::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d69a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetTextWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW)>(&::UnityEngine::UI::InputField::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d69d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW, bool)>(&::UnityEngine::UI::InputField::SetText)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2d69a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_isFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretBlinkRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(float_t)>(&::UnityEngine::UI::InputField::set_caretBlinkRate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d6a2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretWidth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d6a37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Text* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_textComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::InputField::set_textComponent)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2d6a450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Text*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Graphic* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_placeholder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::Graphic*)>(&::UnityEngine::UI::InputField::set_placeholder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d6a6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretColor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d6a754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Color)>(&::UnityEngine::UI::InputField::set_caretColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d6a798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_customCaretColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_customCaretColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d6a7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_selectionColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d6a7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Color)>(&::UnityEngine::UI::InputField::set_selectionColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d6a7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__EndEditEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onEndEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__EndEditEvent*)>(&::UnityEngine::UI::InputField::set_onEndEdit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d6a830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__EndEditEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__SubmitEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__SubmitEvent*)>(&::UnityEngine::UI::InputField::set_onSubmit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d6a890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__SubmitEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__OnChangeEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onValueChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__OnChangeEvent*)>(&::UnityEngine::UI::InputField::set_onValueChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d6a8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__OnChangeEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__OnChangeEvent* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__OnChangeEvent*)>(&::UnityEngine::UI::InputField::set_onValueChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d6a8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__OnChangeEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__OnValidateInput* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_onValidateInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__OnValidateInput*)>(&::UnityEngine::UI::InputField::set_onValidateInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d6a95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__OnValidateInput*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_characterLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6a9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_characterLimit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d6a9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__ContentType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6aa7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__ContentType)>(&::UnityEngine::UI::InputField::set_contentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d6aa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__ContentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__LineType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6abb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__LineType)>(&::UnityEngine::UI::InputField::set_lineType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d6abbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__LineType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__InputType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_inputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6acd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__InputType)>(&::UnityEngine::UI::InputField::set_inputType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d6acdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__InputType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_touchScreenKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboard* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_touchScreenKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6ad78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_touchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboardType (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_keyboardType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6ad80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::TouchScreenKeyboardType)>(&::UnityEngine::UI::InputField::set_keyboardType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d6ad88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__CharacterValidation (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_characterValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6ae0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__InputField__CharacterValidation)>(&::UnityEngine::UI::InputField::set_characterValidation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d6ae14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__CharacterValidation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_readOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6ae98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::set_readOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d6aea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_multiLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_multiLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d6aeac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_asteriskChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6aec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::set_asteriskChar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d6aec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_wasCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_wasCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6af3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ClampPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(ByRef<int32_t>)>(&::UnityEngine::UI::InputField::ClampPos)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d6af44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ClampPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretPositionInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d6af7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d6afa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d6afd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d6affc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_hasSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_hasSelection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d6b034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_caretPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d6b064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_caretPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d6b088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d6b168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6b0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d6b18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::set_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6b10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2d6b1b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnEnable)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2d6b270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnDisable)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2d6b4dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d6b88c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CaretBlink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CaretBlink)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d6b8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetCaretVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SetCaretVisible)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d6b980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetCaretActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SetCaretActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d6a320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateCaretMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateCaretMaterial)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d6b9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateCaretMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::OnFocus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d6bac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SelectAll)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d6bacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveTextEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveTextEnd)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d6bb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveTextStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveTextStart)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d6bb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::UI::InputField::get_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6bbdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.set_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::UI::InputField::set_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6bbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.TouchScreenKeyboardShouldBeUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::TouchScreenKeyboardShouldBeUsed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d6bbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "TouchScreenKeyboardShouldBeUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.InPlaceEditing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::InPlaceEditing)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d6bc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.InPlaceEditingChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::InPlaceEditingChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d6bc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "InPlaceEditingChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateCaretFromKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateCaretFromKeyboard)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2d6bd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateCaretFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::LateUpdate)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x2d6be08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ScreenToLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::InputField::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::InputField::ScreenToLocal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2d6d3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ScreenToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetUnclampedCharacterLineFromPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(::UnityEngine::Vector2, ::UnityEngine::TextGenerator*)>(&::UnityEngine::UI::InputField::GetUnclampedCharacterLineFromPosition)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2d6d65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetUnclampedCharacterLineFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetCharacterIndexFromPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::InputField::GetCharacterIndexFromPosition)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2d6d86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetCharacterIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MayDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::MayDrag)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d6dc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnBeginDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d6dd3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnDrag)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2d6dd5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MouseDragOutsideRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::MouseDragOutsideRect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d6df44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnEndDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnEndDrag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d6dfe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnPointerDown)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2d6dffc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.KeyPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__InputField__EditState (::UnityEngine::UI::InputField::*)(::UnityEngine::Event*)>(&::UnityEngine::UI::InputField::KeyPressed)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2d6e1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.IsValidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::IsValidChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d6ec80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "IsValidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ProcessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Event*)>(&::UnityEngine::UI::InputField::ProcessEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d6ecf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnUpdateSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnUpdateSelected)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2d6ecf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetSelectedString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::GetSelectedString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d6e76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.FindtNextWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::FindtNextWordBegin)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d6ee7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "FindtNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveRight)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d6eb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.FindtPrevWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::FindtPrevWordBegin)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d6ef38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "FindtPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveLeft)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d6ea10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.DetermineCharacterLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(int32_t, ::UnityEngine::TextGenerator*)>(&::UnityEngine::UI::InputField::DetermineCharacterLine)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d6efd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "DetermineCharacterLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LineUpCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(int32_t, bool)>(&::UnityEngine::UI::InputField::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2d6f0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LineDownCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)(int32_t, bool)>(&::UnityEngine::UI::InputField::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2d6f440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d6ec74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveDown)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2d6f6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool)>(&::UnityEngine::UI::InputField::MoveUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d6ec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(bool, bool)>(&::UnityEngine::UI::InputField::MoveUp)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2d6f828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::Delete)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2d6e814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ForwardSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ForwardSpace)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d6e6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ForwardSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Backspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::Backspace)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2d6e5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::Insert)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d6f968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateTouchKeyboardFromEditChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateTouchKeyboardFromEditChanges)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d6e9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnValueChangedAndUpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnValueChangedAndUpdateLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d6d3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnValueChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d69df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnEndEdit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d6fa48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SendOnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SendOnSubmit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d6cc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::StringW)>(&::UnityEngine::UI::InputField::Append)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d6fac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(char16_t)>(&::UnityEngine::UI::InputField::Append)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2d6fb84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateLabel)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2d69e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.IsSelectionVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::IsSelectionVisible)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d70910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "IsSelectionVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetLineStartPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::TextGenerator*, int32_t)>(&::UnityEngine::UI::InputField::GetLineStartPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2d7097c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetLineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GetLineEndPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::TextGenerator*, int32_t)>(&::UnityEngine::UI::InputField::GetLineEndPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2d6db00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetLineEndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetDrawRangeToContainCaretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(int32_t)>(&::UnityEngine::UI::InputField::SetDrawRangeToContainCaretPosition)> {
  constexpr static std::size_t size = 0xb1c;
  constexpr static std::size_t addrs = 0x2d6fdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetDrawRangeToContainCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ForceLabelUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ForceLabelUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d70acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.MarkGeometryAsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::MarkGeometryAsDirty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d6a3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::InputField::Rebuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d70ad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d70f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d70f34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UpdateGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UpdateGeometry)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x2d70ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.AssignPositioningIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::AssignPositioningIfNeeded)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2d6c780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnFillVBO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::Mesh*)>(&::UnityEngine::UI::InputField::OnFillVBO)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2d70f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GenerateCaret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(&::UnityEngine::UI::InputField::GenerateCaret)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x2d711b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CreateCursorVerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CreateCursorVerts)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2d725e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.GenerateHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2)>(&::UnityEngine::UI::InputField::GenerateHighlight)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x2d71b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GenerateHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::UnityEngine::UI::InputField::*)(::StringW, int32_t, char16_t)>(&::UnityEngine::UI::InputField::Validate)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x2d6cd00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ActivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ActivateInputField)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2d72730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.ActivateInputFieldInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::ActivateInputFieldInternal)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2d6c430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnSelect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d72850;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::InputField::OnPointerClick)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d7288c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.DeactivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::DeactivateInputField)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2d6b710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnDeselect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d728b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UI::InputField::OnSubmit)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d728dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.EnforceContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::EnforceContentType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d6aaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.EnforceTextHOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::EnforceTextHOverflow)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d6977c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "EnforceTextHOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetToCustomIfContentTypeIsNot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::ArrayW<::UnityEngine::UI::__InputField__ContentType,::Array<::UnityEngine::UI::__InputField__ContentType>*>)>(&::UnityEngine::UI::InputField::SetToCustomIfContentTypeIsNot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d6ac7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UI::__InputField__ContentType,::Array<::UnityEngine::UI::__InputField__ContentType>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.SetToCustom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d6ad60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(&::UnityEngine::UI::InputField::DoStateTransition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d72924;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CalculateLayoutInputHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d72950;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.CalculateLayoutInputVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d72954;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_minWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_preferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_preferredWidth)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2d72960;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_flexibleWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72abc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  77
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_minHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72ac4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  78
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_preferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_preferredHeight)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2d72acc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_flexibleHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72c28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  80
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.get_layoutPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72c30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::InputField.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::UnityEngine::UI::InputField::*)()>(&::UnityEngine::UI::InputField::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d72cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IUpdateSelectedHandler"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IUpdateSelectedHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IUpdateSelectedHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr  UnityEngine::UI::InputField::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UI::InputField::__set_m_Keyboard(::UnityEngine::TouchScreenKeyboard*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TouchScreenKeyboard*, 0xf8>(this, std::forward<::UnityEngine::TouchScreenKeyboard*>(value));
}
constexpr ::UnityEngine::TouchScreenKeyboard* UnityEngine::UI::InputField::__get_m_Keyboard()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboard*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TouchScreenKeyboard*> UnityEngine::UI::InputField::__get_m_Keyboard() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboard*, 0xf8>(this);
}
inline void UnityEngine::UI::InputField::setStaticF_kSeparators(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> UnityEngine::UI::InputField::getStaticF_kSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get>();
}
inline void UnityEngine::UI::InputField::setStaticF_s_IsQuestDeviceEvaluated(bool  value)  {
::cordl_internals::setStaticField<bool, "s_IsQuestDeviceEvaluated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::UI::InputField::getStaticF_s_IsQuestDeviceEvaluated()  {
return ::cordl_internals::getStaticField<bool, "s_IsQuestDeviceEvaluated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get>();
}
inline void UnityEngine::UI::InputField::setStaticF_s_IsQuestDevice(bool  value)  {
::cordl_internals::setStaticField<bool, "s_IsQuestDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::UI::InputField::getStaticF_s_IsQuestDevice()  {
return ::cordl_internals::getStaticField<bool, "s_IsQuestDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get>();
}
constexpr void UnityEngine::UI::InputField::__set_m_TextComponent(::UnityEngine::UI::Text*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Text*, 0x100>(this, std::forward<::UnityEngine::UI::Text*>(value));
}
constexpr ::UnityEngine::UI::Text* UnityEngine::UI::InputField::__get_m_TextComponent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Text*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> UnityEngine::UI::InputField::__get_m_TextComponent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Text*, 0x100>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_Placeholder(::UnityEngine::UI::Graphic*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Graphic*, 0x108>(this, std::forward<::UnityEngine::UI::Graphic*>(value));
}
constexpr ::UnityEngine::UI::Graphic* UnityEngine::UI::InputField::__get_m_Placeholder()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> UnityEngine::UI::InputField::__get_m_Placeholder() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic*, 0x108>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_ContentType(::UnityEngine::UI::__InputField__ContentType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__ContentType, 0x110>(this, std::forward<::UnityEngine::UI::__InputField__ContentType>(value));
}
constexpr ::UnityEngine::UI::__InputField__ContentType& UnityEngine::UI::InputField::__get_m_ContentType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__ContentType, 0x110>(this);
}
constexpr ::UnityEngine::UI::__InputField__ContentType const& UnityEngine::UI::InputField::__get_m_ContentType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__ContentType, 0x110>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_InputType(::UnityEngine::UI::__InputField__InputType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__InputType, 0x114>(this, std::forward<::UnityEngine::UI::__InputField__InputType>(value));
}
constexpr ::UnityEngine::UI::__InputField__InputType& UnityEngine::UI::InputField::__get_m_InputType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__InputType, 0x114>(this);
}
constexpr ::UnityEngine::UI::__InputField__InputType const& UnityEngine::UI::InputField::__get_m_InputType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__InputType, 0x114>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_AsteriskChar(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x118>(this, std::forward<char16_t>(value));
}
constexpr char16_t& UnityEngine::UI::InputField::__get_m_AsteriskChar()  {
return ::cordl_internals::getInstanceField<char16_t, 0x118>(this);
}
constexpr char16_t const& UnityEngine::UI::InputField::__get_m_AsteriskChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0x118>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x11c>(this, std::forward<::UnityEngine::TouchScreenKeyboardType>(value));
}
constexpr ::UnityEngine::TouchScreenKeyboardType& UnityEngine::UI::InputField::__get_m_KeyboardType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x11c>(this);
}
constexpr ::UnityEngine::TouchScreenKeyboardType const& UnityEngine::UI::InputField::__get_m_KeyboardType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x11c>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_LineType(::UnityEngine::UI::__InputField__LineType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__LineType, 0x120>(this, std::forward<::UnityEngine::UI::__InputField__LineType>(value));
}
constexpr ::UnityEngine::UI::__InputField__LineType& UnityEngine::UI::InputField::__get_m_LineType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__LineType, 0x120>(this);
}
constexpr ::UnityEngine::UI::__InputField__LineType const& UnityEngine::UI::InputField::__get_m_LineType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__LineType, 0x120>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_HideMobileInput(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x124>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_HideMobileInput()  {
return ::cordl_internals::getInstanceField<bool, 0x124>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_HideMobileInput() const {
return ::cordl_internals::getInstanceField<bool, 0x124>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CharacterValidation(::UnityEngine::UI::__InputField__CharacterValidation  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__CharacterValidation, 0x128>(this, std::forward<::UnityEngine::UI::__InputField__CharacterValidation>(value));
}
constexpr ::UnityEngine::UI::__InputField__CharacterValidation& UnityEngine::UI::InputField::__get_m_CharacterValidation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__CharacterValidation, 0x128>(this);
}
constexpr ::UnityEngine::UI::__InputField__CharacterValidation const& UnityEngine::UI::InputField::__get_m_CharacterValidation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__CharacterValidation, 0x128>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CharacterLimit(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x12c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::InputField::__get_m_CharacterLimit()  {
return ::cordl_internals::getInstanceField<int32_t, 0x12c>(this);
}
constexpr int32_t const& UnityEngine::UI::InputField::__get_m_CharacterLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x12c>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnSubmit(::UnityEngine::UI::__InputField__SubmitEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__SubmitEvent*, 0x130>(this, std::forward<::UnityEngine::UI::__InputField__SubmitEvent*>(value));
}
constexpr ::UnityEngine::UI::__InputField__SubmitEvent* UnityEngine::UI::InputField::__get_m_OnSubmit()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__SubmitEvent*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__SubmitEvent*> UnityEngine::UI::InputField::__get_m_OnSubmit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__SubmitEvent*, 0x130>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnDidEndEdit(::UnityEngine::UI::__InputField__EndEditEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__EndEditEvent*, 0x138>(this, std::forward<::UnityEngine::UI::__InputField__EndEditEvent*>(value));
}
constexpr ::UnityEngine::UI::__InputField__EndEditEvent* UnityEngine::UI::InputField::__get_m_OnDidEndEdit()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__EndEditEvent*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__EndEditEvent*> UnityEngine::UI::InputField::__get_m_OnDidEndEdit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__EndEditEvent*, 0x138>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnValueChanged(::UnityEngine::UI::__InputField__OnChangeEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__OnChangeEvent*, 0x140>(this, std::forward<::UnityEngine::UI::__InputField__OnChangeEvent*>(value));
}
constexpr ::UnityEngine::UI::__InputField__OnChangeEvent* UnityEngine::UI::InputField::__get_m_OnValueChanged()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__OnChangeEvent*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__OnChangeEvent*> UnityEngine::UI::InputField::__get_m_OnValueChanged() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__OnChangeEvent*, 0x140>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnValidateInput(::UnityEngine::UI::__InputField__OnValidateInput*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__InputField__OnValidateInput*, 0x148>(this, std::forward<::UnityEngine::UI::__InputField__OnValidateInput*>(value));
}
constexpr ::UnityEngine::UI::__InputField__OnValidateInput* UnityEngine::UI::InputField::__get_m_OnValidateInput()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__OnValidateInput*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__InputField__OnValidateInput*> UnityEngine::UI::InputField::__get_m_OnValidateInput() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__InputField__OnValidateInput*, 0x148>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x150>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::UI::InputField::__get_m_CaretColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x150>(this);
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::InputField::__get_m_CaretColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x150>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CustomCaretColor(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x160>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_CustomCaretColor()  {
return ::cordl_internals::getInstanceField<bool, 0x160>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_CustomCaretColor() const {
return ::cordl_internals::getInstanceField<bool, 0x160>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_SelectionColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x164>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& UnityEngine::UI::InputField::__get_m_SelectionColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x164>(this);
}
constexpr ::UnityEngine::Color const& UnityEngine::UI::InputField::__get_m_SelectionColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x164>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_Text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x178>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UI::InputField::__get_m_Text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x178>(this);
}
constexpr ::StringW const& UnityEngine::UI::InputField::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x178>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretBlinkRate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x180>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::InputField::__get_m_CaretBlinkRate()  {
return ::cordl_internals::getInstanceField<float_t, 0x180>(this);
}
constexpr float_t const& UnityEngine::UI::InputField::__get_m_CaretBlinkRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x180>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x184>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::InputField::__get_m_CaretWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x184>(this);
}
constexpr int32_t const& UnityEngine::UI::InputField::__get_m_CaretWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x184>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_ReadOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x188>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_ReadOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_ReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x188>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_ShouldActivateOnSelect(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x189>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_ShouldActivateOnSelect()  {
return ::cordl_internals::getInstanceField<bool, 0x189>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_ShouldActivateOnSelect() const {
return ::cordl_internals::getInstanceField<bool, 0x189>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::InputField::__get_m_CaretPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18c>(this);
}
constexpr int32_t const& UnityEngine::UI::InputField::__get_m_CaretPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18c>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretSelectPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x190>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::InputField::__get_m_CaretSelectPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x190>(this);
}
constexpr int32_t const& UnityEngine::UI::InputField::__get_m_CaretSelectPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x190>(this);
}
constexpr void UnityEngine::UI::InputField::__set_caretRectTrans(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x198>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::InputField::__get_caretRectTrans()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x198>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::InputField::__get_caretRectTrans() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x198>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>, 0x1a0>(this, std::forward<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>& UnityEngine::UI::InputField::__get_m_CursorVerts()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>, 0x1a0>(this);
}
constexpr ::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*> const& UnityEngine::UI::InputField::__get_m_CursorVerts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIVertex,::Array<::UnityEngine::UIVertex>*>, 0x1a0>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_InputTextCache(::UnityEngine::TextGenerator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextGenerator*, 0x1a8>(this, std::forward<::UnityEngine::TextGenerator*>(value));
}
constexpr ::UnityEngine::TextGenerator* UnityEngine::UI::InputField::__get_m_InputTextCache()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TextGenerator*, 0x1a8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextGenerator*> UnityEngine::UI::InputField::__get_m_InputTextCache() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextGenerator*, 0x1a8>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CachedInputRenderer(::UnityEngine::CanvasRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasRenderer*, 0x1b0>(this, std::forward<::UnityEngine::CanvasRenderer*>(value));
}
constexpr ::UnityEngine::CanvasRenderer* UnityEngine::UI::InputField::__get_m_CachedInputRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasRenderer*, 0x1b0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasRenderer*> UnityEngine::UI::InputField::__get_m_CachedInputRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasRenderer*, 0x1b0>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_PreventFontCallback(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1b8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_PreventFontCallback()  {
return ::cordl_internals::getInstanceField<bool, 0x1b8>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_PreventFontCallback() const {
return ::cordl_internals::getInstanceField<bool, 0x1b8>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_Mesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x1c0>(this, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* UnityEngine::UI::InputField::__get_m_Mesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x1c0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> UnityEngine::UI::InputField::__get_m_Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x1c0>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_AllowInput(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_AllowInput()  {
return ::cordl_internals::getInstanceField<bool, 0x1c8>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_AllowInput() const {
return ::cordl_internals::getInstanceField<bool, 0x1c8>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_ShouldActivateNextUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c9>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_ShouldActivateNextUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x1c9>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_ShouldActivateNextUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x1c9>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_UpdateDrag(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1ca>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_UpdateDrag()  {
return ::cordl_internals::getInstanceField<bool, 0x1ca>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_UpdateDrag() const {
return ::cordl_internals::getInstanceField<bool, 0x1ca>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_DragPositionOutOfBounds(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1cb>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_DragPositionOutOfBounds()  {
return ::cordl_internals::getInstanceField<bool, 0x1cb>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_DragPositionOutOfBounds() const {
return ::cordl_internals::getInstanceField<bool, 0x1cb>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretVisible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1cc>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_CaretVisible()  {
return ::cordl_internals::getInstanceField<bool, 0x1cc>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_CaretVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x1cc>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_BlinkCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine*, 0x1d0>(this, std::forward<::UnityEngine::Coroutine*>(value));
}
constexpr ::UnityEngine::Coroutine* UnityEngine::UI::InputField::__get_m_BlinkCoroutine()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x1d0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> UnityEngine::UI::InputField::__get_m_BlinkCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x1d0>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_BlinkStartTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1d8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::InputField::__get_m_BlinkStartTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x1d8>(this);
}
constexpr float_t const& UnityEngine::UI::InputField::__get_m_BlinkStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1d8>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_DrawStart(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1dc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::InputField::__get_m_DrawStart()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1dc>(this);
}
constexpr int32_t const& UnityEngine::UI::InputField::__get_m_DrawStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1dc>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_DrawEnd(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1e0>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::InputField::__get_m_DrawEnd()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1e0>(this);
}
constexpr int32_t const& UnityEngine::UI::InputField::__get_m_DrawEnd() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1e0>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_DragCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine*, 0x1e8>(this, std::forward<::UnityEngine::Coroutine*>(value));
}
constexpr ::UnityEngine::Coroutine* UnityEngine::UI::InputField::__get_m_DragCoroutine()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x1e8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> UnityEngine::UI::InputField::__get_m_DragCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0x1e8>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_OriginalText(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x1f0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UI::InputField::__get_m_OriginalText()  {
return ::cordl_internals::getInstanceField<::StringW, 0x1f0>(this);
}
constexpr ::StringW const& UnityEngine::UI::InputField::__get_m_OriginalText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x1f0>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_WasCanceled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_WasCanceled()  {
return ::cordl_internals::getInstanceField<bool, 0x1f8>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_WasCanceled() const {
return ::cordl_internals::getInstanceField<bool, 0x1f8>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_HasDoneFocusTransition(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1f9>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_HasDoneFocusTransition()  {
return ::cordl_internals::getInstanceField<bool, 0x1f9>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_HasDoneFocusTransition() const {
return ::cordl_internals::getInstanceField<bool, 0x1f9>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::WaitForSecondsRealtime*, 0x200>(this, std::forward<::UnityEngine::WaitForSecondsRealtime*>(value));
}
constexpr ::UnityEngine::WaitForSecondsRealtime* UnityEngine::UI::InputField::__get_m_WaitForSecondsRealtime()  {
return ::cordl_internals::getInstanceField<::UnityEngine::WaitForSecondsRealtime*, 0x200>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSecondsRealtime*> UnityEngine::UI::InputField::__get_m_WaitForSecondsRealtime() const {
return ::cordl_internals::getInstanceField<::UnityEngine::WaitForSecondsRealtime*, 0x200>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_TouchKeyboardAllowsInPlaceEditing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x208>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_TouchKeyboardAllowsInPlaceEditing()  {
return ::cordl_internals::getInstanceField<bool, 0x208>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_TouchKeyboardAllowsInPlaceEditing() const {
return ::cordl_internals::getInstanceField<bool, 0x208>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_IsCompositionActive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x209>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::InputField::__get_m_IsCompositionActive()  {
return ::cordl_internals::getInstanceField<bool, 0x209>(this);
}
constexpr bool const& UnityEngine::UI::InputField::__get_m_IsCompositionActive() const {
return ::cordl_internals::getInstanceField<bool, 0x209>(this);
}
constexpr void UnityEngine::UI::InputField::__set_m_ProcessingEvent(::UnityEngine::Event*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Event*, 0x210>(this, std::forward<::UnityEngine::Event*>(value));
}
constexpr ::UnityEngine::Event* UnityEngine::UI::InputField::__get_m_ProcessingEvent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Event*, 0x210>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> UnityEngine::UI::InputField::__get_m_ProcessingEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Event*, 0x210>(this);
}
inline ::UnityEngine::EventSystems::BaseInput* UnityEngine::UI::InputField::get_input()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_input",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseInput*, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UI::InputField::get_compositionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::UI::InputField* UnityEngine::UI::InputField::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::InputField*>());
}
inline void UnityEngine::UI::InputField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Mesh* UnityEngine::UI::InputField::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh*, false>(*this, ___internal_method);
}
inline ::UnityEngine::TextGenerator* UnityEngine::UI::InputField::get_cachedInputTextGenerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_cachedInputTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerator*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_shouldHideMobileInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_shouldHideMobileInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_shouldActivateOnSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_shouldActivateOnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_shouldActivateOnSelect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_shouldActivateOnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW UnityEngine::UI::InputField::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UI::InputField::SetTextWithoutNotify(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
/// @param sendCallback: bool (default: true)
inline void UnityEngine::UI::InputField::SetText(::StringW  value, bool  sendCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, sendCallback);
}
inline bool UnityEngine::UI::InputField::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_caretBlinkRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretBlinkRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_caretWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretWidth(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Text* UnityEngine::UI::InputField::get_textComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Text*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_textComponent(::UnityEngine::UI::Text*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Text*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Graphic* UnityEngine::UI::InputField::get_placeholder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Graphic*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_placeholder(::UnityEngine::UI::Graphic*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UI::InputField::get_caretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_customCaretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_customCaretColor(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UI::InputField::get_selectionColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_selectionColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__EndEditEvent* UnityEngine::UI::InputField::get_onEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__EndEditEvent*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onEndEdit(::UnityEngine::UI::__InputField__EndEditEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__EndEditEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__SubmitEvent* UnityEngine::UI::InputField::get_onSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__SubmitEvent*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onSubmit(::UnityEngine::UI::__InputField__SubmitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__SubmitEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__OnChangeEvent* UnityEngine::UI::InputField::get_onValueChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__OnChangeEvent*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onValueChange(::UnityEngine::UI::__InputField__OnChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__OnChangeEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__OnChangeEvent* UnityEngine::UI::InputField::get_onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__OnChangeEvent*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onValueChanged(::UnityEngine::UI::__InputField__OnChangeEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__OnChangeEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__OnValidateInput* UnityEngine::UI::InputField::get_onValidateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__OnValidateInput*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_onValidateInput(::UnityEngine::UI::__InputField__OnValidateInput*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__OnValidateInput*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_characterLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_characterLimit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__ContentType UnityEngine::UI::InputField::get_contentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__ContentType, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_contentType(::UnityEngine::UI::__InputField__ContentType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__ContentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__LineType UnityEngine::UI::InputField::get_lineType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__LineType, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_lineType(::UnityEngine::UI::__InputField__LineType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__LineType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__InputType UnityEngine::UI::InputField::get_inputType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__InputType, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_inputType(::UnityEngine::UI::__InputField__InputType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__InputType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::UI::InputField::get_touchScreenKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_touchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboard*, false>(*this, ___internal_method);
}
inline ::UnityEngine::TouchScreenKeyboardType UnityEngine::UI::InputField::get_keyboardType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboardType, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_keyboardType(::UnityEngine::TouchScreenKeyboardType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__InputField__CharacterValidation UnityEngine::UI::InputField::get_characterValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__CharacterValidation, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_characterValidation(::UnityEngine::UI::__InputField__CharacterValidation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__InputField__CharacterValidation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_readOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_readOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_multiLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline char16_t UnityEngine::UI::InputField::get_asteriskChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_asteriskChar(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_wasCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::ClampPos(ByRef<int32_t>  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ClampPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pos);
}
inline int32_t UnityEngine::UI::InputField::get_caretPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretPositionInternal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_caretSelectPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretSelectPositionInternal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::get_hasSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::get_caretPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_caretPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_selectionAnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_selectionAnchorPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::InputField::get_selectionFocusPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_selectionFocusPosition(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UI::InputField::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::UI::InputField::CaretBlink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SetCaretVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SetCaretActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::UpdateCaretMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateCaretMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MoveTextEnd(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void UnityEngine::UI::InputField::MoveTextStart(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline ::StringW UnityEngine::UI::InputField::get_clipboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::InputField::set_clipboard(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::UI::InputField::TouchScreenKeyboardShouldBeUsed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "TouchScreenKeyboardShouldBeUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::InputField::InPlaceEditing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::InputField::InPlaceEditingChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "InPlaceEditingChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::UpdateCaretFromKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateCaretFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::InputField::ScreenToLocal(::UnityEngine::Vector2  screen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ScreenToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, screen);
}
inline int32_t UnityEngine::UI::InputField::GetUnclampedCharacterLineFromPosition(::UnityEngine::Vector2  pos, ::UnityEngine::TextGenerator*  generator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetUnclampedCharacterLineFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, pos, generator);
}
inline int32_t UnityEngine::UI::InputField::GetCharacterIndexFromPosition(::UnityEngine::Vector2  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetCharacterIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, pos);
}
inline bool UnityEngine::UI::InputField::MayDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::System::Collections::IEnumerator* UnityEngine::UI::InputField::MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnEndDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::UnityEngine::UI::__InputField__EditState UnityEngine::UI::InputField::KeyPressed(::UnityEngine::Event*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__InputField__EditState, false>(*this, ___internal_method, evt);
}
inline bool UnityEngine::UI::InputField::IsValidChar(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "IsValidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, c);
}
inline void UnityEngine::UI::InputField::ProcessEvent(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UI::InputField::OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnUpdateSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::StringW UnityEngine::UI::InputField::GetSelectedString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::FindtNextWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "FindtNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MoveRight(bool  shift, bool  ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, ctrl);
}
inline int32_t UnityEngine::UI::InputField::FindtPrevWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "FindtPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MoveLeft(bool  shift, bool  ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, ctrl);
}
inline int32_t UnityEngine::UI::InputField::DetermineCharacterLine(int32_t  charPos, ::UnityEngine::TextGenerator*  generator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "DetermineCharacterLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, charPos, generator);
}
inline int32_t UnityEngine::UI::InputField::LineUpCharacterPosition(int32_t  originalPos, bool  goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, originalPos, goToFirstChar);
}
inline int32_t UnityEngine::UI::InputField::LineDownCharacterPosition(int32_t  originalPos, bool  goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, originalPos, goToLastChar);
}
inline void UnityEngine::UI::InputField::MoveDown(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void UnityEngine::UI::InputField::MoveDown(bool  shift, bool  goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, goToLastChar);
}
inline void UnityEngine::UI::InputField::MoveUp(bool  shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift);
}
inline void UnityEngine::UI::InputField::MoveUp(bool  shift, bool  goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, shift, goToFirstChar);
}
inline void UnityEngine::UI::InputField::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::ForwardSpace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ForwardSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Backspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Insert(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, c);
}
inline void UnityEngine::UI::InputField::UpdateTouchKeyboardFromEditChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnValueChangedAndUpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SendOnSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Append(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline void UnityEngine::UI::InputField::Append(char16_t  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline void UnityEngine::UI::InputField::UpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::InputField::IsSelectionVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "IsSelectionVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::GetLineStartPosition(::UnityEngine::TextGenerator*  gen, int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetLineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gen, line);
}
inline int32_t UnityEngine::UI::InputField::GetLineEndPosition(::UnityEngine::TextGenerator*  gen, int32_t  line)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GetLineEndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextGenerator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gen, line);
}
inline void UnityEngine::UI::InputField::SetDrawRangeToContainCaretPosition(int32_t  caretPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetDrawRangeToContainCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, caretPos);
}
inline void UnityEngine::UI::InputField::ForceLabelUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::MarkGeometryAsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::Rebuild(::UnityEngine::UI::CanvasUpdate  update)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, update);
}
inline void UnityEngine::UI::InputField::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::UpdateGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::AssignPositioningIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnFillVBO(::UnityEngine::Mesh*  vbo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, vbo);
}
inline void UnityEngine::UI::InputField::GenerateCaret(::UnityEngine::UI::VertexHelper*  vbo, ::UnityEngine::Vector2  roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, vbo, roundingOffset);
}
inline void UnityEngine::UI::InputField::CreateCursorVerts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::GenerateHighlight(::UnityEngine::UI::VertexHelper*  vbo, ::UnityEngine::Vector2  roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "GenerateHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, vbo, roundingOffset);
}
inline char16_t UnityEngine::UI::InputField::Validate(::StringW  text, int32_t  pos, char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method, text, pos, ch);
}
inline void UnityEngine::UI::InputField::ActivateInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::ActivateInputFieldInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::DeactivateInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::InputField::EnforceContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::EnforceTextHOverflow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "EnforceTextHOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::SetToCustomIfContentTypeIsNot(::ArrayW<::UnityEngine::UI::__InputField__ContentType,::Array<::UnityEngine::UI::__InputField__ContentType>*>  allowedContentTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UI::__InputField__ContentType,::Array<::UnityEngine::UI::__InputField__ContentType>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, allowedContentTypes);
}
inline void UnityEngine::UI::InputField::SetToCustom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState  state, bool  instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, instant);
}
inline void UnityEngine::UI::InputField::CalculateLayoutInputHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "CalculateLayoutInputHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::InputField::CalculateLayoutInputVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "CalculateLayoutInputVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_minWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_preferredWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_preferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_flexibleWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_flexibleWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_minHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_minHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_preferredHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_preferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::InputField::get_flexibleHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_flexibleHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::UI::InputField::get_layoutPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "get_layoutPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* UnityEngine::UI::InputField::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::InputField*>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
