#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__PriorityQueue_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ItemPriority_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IPriorityQueue_2_def.hpp"
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,float_t>"
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr  UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::operator ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,float_t>*() noexcept {
return static_cast<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,float_t>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*, 0x10>(this, std::forward<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>* UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_priorityMath()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*> UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_priorityMath() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_queue()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*> const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_queue() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,float_t>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__set_capacity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_capacity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_capacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>* UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::New_ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  priorityMath)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>(capacity, priorityMath));
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::_ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*  priorityMath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity, priorityMath);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline int32_t UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::ExpandCapacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            "ExpandCapacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::Enqueue(TItem  item, float_t  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item, priority);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::ReorderItem(int32_t  index, int32_t  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            "ReorderItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, direction);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::GetHighest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            "GetHighest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem>
inline float_t UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>::GetHighestPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,float_t>*>::get(),
                            "GetHighestPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>"
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr  UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::operator ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>*() noexcept {
return static_cast<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>*>(static_cast<void*>(this));
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*, 0x10>(this, std::forward<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_priorityMath()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*> UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_priorityMath() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_queue()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*> const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_queue() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>,::Array<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>>*>, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__set_capacity(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_capacity()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_capacity() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>* UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::New_ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*  priorityMath)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>(capacity, priorityMath));
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::_ctor(int32_t  capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*  priorityMath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, capacity, priorityMath);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline int32_t UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::ExpandCapacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            "ExpandCapacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::Enqueue(TItem  item, TPriority  priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, item, priority);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::ReorderItem(int32_t  index, int32_t  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            "ReorderItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, index, direction);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::GetHighest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            "GetHighest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TItem, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TItem,::il2cpp_utils::il2cpp_reference_type TPriority>
inline TPriority UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>::GetHighestPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem,TPriority>*>::get(),
                            "GetHighestPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TPriority, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
