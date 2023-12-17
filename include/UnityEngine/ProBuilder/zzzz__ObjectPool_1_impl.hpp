#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ObjectPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  UnityEngine::ProBuilder::ObjectPool_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_m_IsDisposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_IsDisposed()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_IsDisposed() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_m_Pool(::System::Collections::Generic::Queue_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::Queue_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Queue_1<T>* UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_Pool()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_Pool() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_desiredSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_desiredSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_desiredSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_constructor(::System::Func_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Func_1<T>*, 0x28>(this, std::forward<::System::Func_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Func_1<T>* UnityEngine::ProBuilder::ObjectPool_1<T>::__get_constructor()  {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> UnityEngine::ProBuilder::ObjectPool_1<T>::__get_constructor() const {
return ::cordl_internals::getInstanceField<::System::Func_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_destructor(::System::Action_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<T>*, 0x30>(this, std::forward<::System::Action_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action_1<T>* UnityEngine::ProBuilder::ObjectPool_1<T>::__get_destructor()  {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> UnityEngine::ProBuilder::ObjectPool_1<T>::__get_destructor() const {
return ::cordl_internals::getInstanceField<::System::Action_1<T>*, 0x30>(this);
}
/// @param lazyInitialization: bool (default: false)
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::ProBuilder::ObjectPool_1<T>* UnityEngine::ProBuilder::ObjectPool_1<T>::New_ctor(int32_t  initialSize, int32_t  desiredSize, ::System::Func_1<T>*  constructor, ::System::Action_1<T>*  destructor, bool  lazyInitialization)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::ObjectPool_1<T>*>(initialSize, desiredSize, constructor, destructor, lazyInitialization));
}
/// @param lazyInitialization: bool (default: false)
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::ProBuilder::ObjectPool_1<T>::_ctor(int32_t  initialSize, int32_t  desiredSize, ::System::Func_1<T>*  constructor, ::System::Action_1<T>*  destructor, bool  lazyInitialization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initialSize, desiredSize, constructor, destructor, lazyInitialization);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T UnityEngine::ProBuilder::ObjectPool_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Enqueue(T  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(),
                            "Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
