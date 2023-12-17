#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__SelectObservable_2_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__SelectObservable_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::operator ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept {
return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__set_m_Observable(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*, 0x10>(this, std::forward<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Observable()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*> UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Observable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__set_m_Observer(::System::IObserver_1<TResult>*  value)  {
::cordl_internals::setInstanceField<::System::IObserver_1<TResult>*, 0x18>(this, std::forward<::System::IObserver_1<TResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::IObserver_1<TResult>* UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Observer()  {
return ::cordl_internals::getInstanceField<::System::IObserver_1<TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TResult>*> UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<::System::IObserver_1<TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::New_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  observable, ::System::IObserver_1<TResult>*  observer)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>(observable, observer));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  observable, ::System::IObserver_1<TResult>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, observable, observer);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
/// @brief Convert operator to "::System::IObserver_1<TSource>"
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::operator ::System::IObserver_1<TSource>*() noexcept {
return static_cast<::System::IObserver_1<TSource>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::__set_m_Observable(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*, 0x10>(this, std::forward<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>* UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::__get_m_Observable()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*> UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::__get_m_Observable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::__set_m_Observer(::System::IObserver_1<TResult>*  value)  {
::cordl_internals::setInstanceField<::System::IObserver_1<TResult>*, 0x18>(this, std::forward<::System::IObserver_1<TResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::IObserver_1<TResult>* UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::__get_m_Observer()  {
return ::cordl_internals::getInstanceField<::System::IObserver_1<TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TResult>*> UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<::System::IObserver_1<TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline ::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>* UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::New_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*  observable, ::System::IObserver_1<TResult>*  observer)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>*>(observable, observer));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*  observable, ::System::IObserver_1<TResult>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, observable, observer);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>*>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>*>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>::OnNext(TSource  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__SelectObservable_2__Select<TSource,TResult>*>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
/// @brief Convert operator to "::System::IObservable_1<TResult>"
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::operator ::System::IObservable_1<TResult>*() noexcept {
return static_cast<::System::IObservable_1<TResult>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__set_m_Source(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  value)  {
::cordl_internals::setInstanceField<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, 0x10>(this, std::forward<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Source()  {
return ::cordl_internals::getInstanceField<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Source() const {
return ::cordl_internals::getInstanceField<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__set_m_Filter(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*, 0x18>(this, std::forward<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Filter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*> UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::__get_m_Filter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>* UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::New_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  source, ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  filter)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>(source, filter));
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*  source, ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*  filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source, filter);
}
template<::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::IDisposable* UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>::Subscribe(::System::IObserver_1<TResult>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,TResult>*>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(*this, ___internal_method, observer);
}
/// @brief Convert operator to "::System::IObservable_1<TResult>"
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr  UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::operator ::System::IObservable_1<TResult>*() noexcept {
return static_cast<::System::IObservable_1<TResult>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::__set_m_Source(::System::IObservable_1<TSource>*  value)  {
::cordl_internals::setInstanceField<::System::IObservable_1<TSource>*, 0x10>(this, std::forward<::System::IObservable_1<TSource>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::IObservable_1<TSource>* UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::__get_m_Source()  {
return ::cordl_internals::getInstanceField<::System::IObservable_1<TSource>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TSource>*> UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::__get_m_Source() const {
return ::cordl_internals::getInstanceField<::System::IObservable_1<TSource>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::__set_m_Filter(::System::Func_2<TSource,TResult>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TSource,TResult>*, 0x18>(this, std::forward<::System::Func_2<TSource,TResult>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::System::Func_2<TSource,TResult>* UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::__get_m_Filter()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TSource,TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource,TResult>*> UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::__get_m_Filter() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TSource,TResult>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>* UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::New_ctor(::System::IObservable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  filter)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*>(source, filter));
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline void UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::_ctor(::System::IObservable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TSource>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource,TResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source, filter);
}
template<::il2cpp_utils::il2cpp_reference_type TSource,::il2cpp_utils::il2cpp_reference_type TResult>
inline ::System::IDisposable* UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>::Subscribe(::System::IObserver_1<TResult>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource,TResult>*>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(*this, ___internal_method, observer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
