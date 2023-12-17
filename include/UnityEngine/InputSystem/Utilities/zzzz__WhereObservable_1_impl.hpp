#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__WhereObservable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__WhereObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
/// @brief Convert operator to "::System::IObserver_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::operator ::System::IObserver_1<TValue>*() noexcept {
return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::__set_m_Observable(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*, 0x10>(this, std::forward<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::__get_m_Observable()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*> UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::__get_m_Observable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::__set_m_Observer(::System::IObserver_1<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::IObserver_1<TValue>*, 0x18>(this, std::forward<::System::IObserver_1<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::IObserver_1<TValue>* UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::__get_m_Observer()  {
return ::cordl_internals::getInstanceField<::System::IObserver_1<TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TValue>*> UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<::System::IObserver_1<TValue>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>* UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::New_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*  observable, ::System::IObserver_1<TValue>*  observer)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>*>(observable, observer));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*  observable, ::System::IObserver_1<TValue>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, observable, observer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>*>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>*>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, error);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>::OnNext(TValue  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__WhereObservable_1__Where<TValue>*>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
/// @brief Convert operator to "::System::IObservable_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::operator ::System::IObservable_1<TValue>*() noexcept {
return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__set_m_Source(::System::IObservable_1<TValue>*  value)  {
::cordl_internals::setInstanceField<::System::IObservable_1<TValue>*, 0x10>(this, std::forward<::System::IObservable_1<TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__get_m_Source()  {
return ::cordl_internals::getInstanceField<::System::IObservable_1<TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TValue>*> UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__get_m_Source() const {
return ::cordl_internals::getInstanceField<::System::IObservable_1<TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__set_m_Predicate(::System::Func_2<TValue,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<TValue,bool>*, 0x18>(this, std::forward<::System::Func_2<TValue,bool>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Func_2<TValue,bool>* UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__get_m_Predicate()  {
return ::cordl_internals::getInstanceField<::System::Func_2<TValue,bool>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TValue,bool>*> UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__get_m_Predicate() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TValue,bool>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::New_ctor(::System::IObservable_1<TValue>*  source, ::System::Func_2<TValue,bool>*  predicate)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>(source, predicate));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::_ctor(::System::IObservable_1<TValue>*  source, ::System::Func_2<TValue,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TValue,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, source, predicate);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::Subscribe(::System::IObserver_1<TValue>*  observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(*this, ___internal_method, observer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
