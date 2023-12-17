#pragma once
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TouchScreenTextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEngine_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextInputField_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(::UnityEngine::UIElements::TextEditorEngine*, ::UnityEngine::UIElements::ITextInputField*)>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e3ab1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.PollTouchScreenKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2e3ab24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                            "PollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.DoPollTouchScreenKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x2e3ad80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                            "DoPollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.ExecuteDefaultActionAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2e3b4a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x20>(this, std::forward<::UnityEngine::UIElements::IVisualElementScheduledItem*>(value));
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_TouchKeyboardPoller()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_TouchKeyboardPoller() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__set_m_LastPointerDownTarget(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x28>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_LastPointerDownTarget()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_LastPointerDownTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x28>(this);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::setStaticF_s_KeyboardOnScreen(::UnityEngine::TouchScreenKeyboard*  value)  {
::cordl_internals::setStaticField<::UnityEngine::TouchScreenKeyboard*, "s_KeyboardOnScreen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get>(std::forward<::UnityEngine::TouchScreenKeyboard*>(value));
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::getStaticF_s_KeyboardOnScreen()  {
return ::cordl_internals::getStaticField<::UnityEngine::TouchScreenKeyboard*, "s_KeyboardOnScreen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get>();
}
inline ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::New_ctor(::UnityEngine::UIElements::TextEditorEngine*  editorEngine, ::UnityEngine::UIElements::ITextInputField*  textInputField)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(editorEngine, textInputField));
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextEditorEngine*  editorEngine, ::UnityEngine::UIElements::ITextInputField*  textInputField)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, editorEngine, textInputField);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                            "PollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                            "DoPollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
