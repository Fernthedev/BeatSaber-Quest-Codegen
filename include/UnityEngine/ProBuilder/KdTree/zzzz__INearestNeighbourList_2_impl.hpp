#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__INearestNeighbourList_2_def.hpp"
template<typename TItem,typename TDistance>
inline bool UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>::Add(TItem  item, TDistance  distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>*>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDistance>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, item, distance);
}
template<typename TItem,typename TDistance>
inline TItem UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>::GetFurtherest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>*>::get(),
                            "GetFurtherest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(*this, ___internal_method);
}
template<typename TItem,typename TDistance>
inline TItem UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>::RemoveFurtherest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>*>::get(),
                            "RemoveFurtherest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(*this, ___internal_method);
}
template<typename TItem,typename TDistance>
inline int32_t UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>::get_MaxCapacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>*>::get(),
                            "get_MaxCapacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<typename TItem,typename TDistance>
inline int32_t UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem,TDistance>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
