#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<int32_t,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::operator ::GlobalNamespace::IReferenceCountingCache_2<int32_t,TValue>*() noexcept {
return static_cast<::GlobalNamespace::IReferenceCountingCache_2<int32_t,TValue>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::__set__items(::System::Collections::Generic::Dictionary_2<int32_t,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,TValue>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,TValue>* GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::__get__items()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,TValue>*> GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::__get__items() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::__set__referencesCount(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::__get__referencesCount()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*> GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::__get__referencesCount() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::Insert(int32_t  key, TValue  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key, item);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::AddReference(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>::get(),
                            "AddReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::RemoveReference(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>::get(),
                            "RemoveReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::GetReferenceCount(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>::get(),
                            "GetReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::TryGet(int32_t  key, ByRef<TValue>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, result);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::LogError(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>* GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<int32_t,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr  GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::operator ::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*() noexcept {
return static_cast<::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__set__items(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__items()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,TValue>*> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__items() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__set__referencesCount(::System::Collections::Generic::Dictionary_2<TKey,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TKey,int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<TKey,int32_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,int32_t>* GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__referencesCount()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey,int32_t>*> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__referencesCount() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,int32_t>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::Insert(TKey  key, TValue  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key, item);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::AddReference(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "AddReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::RemoveReference(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "RemoveReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::GetReferenceCount(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "GetReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline bool GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::TryGet(TKey  key, ByRef<TValue>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, result);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::LogError(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline ::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>());
}
template<::il2cpp_utils::il2cpp_reference_type TKey,::il2cpp_utils::il2cpp_reference_type TValue>
inline void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
