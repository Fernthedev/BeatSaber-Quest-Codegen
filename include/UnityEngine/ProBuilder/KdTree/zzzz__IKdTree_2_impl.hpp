#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__IKdTree_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template<typename TKey,typename TValue>
constexpr  UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<typename TKey,typename TValue>
inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::Add(::ArrayW<TKey,::Array<TKey>*>  point, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, point, value);
}
template<typename TKey,typename TValue>
inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::TryFindValueAt(::ArrayW<TKey,::Array<TKey>*>  point, ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "TryFindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, point, value);
}
template<typename TKey,typename TValue>
inline TValue UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::FindValueAt(::ArrayW<TKey,::Array<TKey>*>  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "FindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(*this, ___internal_method, point);
}
template<typename TKey,typename TValue>
inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::TryFindValue(TValue  value, ByRef<::ArrayW<TKey,::Array<TKey>*>>  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "TryFindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TKey,::Array<TKey>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value, point);
}
template<typename TKey,typename TValue>
inline ::ArrayW<TKey,::Array<TKey>*> UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::FindValue(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "FindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TKey,::Array<TKey>*>, false>(*this, ___internal_method, value);
}
template<typename TKey,typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::RadialSearch(::ArrayW<TKey,::Array<TKey>*>  center, TKey  radius, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "RadialSearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*>, false>(*this, ___internal_method, center, radius, count);
}
template<typename TKey,typename TValue>
inline void UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::RemoveAt(::ArrayW<TKey,::Array<TKey>*>  point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, point);
}
template<typename TKey,typename TValue>
inline void UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param count: int32_t (default: static_cast<int32_t>(0x7fffffff))
template<typename TKey,typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*> UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::GetNearestNeighbours(::ArrayW<TKey,::Array<TKey>*>  point, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "GetNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*,::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>*>, false>(*this, ___internal_method, point, count);
}
template<typename TKey,typename TValue>
inline int32_t UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
