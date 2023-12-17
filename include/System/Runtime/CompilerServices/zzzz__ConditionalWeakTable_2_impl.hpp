#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>* System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>*>(object, method));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>::Invoke(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__set__table(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*, 0x10>(this, std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>* System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__get__table()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*> System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__get__table() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__set__currentIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__get__currentIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__get__currentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__set__current(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x20>(this, std::forward<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue>& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__get__current()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> const& System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::__get__current() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>* System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::New_ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*  table)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>(table));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::_ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*  table)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, table);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Object* System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__Enumerator<TKey,TValue>*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__set_data(::ArrayW<::System::Runtime::CompilerServices::Ephemeron,::Array<::System::Runtime::CompilerServices::Ephemeron>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Runtime::CompilerServices::Ephemeron,::Array<::System::Runtime::CompilerServices::Ephemeron>*>, 0x10>(this, std::forward<::ArrayW<::System::Runtime::CompilerServices::Ephemeron,::Array<::System::Runtime::CompilerServices::Ephemeron>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron,::Array<::System::Runtime::CompilerServices::Ephemeron>*>& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__get_data()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Runtime::CompilerServices::Ephemeron,::Array<::System::Runtime::CompilerServices::Ephemeron>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron,::Array<::System::Runtime::CompilerServices::Ephemeron>*> const& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Runtime::CompilerServices::Ephemeron,::Array<::System::Runtime::CompilerServices::Ephemeron>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__set__lock(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Object* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__get__lock()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__get__lock() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__set_size(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__get_size()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::RehashWithoutResize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "RehashWithoutResize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::RecomputeSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "RecomputeSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::Rehash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "Rehash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::TryGetValue(TKey  key, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "TryGetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline TValue System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::GetValue(TKey  key, ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>*  createValueCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<TKey,TValue>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, key, createValueCallback);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::IEnumerator* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey,TValue>*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
