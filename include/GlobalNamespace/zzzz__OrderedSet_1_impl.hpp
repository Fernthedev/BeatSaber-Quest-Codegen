#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr void GlobalNamespace::__OrderedSet_1__ProcessOrder<T>::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& GlobalNamespace::__OrderedSet_1__ProcessOrder<T>::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& GlobalNamespace::__OrderedSet_1__ProcessOrder<T>::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>::__OrderedSet_1__ProcessOrder(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
template<typename T>
constexpr ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>  GlobalNamespace::__OrderedSet_1__ProcessOrder<T>::Lifo{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>  GlobalNamespace::__OrderedSet_1__ProcessOrder<T>::Fifo{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>  GlobalNamespace::__OrderedSet_1__ProcessOrder<T>::DontCare{static_cast<int32_t>(0x2)};
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1__Node<T>::__set_value(T  value)  {
::cordl_internals::setInstanceField<T, 0x10>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__OrderedSet_1__Node<T>::__get_value()  {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__OrderedSet_1__Node<T>::__get_value() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1__Node<T>::__set_previous(::GlobalNamespace::__OrderedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x18>(this, std::forward<::GlobalNamespace::__OrderedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OrderedSet_1__Node<T>* GlobalNamespace::__OrderedSet_1__Node<T>::__get_previous()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OrderedSet_1__Node<T>*> GlobalNamespace::__OrderedSet_1__Node<T>::__get_previous() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1__Node<T>::__set_next(::GlobalNamespace::__OrderedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x20>(this, std::forward<::GlobalNamespace::__OrderedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OrderedSet_1__Node<T>* GlobalNamespace::__OrderedSet_1__Node<T>::__get_next()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OrderedSet_1__Node<T>*> GlobalNamespace::__OrderedSet_1__Node<T>::__get_next() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1__Node<T>::__set_isRemoved(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool& GlobalNamespace::__OrderedSet_1__Node<T>::__get_isRemoved()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr bool const& GlobalNamespace::__OrderedSet_1__Node<T>::__get_isRemoved() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1__Node<T>::__set_clearCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__OrderedSet_1__Node<T>::__get_clearCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__OrderedSet_1__Node<T>::__get_clearCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__OrderedSet_1__Node<T>* GlobalNamespace::__OrderedSet_1__Node<T>::New_ctor(T  value, int32_t  clearCount)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OrderedSet_1__Node<T>*>(value, clearCount));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OrderedSet_1__Node<T>::_ctor(T  value, int32_t  clearCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, clearCount);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__set___2__current(T  value)  {
::cordl_internals::setInstanceField<T, 0x18>(this, std::forward<T>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T& GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get___2__current()  {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr T const& GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get___2__current() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__set___4__this(::GlobalNamespace::OrderedSet_1<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OrderedSet_1<T>*, 0x20>(this, std::forward<::GlobalNamespace::OrderedSet_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::OrderedSet_1<T>* GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OrderedSet_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OrderedSet_1<T>*> GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OrderedSet_1<T>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__set__next_5__2(::GlobalNamespace::__OrderedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x28>(this, std::forward<::GlobalNamespace::__OrderedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OrderedSet_1__Node<T>* GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get__next_5__2()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OrderedSet_1__Node<T>*> GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::__get__next_5__2() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>* GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>*>::get(),
                            "System.Collections.Generic.IEnumerator<T>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Object* GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OrderedSet_1___GetEnumerator_d__23<T>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::OrderedSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr  GlobalNamespace::OrderedSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__comparison(::System::Comparison_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Comparison_1<T>*, 0x10>(this, std::forward<::System::Comparison_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Comparison_1<T>* GlobalNamespace::OrderedSet_1<T>::__get__comparison()  {
return ::cordl_internals::getInstanceField<::System::Comparison_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Comparison_1<T>*> GlobalNamespace::OrderedSet_1<T>::__get__comparison() const {
return ::cordl_internals::getInstanceField<::System::Comparison_1<T>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__processOrder(::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>, 0x18>(this, std::forward<::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>& GlobalNamespace::OrderedSet_1<T>::__get__processOrder()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T> const& GlobalNamespace::OrderedSet_1<T>::__get__processOrder() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__sortIndices(::System::Collections::Generic::Dictionary_2<T,::GlobalNamespace::__OrderedSet_1__Node<T>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<T,::GlobalNamespace::__OrderedSet_1__Node<T>*>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<T,::GlobalNamespace::__OrderedSet_1__Node<T>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::Dictionary_2<T,::GlobalNamespace::__OrderedSet_1__Node<T>*>* GlobalNamespace::OrderedSet_1<T>::__get__sortIndices()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<T,::GlobalNamespace::__OrderedSet_1__Node<T>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<T,::GlobalNamespace::__OrderedSet_1__Node<T>*>*> GlobalNamespace::OrderedSet_1<T>::__get__sortIndices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<T,::GlobalNamespace::__OrderedSet_1__Node<T>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__head(::GlobalNamespace::__OrderedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x28>(this, std::forward<::GlobalNamespace::__OrderedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OrderedSet_1__Node<T>* GlobalNamespace::OrderedSet_1<T>::__get__head()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OrderedSet_1__Node<T>*> GlobalNamespace::OrderedSet_1<T>::__get__head() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__tail(::GlobalNamespace::__OrderedSet_1__Node<T>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x30>(this, std::forward<::GlobalNamespace::__OrderedSet_1__Node<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::GlobalNamespace::__OrderedSet_1__Node<T>* GlobalNamespace::OrderedSet_1<T>::__get__tail()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OrderedSet_1__Node<T>*> GlobalNamespace::OrderedSet_1<T>::__get__tail() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OrderedSet_1__Node<T>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::OrderedSet_1<T>::__set__clearCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::OrderedSet_1<T>::__get__clearCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::OrderedSet_1<T>::__get__clearCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline int32_t GlobalNamespace::OrderedSet_1<T>::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
/// @param processOrder: ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T> (default: static_cast<int32_t>(0x2))
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::OrderedSet_1<T>* GlobalNamespace::OrderedSet_1<T>::New_ctor(::System::Comparison_1<T>*  comparison, ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>  processOrder)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OrderedSet_1<T>*>(comparison, processOrder));
}
/// @param processOrder: ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T> (default: static_cast<int32_t>(0x2))
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::_ctor(::System::Comparison_1<T>*  comparison, ::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>  processOrder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__ProcessOrder<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparison, processOrder);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::OrderedSet_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::OrderedSet_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::UpdateSortedPosition(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "UpdateSortedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::AppendNode(::GlobalNamespace::__OrderedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "AppendNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::AppendNodeUnchecked(::GlobalNamespace::__OrderedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "AppendNodeUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::PrependNode(::GlobalNamespace::__OrderedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "PrependNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::PrependNodeUnchecked(::GlobalNamespace::__OrderedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "PrependNodeUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::SwapNodes(::GlobalNamespace::__OrderedSet_1__Node<T>*  previous, ::GlobalNamespace::__OrderedSet_1__Node<T>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "SwapNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, previous, next);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::RemoveNode(::GlobalNamespace::__OrderedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "RemoveNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::OrderedSet_1<T>::UpdateSortedPosition(::GlobalNamespace::__OrderedSet_1__Node<T>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "UpdateSortedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OrderedSet_1__Node<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OrderedSet_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::IEnumerator* GlobalNamespace::OrderedSet_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::OrderedSet_1<T>::GetFirstOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "GetFirstOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool GlobalNamespace::OrderedSet_1<T>::TryGetFirst(ByRef<T>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(),
                            "TryGetFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
