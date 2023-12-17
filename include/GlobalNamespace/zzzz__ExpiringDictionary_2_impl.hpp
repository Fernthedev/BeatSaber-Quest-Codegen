#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__set_key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey& GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__get_key()  {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey const& GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__get_key() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__set_value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__get_value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__get_value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__set_expireTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int64_t& GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__get_expireTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int64_t const& GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::__get_expireTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>* GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___2__current(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___2__current()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___2__current() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___4__this(::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*, 0x20>(this, std::forward<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>* GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*> GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x28>(this, std::forward<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>* GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*> GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>* GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_Collections_Generic_IEnumerator_TValue__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>::get(),
                            "System.Collections.Generic.IEnumerator<TValue>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ExpiringDictionary_2___Enumerate_d__14<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__timeProvider(::BGNet::Core::ITimeProvider*  value)  {
::cordl_internals::setInstanceField<::BGNet::Core::ITimeProvider*, 0x10>(this, std::forward<::BGNet::Core::ITimeProvider*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::BGNet::Core::ITimeProvider* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__timeProvider()  {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITimeProvider*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::ITimeProvider*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__expirationLengthMs(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int64_t& GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__expirationLengthMs()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int64_t const& GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__expirationLengthMs() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__expirationQueue(::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x20>(this, std::forward<::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__expirationQueue()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__expirationQueue() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OrderedSet_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__entryLookup(::System::Collections::Generic::Dictionary_2<TKey,::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TKey,::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x28>(this, std::forward<::System::Collections::Generic::Dictionary_2<TKey,::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__entryLookup()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__entryLookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__set__reusableEntries(::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__reusableEntries()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*> GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::__get__reusableEntries() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>*, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::New_ctor(::BGNet::Core::ITimeProvider*  timeProvider, int64_t  expirationLengthMs)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>(timeProvider, expirationLengthMs));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::_ctor(::BGNet::Core::ITimeProvider*  timeProvider, int64_t  expirationLengthMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timeProvider, expirationLengthMs);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::CompareEntries(::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*  a, ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "CompareEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::RemoveExpiredEntries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "RemoveExpiredEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::IEnumerator* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Enumerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::TryGetValue(TKey  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::TryGetValueAndResetExpiration(TKey  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "TryGetValueAndResetExpiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::ResetExpiration(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "ResetExpiration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Get(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Set(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::set_Item(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>* GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::GetEntry(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "GetEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ExpiringDictionary_2<TKey,TValue>::ReleaseEntry(::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*  entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey,TValue>*>::get(),
                            "ReleaseEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ExpiringDictionary_2__Entry<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, entry);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
