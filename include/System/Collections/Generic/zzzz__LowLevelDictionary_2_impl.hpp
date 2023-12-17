#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__LowLevelDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__set__key(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__get__key()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__get__key() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__set__value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__get__value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__get__value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__set__next(::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*, 0x20>(this, std::forward<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__get__next()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*> System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::__get__next() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__set__key(TKey  value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this, std::forward<TKey>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey& System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__get__key()  {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TKey const& System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__get__key() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__set__value(TValue  value)  {
::cordl_internals::setInstanceField<TValue, 0x18>(this, std::forward<TValue>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue& System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__get__value()  {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr TValue const& System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__get__value() const {
return ::cordl_internals::getInstanceField<TValue, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__set__next(::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*, 0x20>(this, std::forward<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__get__next()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*> System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::__get__next() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<T>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type T>
constexpr  System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>::operator ::System::Collections::Generic::IEqualityComparer_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<T>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>::Equals(T  x, T  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x, y);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type T>
inline int32_t System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>::GetHashCode(T  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>* System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue,::il2cpp_utils::il2cpp_reference_type T>
inline void System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<TKey,TValue,T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<int32_t>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>::operator ::System::Collections::Generic::IEqualityComparer_1<int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<int32_t>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>::Equals(int32_t  x, int32_t  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x, y);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>::GetHashCode(int32_t  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>* System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::__LowLevelDictionary_2__DefaultComparer_1<int32_t,TValue,int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__set__buckets(::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>, 0x10>(this, std::forward<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>& System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*> const& System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__set__numEntries(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__numEntries()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__numEntries() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__set__version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__set__comparer(::System::Collections::Generic::IEqualityComparer_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<int32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<int32_t>* System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<int32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<int32_t>*> System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::__get__comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<int32_t>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>* System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>* System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>(capacity, comparer));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<int32_t>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::set_Item(int32_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
/// @param capacity: int32_t (default: static_cast<int32_t>(0x11))
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::Clear(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::Remove(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::Find(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>* System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::UncheckedAdd(int32_t  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            "UncheckedAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__LowLevelDictionary_2__Entry<int32_t,TValue>*, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::ExpandBuckets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            "ExpandBuckets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param numBuckets: int32_t (default: static_cast<int32_t>(0x0))
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>::GetBucket(int32_t  key, int32_t  numBuckets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<int32_t,TValue>*>::get(),
                            "GetBucket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key, numBuckets);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__set__buckets(::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>, 0x10>(this, std::forward<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>& System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__buckets()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*> const& System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__buckets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*,::Array<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*>*>, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__set__numEntries(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__numEntries()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__numEntries() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__set__version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t& System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr int32_t const& System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEqualityComparer_1<TKey>*, 0x20>(this, std::forward<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__comparer()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<TKey>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::__get__comparer() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEqualityComparer_1<TKey>*, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>* System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>* System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::New_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>(capacity, comparer));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::_ctor(int32_t  capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity, comparer);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::set_Item(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, key, value);
}
/// @param capacity: int32_t (default: static_cast<int32_t>(0x11))
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::Clear(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::Find(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>* System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::UncheckedAdd(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            "UncheckedAdd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::__LowLevelDictionary_2__Entry<TKey,TValue>*, false>(*this, ___internal_method, key, value);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::ExpandBuckets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            "ExpandBuckets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param numBuckets: int32_t (default: static_cast<int32_t>(0x0))
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>::GetBucket(TKey  key, int32_t  numBuckets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey,TValue>*>::get(),
                            "GetBucket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key, numBuckets);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
