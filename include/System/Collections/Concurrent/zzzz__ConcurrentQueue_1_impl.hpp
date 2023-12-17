#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Concurrent/zzzz__IProducerConsumerCollection_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__PaddedHeadAndTail_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
constexpr void GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>::__set_Item(T  value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<T>(value));
}
template<typename T>
constexpr T& GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>::__get_Item()  {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr T const& GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>::__get_Item() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr void GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>::__set_SequenceNumber(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>::__get_SequenceNumber()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>::__get_SequenceNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>::__ConcurrentQueue_1__Segment__Slot(T  Item, int32_t  SequenceNumber) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item = Item;
this->SequenceNumber = SequenceNumber;
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__set__slots(::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>, 0x10>(this, std::forward<::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__slots()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*> const& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__slots() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>,::Array<::GlobalNamespace::__ConcurrentQueue_1__Segment__Slot<T>>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__set__slotsMask(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__slotsMask()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__slotsMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__set__headAndTail(::System::Collections::Concurrent::PaddedHeadAndTail  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::PaddedHeadAndTail, 0x1c>(this, std::forward<::System::Collections::Concurrent::PaddedHeadAndTail>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::PaddedHeadAndTail& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__headAndTail()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::PaddedHeadAndTail, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::PaddedHeadAndTail const& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__headAndTail() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::PaddedHeadAndTail, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__set__preservedForObservation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19c>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__preservedForObservation()  {
return ::cordl_internals::getInstanceField<bool, 0x19c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__preservedForObservation() const {
return ::cordl_internals::getInstanceField<bool, 0x19c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__set__frozenForEnqueues(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19d>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__frozenForEnqueues()  {
return ::cordl_internals::getInstanceField<bool, 0x19d>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__frozenForEnqueues() const {
return ::cordl_internals::getInstanceField<bool, 0x19d>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__set__nextSegment(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x1a0>(this, std::forward<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__nextSegment()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x1a0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::__get__nextSegment() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x1a0>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::New_ctor(int32_t  boundedLength)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>(boundedLength));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::_ctor(int32_t  boundedLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, boundedLength);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::get_FreezeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(),
                            "get_FreezeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::EnsureFrozenForEnqueues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(),
                            "EnsureFrozenForEnqueues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::TryDequeue(ByRef<T>  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>::TryEnqueue(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(),
                            "TryEnqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set___2__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set_head(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x20>(this, std::forward<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_head()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_head() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set_tail(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x28>(this, std::forward<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_tail()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_tail() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set_tailTail(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_tailTail()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_tailTail() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set_headHead(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_headHead()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get_headHead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set___4__this(::System::Collections::Concurrent::ConcurrentQueue_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<T>*, 0x38>(this, std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>* System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<T>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentQueue_1<T>*> System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentQueue_1<T>*, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set__headTail_5__2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__headTail_5__2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__headTail_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set__i_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__i_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set__s_5__4(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x48>(this, std::forward<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__s_5__4()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__s_5__4() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x48>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__set__i_5__5(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__i_5__5()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::__get__i_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>* System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentQueue_1___Enumerate_d__28<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Concurrent::IProducerConsumerCollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Concurrent::IProducerConsumerCollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Concurrent::ConcurrentQueue_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__set__crossSegmentLock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Object* System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__crossSegmentLock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__crossSegmentLock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__set__tail(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x18>(this, std::forward<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__tail()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__tail() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void System::Collections::Concurrent::ConcurrentQueue_1<T>::__set__head(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x20>(this, std::forward<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__head()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*> System::Collections::Concurrent::ConcurrentQueue_1<T>::__get__head() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Concurrent::ConcurrentQueue_1<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake(ByRef<T>  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "System.Collections.Concurrent.IProducerConsumerCollection<T>.TryTake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::ArrayW<T,::Array<T>*> System::Collections::Concurrent::ConcurrentQueue_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::ConcurrentQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Concurrent::ConcurrentQueue_1<T>::GetCount(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  s, int32_t  head, int32_t  tail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, head, tail);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int64_t System::Collections::Concurrent::ConcurrentQueue_1<T>::GetCount(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  head, int32_t  headHead, ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  tail, int32_t  tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "GetCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, head, headHead, tail, tailTail);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::SnapForObservation(ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>  head, ByRef<int32_t>  headHead, ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>  tail, ByRef<int32_t>  tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "SnapForObservation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, head, headHead, tail, tailTail);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T System::Collections::Concurrent::ConcurrentQueue_1<T>::GetItemWhenAvailable(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  segment, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "GetItemWhenAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, segment, i);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::Concurrent::ConcurrentQueue_1<T>::Enumerate(::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  head, int32_t  headHead, ::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*  tail, int32_t  tailTail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentQueue_1__Segment<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method, head, headHead, tail, tailTail);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::Enqueue(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Concurrent::ConcurrentQueue_1<T>::EnqueueSlow(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "EnqueueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::TryDequeue(ByRef<T>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "TryDequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Concurrent::ConcurrentQueue_1<T>::TryDequeueSlow(ByRef<T>  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentQueue_1<T>*>::get(),
                            "TryDequeueSlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
