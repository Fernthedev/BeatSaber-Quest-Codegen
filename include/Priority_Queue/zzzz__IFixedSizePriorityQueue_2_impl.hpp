#pragma once
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template<typename TItem,typename TPriority>
constexpr  Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>::operator ::Priority_Queue::IPriorityQueue_2<TItem,TPriority>*() noexcept {
return static_cast<::Priority_Queue::IPriorityQueue_2<TItem,TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
template<typename TItem,typename TPriority>
constexpr  Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>::operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TItem,typename TPriority>
constexpr  Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template<typename TItem,typename TPriority>
inline void Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>::Resize(int32_t  maxNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>*>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxNodes);
}
template<typename TItem,typename TPriority>
inline int32_t Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>::get_MaxSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>*>::get(),
                            "get_MaxSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<typename TItem,typename TPriority>
inline void Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>::ResetNode(TItem  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>*>::get(),
                            "ResetNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
