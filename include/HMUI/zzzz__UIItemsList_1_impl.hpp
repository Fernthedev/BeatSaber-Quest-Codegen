#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::HMUI::__UIItemsList_1__DataCallback<T>* HMUI::__UIItemsList_1__DataCallback<T>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__UIItemsList_1__DataCallback<T>*>(object, method));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::__UIItemsList_1__DataCallback<T>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::__UIItemsList_1__DataCallback<T>::Invoke(int32_t  idx, T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, idx, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::IAsyncResult* HMUI::__UIItemsList_1__DataCallback<T>::BeginInvoke(int32_t  idx, T  item, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, idx, item, callback, object);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::__UIItemsList_1__DataCallback<T>::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__UIItemsList_1__DataCallback<T>*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void HMUI::UIItemsList_1<T>::__set__prefab(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& HMUI::UIItemsList_1<T>::__get__prefab()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& HMUI::UIItemsList_1<T>::__get__prefab() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void HMUI::UIItemsList_1<T>::__set__itemsContainer(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::Transform* HMUI::UIItemsList_1<T>::__get__itemsContainer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> HMUI::UIItemsList_1<T>::__get__itemsContainer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void HMUI::UIItemsList_1<T>::__set__insertInTheBeginning(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& HMUI::UIItemsList_1<T>::__get__insertInTheBeginning()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& HMUI::UIItemsList_1<T>::__get__insertInTheBeginning() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void HMUI::UIItemsList_1<T>::__set__container(::Zenject::DiContainer*  value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer*, 0x30>(this, std::forward<::Zenject::DiContainer*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Zenject::DiContainer* HMUI::UIItemsList_1<T>::__get__container()  {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> HMUI::UIItemsList_1<T>::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void HMUI::UIItemsList_1<T>::__set__items(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* HMUI::UIItemsList_1<T>::__get__items()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> HMUI::UIItemsList_1<T>::__get__items() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerable_1<T>* HMUI::UIItemsList_1<T>::get_items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(),
                            "get_items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::UIItemsList_1<T>::SetData(int32_t  numberOfElements, ::HMUI::__UIItemsList_1__DataCallback<T>*  dataCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__UIItemsList_1__DataCallback<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, numberOfElements, dataCallback);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::HMUI::UIItemsList_1<T>* HMUI::UIItemsList_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::UIItemsList_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void HMUI::UIItemsList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIItemsList_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
