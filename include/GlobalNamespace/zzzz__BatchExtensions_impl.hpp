#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BatchExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BatchExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>* GlobalNamespace::BatchExtensions::Batch(::System::Collections::Generic::IEnumerable_1<T>*  enumerable, int32_t  batchSize)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BatchExtensions*>::get(),
                        "Batch",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>*, false>(nullptr, ___internal_method, enumerable, batchSize);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::List_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___2__current(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set_enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_enumerable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_enumerable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___3__enumerable(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerable_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__enumerable()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<T>*> GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__enumerable() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set_batchSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_batchSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get_batchSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___3__batchSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__batchSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___3__batchSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x40>(this, std::forward<::System::Collections::Generic::IEnumerator_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<T>*> GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<T>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_Generic_IEnumerator_System_Collections_Generic_List_T___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.List<T>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_Generic_IEnumerable_System_Collections_Generic_List_T___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "System.Collections.Generic.IEnumerable<System.Collections.Generic.List<T>>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::List_1<T>*>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BatchExtensions___Batch_d__0_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
