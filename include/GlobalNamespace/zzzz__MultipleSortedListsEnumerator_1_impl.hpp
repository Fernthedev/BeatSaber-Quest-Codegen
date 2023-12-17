#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultipleSortedListsEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__MultipleSortedListsEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__BinaryHeap_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::operator ::System::IComparable_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__set__dataList(::System::Collections::Generic::IReadOnlyList_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>*, 0x10>(this, std::forward<::System::Collections::Generic::IReadOnlyList_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__dataList()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<T>*> GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__dataList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__set__idx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__idx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__idx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__set__currentValue(T  value)  {
::cordl_internals::setInstanceField<T, 0x20>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__currentValue()  {
return ::cordl_internals::getInstanceField<T, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::__get__currentValue() const {
return ::cordl_internals::getInstanceField<T, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::get_currentValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>::get(),
                            "get_currentValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>* GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::New_ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  dataList)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>(dataList));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::_ctor(::System::Collections::Generic::IReadOnlyList_1<T>*  dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataList);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::MoveToNextItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>::get(),
                            "MoveToNextItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>::CompareTo(::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*  heapItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, heapItem);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set___2__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set___4__this(::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*, 0x20>(this, std::forward<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::MultipleSortedListsEnumerator_1<T>* GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*> GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__set__heapItem_5__2(::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*, 0x28>(this, std::forward<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>* GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get__heapItem_5__2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*> GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::__get__heapItem_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>* GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultipleSortedListsEnumerator_1___GetEnumerator_d__4<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::MultipleSortedListsEnumerator_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::MultipleSortedListsEnumerator_1<T>::__set__heap(::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*, 0x10>(this, std::forward<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>* GlobalNamespace::MultipleSortedListsEnumerator_1<T>::__get__heap()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*> GlobalNamespace::MultipleSortedListsEnumerator_1<T>::__get__heap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BinaryHeap_1<::GlobalNamespace::__MultipleSortedListsEnumerator_1__HeapItem<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::MultipleSortedListsEnumerator_1<T>* GlobalNamespace::MultipleSortedListsEnumerator_1<T>::New_ctor(::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>*,::Array<::System::Collections::Generic::IReadOnlyList_1<T>*>*>  dataList)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*>(dataList));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::MultipleSortedListsEnumerator_1<T>::_ctor(::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>*,::Array<::System::Collections::Generic::IReadOnlyList_1<T>*>*>  dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::IReadOnlyList_1<T>*,::Array<::System::Collections::Generic::IReadOnlyList_1<T>*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataList);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* GlobalNamespace::MultipleSortedListsEnumerator_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::MultipleSortedListsEnumerator_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipleSortedListsEnumerator_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
