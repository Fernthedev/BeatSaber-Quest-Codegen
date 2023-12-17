#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__FastPriorityQueue_1_def.hpp"
#include "Priority_Queue/zzzz__FastPriorityQueue_1_def.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__set___2__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__set___4__this(::Priority_Queue::FastPriorityQueue_1<T>*  value)  {
::cordl_internals::setInstanceField<::Priority_Queue::FastPriorityQueue_1<T>*, 0x20>(this, std::forward<::Priority_Queue::FastPriorityQueue_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::Priority_Queue::FastPriorityQueue_1<T>* Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::Priority_Queue::FastPriorityQueue_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::Priority_Queue::FastPriorityQueue_1<T>*> Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::Priority_Queue::FastPriorityQueue_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__set__i_5__2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get__i_5__2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>* Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::__FastPriorityQueue_1___GetEnumerator_d__22<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Priority_Queue::FastPriorityQueue_1<T>::operator ::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>*() noexcept {
return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Priority_Queue::FastPriorityQueue_1<T>::operator ::Priority_Queue::IPriorityQueue_2<T,float_t>*() noexcept {
return static_cast<::Priority_Queue::IPriorityQueue_2<T,float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Priority_Queue::FastPriorityQueue_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  Priority_Queue::FastPriorityQueue_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Priority_Queue::FastPriorityQueue_1<T>::__set__numNodes(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& Priority_Queue::FastPriorityQueue_1<T>::__get__numNodes()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& Priority_Queue::FastPriorityQueue_1<T>::__get__numNodes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void Priority_Queue::FastPriorityQueue_1<T>::__set__nodes(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& Priority_Queue::FastPriorityQueue_1<T>::__get__nodes()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& Priority_Queue::FastPriorityQueue_1<T>::__get__nodes() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::Priority_Queue::FastPriorityQueue_1<T>* Priority_Queue::FastPriorityQueue_1<T>::New_ctor(int32_t  maxNodes)  {
return THROW_UNLESS(::il2cpp_utils::New<::Priority_Queue::FastPriorityQueue_1<T>*>(maxNodes));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::_ctor(int32_t  maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxNodes);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t Priority_Queue::FastPriorityQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t Priority_Queue::FastPriorityQueue_1<T>::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "get_MaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Priority_Queue::FastPriorityQueue_1<T>::Contains(T  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::Enqueue(T  node, float_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, priority);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::CascadeUp(T  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "CascadeUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::CascadeDown(T  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "CascadeDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Priority_Queue::FastPriorityQueue_1<T>::HasHigherPriority(T  higher, T  lower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "HasHigherPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, higher, lower);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Priority_Queue::FastPriorityQueue_1<T>::HasHigherOrEqualPriority(T  higher, T  lower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "HasHigherOrEqualPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, higher, lower);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T Priority_Queue::FastPriorityQueue_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::Resize(int32_t  maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxNodes);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T Priority_Queue::FastPriorityQueue_1<T>::get_First()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "get_First",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::UpdatePriority(T  node, float_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "UpdatePriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, priority);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::OnNodeUpdated(T  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "OnNodeUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::Remove(T  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void Priority_Queue::FastPriorityQueue_1<T>::ResetNode(T  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "ResetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Priority_Queue::FastPriorityQueue_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* Priority_Queue::FastPriorityQueue_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool Priority_Queue::FastPriorityQueue_1<T>::IsValidQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::FastPriorityQueue_1<T>*>::get(),
                            "IsValidQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
