#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentBag_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__headIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__headIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__headIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__tailIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__tailIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__tailIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__array(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__array()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__mask(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__mask()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__addTakeCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__addTakeCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__addTakeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__stealCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__stealCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__stealCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__currentOp(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__currentOp()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__currentOp() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__frozen(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__frozen()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__frozen() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__nextQueue(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, 0x38>(this, std::forward<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__nextQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*> System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__nextQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__set__ownerThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__ownerThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::__get__ownerThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::New_ctor(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*  nextQueue)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>(nextQueue));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::_ctor(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*  nextQueue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nextQueue);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::LocalPush(T  item, ByRef<int64_t>  emptyToNonEmptyListTransitionCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                            "LocalPush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item, emptyToNonEmptyListTransitionCount);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::LocalClear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                            "LocalClear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::TryLocalPop(ByRef<T>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                            "TryLocalPop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::TrySteal(ByRef<T>  result, bool  take)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result, take);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::DangerousCopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                            "DangerousCopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, array, arrayIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>::get_DangerousCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(),
                            "get_DangerousCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__set__array(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this, std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*>& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__array()  {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<T,::Array<T>*> const& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__array() const {
return ::cordl_internals::getInstanceField<::ArrayW<T,::Array<T>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__set__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__set__index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>* System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::New_ctor(::ArrayW<T,::Array<T>*>  array)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>(array));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::_ctor(::ArrayW<T,::Array<T>*>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentBag_1__Enumerator<T>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentBag_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__locals(::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*, 0x10>(this, std::forward<::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>* System::Collections::Concurrent::ConcurrentBag_1<T>::__get__locals()  {
return ::cordl_internals::getInstanceField<::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*> System::Collections::Concurrent::ConcurrentBag_1<T>::__get__locals() const {
return ::cordl_internals::getInstanceField<::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__workStealingQueues(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, 0x18>(this, std::forward<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::__get__workStealingQueues()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*> System::Collections::Concurrent::ConcurrentBag_1<T>::__get__workStealingQueues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::ConcurrentBag_1<T>::__set__emptyToNonEmptyListTransitionCount(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int64_t& System::Collections::Concurrent::ConcurrentBag_1<T>::__get__emptyToNonEmptyListTransitionCount()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int64_t const& System::Collections::Concurrent::ConcurrentBag_1<T>::__get__emptyToNonEmptyListTransitionCount() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::ConcurrentBag_1<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::ConcurrentBag_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentBag_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentBag_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::TryTake(ByRef<T>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::GetCurrentThreadWorkStealingQueue(bool  forceCreate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "GetCurrentThreadWorkStealingQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, false>(*this, ___internal_method, forceCreate);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::CreateWorkStealingQueueForCurrentThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "CreateWorkStealingQueueForCurrentThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::GetUnownedWorkStealingQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "GetUnownedWorkStealingQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::TrySteal(ByRef<T>  result, bool  take)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "TrySteal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result, take);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::TryStealFromTo(::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*  startInclusive, ::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*  endExclusive, ByRef<T>  result, bool  take)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "TryStealFromTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentBag_1__WorkStealingQueue<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, startInclusive, endExclusive, result, take);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentBag_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::CopyFromEachQueueToArray(::ArrayW<T,::Array<T>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "CopyFromEachQueueToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> System::Collections::Concurrent::ConcurrentBag_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentBag_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::ConcurrentBag_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::ConcurrentBag_1<T>::get_DangerousCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "get_DangerousCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Concurrent::ConcurrentBag_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Concurrent::ConcurrentBag_1<T>::get_GlobalQueuesLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "get_GlobalQueuesLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentBag_1<T>::FreezeBag(ByRef<bool>  lockTaken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "FreezeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lockTaken);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentBag_1<T>::UnfreezeBag(bool  lockTaken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentBag_1<T>*>::get(),
                            "UnfreezeBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lockTaken);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
