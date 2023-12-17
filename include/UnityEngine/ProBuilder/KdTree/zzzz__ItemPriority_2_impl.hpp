#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__ItemPriority_2_def.hpp"
template<typename TItem,typename TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>::__set_Item(TItem  value)  {
::cordl_internals::setInstanceField<TItem, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TItem>(value));
}
template<typename TItem,typename TPriority>
constexpr TItem& UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>::__get_Item()  {
return ::cordl_internals::getInstanceField<TItem, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TItem,typename TPriority>
constexpr TItem const& UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>::__get_Item() const {
return ::cordl_internals::getInstanceField<TItem, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TItem,typename TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>::__set_Priority(TPriority  value)  {
::cordl_internals::setInstanceField<TPriority, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<TPriority>(value));
}
template<typename TItem,typename TPriority>
constexpr TPriority& UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>::__get_Priority()  {
return ::cordl_internals::getInstanceField<TPriority, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TItem,typename TPriority>
constexpr TPriority const& UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>::__get_Priority() const {
return ::cordl_internals::getInstanceField<TPriority, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Item", ty: "TItem", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Priority", ty: "TPriority", modifiers: "", def_value: Some("csnull") }]
template<typename TItem,typename TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem,TPriority>::ItemPriority_2(TItem  Item, TPriority  Priority) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->Item = Item;
this->Priority = Priority;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
