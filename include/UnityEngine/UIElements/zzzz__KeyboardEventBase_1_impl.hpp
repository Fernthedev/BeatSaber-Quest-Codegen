#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/UIElements/zzzz__IKeyboardEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IKeyboardEvent"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::UIElements::KeyboardEventBase_1<T>::operator ::UnityEngine::UIElements::IKeyboardEvent*() noexcept {
return static_cast<::UnityEngine::UIElements::IKeyboardEvent*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::KeyboardEventBase_1<T>::__set__modifiers_k__BackingField(::UnityEngine::EventModifiers  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventModifiers, 0x7c>(this, std::forward<::UnityEngine::EventModifiers>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::KeyboardEventBase_1<T>::__get__modifiers_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventModifiers, 0x7c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::KeyboardEventBase_1<T>::__get__modifiers_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventModifiers, 0x7c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::KeyboardEventBase_1<T>::__set__character_k__BackingField(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x80>(this, std::forward<char16_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr char16_t& UnityEngine::UIElements::KeyboardEventBase_1<T>::__get__character_k__BackingField()  {
return ::cordl_internals::getInstanceField<char16_t, 0x80>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr char16_t const& UnityEngine::UIElements::KeyboardEventBase_1<T>::__get__character_k__BackingField() const {
return ::cordl_internals::getInstanceField<char16_t, 0x80>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::KeyboardEventBase_1<T>::__set__keyCode_k__BackingField(::UnityEngine::KeyCode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::KeyCode, 0x84>(this, std::forward<::UnityEngine::KeyCode>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::KeyCode& UnityEngine::UIElements::KeyboardEventBase_1<T>::__get__keyCode_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x84>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::KeyCode const& UnityEngine::UIElements::KeyboardEventBase_1<T>::__get__keyCode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x84>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::KeyboardEventBase_1<T>::get_modifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::set_modifiers(::UnityEngine::EventModifiers  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "set_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline char16_t UnityEngine::UIElements::KeyboardEventBase_1<T>::get_character()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_character",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::set_character(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "set_character",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::KeyCode UnityEngine::UIElements::KeyboardEventBase_1<T>::get_keyCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::set_keyCode(::UnityEngine::KeyCode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "set_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_shiftKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_ctrlKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_commandKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_commandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_altKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_actionKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "get_actionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "LocalInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::KeyboardEventBase_1<T>::GetPooled(char16_t  c, ::UnityEngine::KeyCode  keyCode, ::UnityEngine::EventModifiers  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, c, keyCode, modifiers);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::UIElements::KeyboardEventBase_1<T>::GetPooled(::UnityEngine::Event*  systemEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, systemEvent);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::KeyboardEventBase_1<T>* UnityEngine::UIElements::KeyboardEventBase_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
