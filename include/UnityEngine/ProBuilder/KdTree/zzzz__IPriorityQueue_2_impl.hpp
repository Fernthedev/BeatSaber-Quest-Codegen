#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__IPriorityQueue_2_def.hpp"
template<typename TItem,typename TPriority>
inline void UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>::Enqueue(TItem  item, TPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item, priority);
}
template<typename TItem,typename TPriority>
inline TItem UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>*>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(*this, ___internal_method);
}
template<typename TItem,typename TPriority>
inline int32_t UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
