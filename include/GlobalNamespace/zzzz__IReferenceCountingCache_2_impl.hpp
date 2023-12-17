#pragma once
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
template<typename TKey,typename TValue>
inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>::Insert(TKey  key, TValue  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key, item);
}
template<typename TKey,typename TValue>
inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>::AddReference(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "AddReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>::RemoveReference(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "RemoveReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>::GetReferenceCount(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "GetReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>::TryGet(TKey  key, ByRef<TValue>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>*>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, key, result);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
