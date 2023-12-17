#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__set__buckets(::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>, 0x10>(this, std::forward<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>& System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*> const& System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__set__locks(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__get__locks()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__get__locks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__set__countPerLock(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__get__countPerLock()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::__get__countPerLock() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>* System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::New_ctor(::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>  buckets, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  locks, ::ArrayW<int32_t,::Array<int32_t>*>  countPerLock)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*>(buckets, locks, countPerLock));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>::_ctor(::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>  buckets, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  locks, ::ArrayW<int32_t,::Array<int32_t>*>  countPerLock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buckets, locks, countPerLock);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__set__key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey& System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__key()  {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey const& System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__key() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__set__value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__set__next(::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*, 0x20>(this, std::forward<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>* System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__next()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*> System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__next() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__set__hashcode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__hashcode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::__get__hashcode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>* System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::New_ctor(TKey  key, TValue  value, int32_t  hashcode, ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*  next)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>(key, value, hashcode, next));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>::_ctor(TKey  key, TValue  value, int32_t  hashcode, ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*  next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value, hashcode, next);
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::__set__enumerator(::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*, 0x10>(this, std::forward<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::__get__enumerator()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*> System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::__get__enumerator() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>* System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::New_ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*  dictionary)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>(dictionary));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::_ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dictionary);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::DictionaryEntry System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2__DictionaryEnumerator<TKey,TValue>*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__set___2__current(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x18>(this, std::forward<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> const& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__set___4__this(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*, 0x28>(this, std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>* System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get___4__this()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*> System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__set__buckets_5__2(::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>, 0x30>(this, std::forward<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get__buckets_5__2()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*> const& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get__buckets_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*,::Array<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>*>, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__set__i_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get__i_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__set__current_5__4(::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*, 0x40>(this, std::forward<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>* System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get__current_5__4()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*> System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::__get__current_5__4() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Node<TKey,TValue>*, 0x40>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>* System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>*>(__1__state));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::__ConcurrentDictionary_2___GetEnumerator_d__35<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::IDictionary*() noexcept {
return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__set__tables(::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*, 0x10>(this, std::forward<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__tables()  {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*> System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__tables() const {
return ::cordl_internals::getInstanceField<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<TKey>*, 0x18>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<TKey>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<TKey>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__set__growLockArray(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr bool& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__growLockArray()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr bool const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__growLockArray() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__set__budget(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__budget()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__budget() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__set__serializationArray(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>, 0x28>(this, std::forward<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__serializationArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*> const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__serializationArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>, 0x28>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__set__serializationConcurrencyLevel(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__serializationConcurrencyLevel()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__serializationConcurrencyLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__set__serializationCapacity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__serializationCapacity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::__get__serializationCapacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::setStaticF_s_isValueWriteAtomic(bool  value)  {
::cordl_internals::setStaticField<bool, "s_isValueWriteAtomic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get>(std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::getStaticF_s_isValueWriteAtomic()  {
return ::cordl_internals::getStaticField<bool, "s_isValueWriteAtomic", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::IsValueWriteAtomic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "IsValueWriteAtomic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>(comparer));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::InitializeFromCollection(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "InitializeFromCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, collection);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::New_ctor(int32_t  concurrencyLevel, int32_t  capacity, bool  growLockArray, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>(concurrencyLevel, capacity, growLockArray, comparer));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::_ctor(int32_t  concurrencyLevel, int32_t  capacity, bool  growLockArray, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, concurrencyLevel, capacity, growLockArray, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::TryAdd(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "TryAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "ContainsKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::TryRemove(TKey  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "TryRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::TryRemoveInternal(TKey  key, ByRef<TValue>  value, bool  matchValue, TValue  oldValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "TryRemoveInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value, matchValue, oldValue);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::TryGetValue(TKey  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::TryGetValueInternal(TKey  key, int32_t  hashcode, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "TryGetValueInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, hashcode, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*> System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "ToArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::CopyToPairs(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "CopyToPairs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::CopyToEntries(::ArrayW<::System::Collections::DictionaryEntry,::Array<::System::Collections::DictionaryEntry>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "CopyToEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Collections::DictionaryEntry,::Array<::System::Collections::DictionaryEntry>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::CopyToObjects(::ArrayW<::System::Object*,::Array<::System::Object*>*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "CopyToObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::TryAddInternal(TKey  key, int32_t  hashcode, TValue  value, bool  updateIfExists, bool  acquireLock, ByRef<TValue>  resultingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "TryAddInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, hashcode, value, updateIfExists, acquireLock, resultingValue);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::set_Item(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::ThrowKeyNotFoundException(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "ThrowKeyNotFoundException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::ThrowKeyNullException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "ThrowKeyNullException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetCountInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetCountInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetOrAdd(TKey  key, ::System::Func_2<TKey,TValue>*  valueFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetOrAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key, valueFactory);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetOrAdd(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetOrAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.IDictionary<TKey,TValue>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.IDictionary<TKey,TValue>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  keyValuePair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyValuePair);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  keyValuePair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, keyValuePair);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  keyValuePair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, keyValuePair);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_Add(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_Contains(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_get_IsFixedSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.get_IsFixedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::ICollection* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_Remove(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::ICollection* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_IDictionary_set_Item(::System::Object*  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.IDictionary.set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.ICollection.CopyTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, array, index);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.ICollection.get_IsSynchronized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "System.Collections.ICollection.get_SyncRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GrowTable(::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*  tables)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GrowTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Concurrent::__ConcurrentDictionary_2__Tables<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tables);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetBucket(int32_t  hashcode, int32_t  bucketCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetBucket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hashcode, bucketCount);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetBucketAndLockNo(int32_t  hashcode, ByRef<int32_t>  bucketNo, ByRef<int32_t>  lockNo, int32_t  bucketCount, int32_t  lockCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetBucketAndLockNo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hashcode, bucketNo, lockNo, bucketCount, lockCount);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::get_DefaultConcurrencyLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "get_DefaultConcurrencyLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::AcquireAllLocks(ByRef<int32_t>  locksAcquired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "AcquireAllLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, locksAcquired);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::AcquireLocks(int32_t  fromInclusive, int32_t  toExclusive, ByRef<int32_t>  locksAcquired)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "AcquireLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fromInclusive, toExclusive, locksAcquired);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::ReleaseLocks(int32_t  fromInclusive, int32_t  toExclusive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "ReleaseLocks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fromInclusive, toExclusive);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::GetValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "GetValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<TValue>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::OnSerializing(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "OnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::OnSerialized(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "OnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>::OnDeserialized(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,TValue>*>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
