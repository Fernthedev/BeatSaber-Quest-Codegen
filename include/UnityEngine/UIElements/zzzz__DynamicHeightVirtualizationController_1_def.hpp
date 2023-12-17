#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VerticalVirtualizationController_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeightVirtualizationController_1)
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class DynamicHeightVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class DynamicHeightVirtualizationController_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::DynamicHeightVirtualizationController_1);
// Type: UnityEngine.UIElements::DynamicHeightVirtualizationController`1
// Type: UnityEngine.UIElements::DynamicHeightVirtualizationController`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7370)), TypeDefinitionIndex(TypeDefinitionIndex(7366)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7370), inst: 5349 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7366), inst: 2 })
// CS Name: ::UnityEngine.UIElements::DynamicHeightVirtualizationController`1<T>*
class CORDL_TYPE DynamicHeightVirtualizationController_1<T> : public ::UnityEngine::UIElements::VerticalVirtualizationController_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::UIElements::VerticalVirtualizationController_1<T>)]{};

/// @brief Field m_ItemHeightCache offset 0x60
 __declspec(property(get=__get_m_ItemHeightCache, put=__set_m_ItemHeightCache)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  m_ItemHeightCache;

/// @brief Field m_WaitingCache offset 0x68
 __declspec(property(get=__get_m_WaitingCache, put=__set_m_WaitingCache)) ::System::Collections::Generic::HashSet_1<int32_t>*  m_WaitingCache;

/// @brief Field m_ForcedFirstVisibleItem offset 0x70
 __declspec(property(get=__get_m_ForcedFirstVisibleItem, put=__set_m_ForcedFirstVisibleItem)) int32_t  m_ForcedFirstVisibleItem;

/// @brief Field m_ForcedLastVisibleItem offset 0x74
 __declspec(property(get=__get_m_ForcedLastVisibleItem, put=__set_m_ForcedLastVisibleItem)) int32_t  m_ForcedLastVisibleItem;

/// @brief Field m_StickToBottom offset 0x78
 __declspec(property(get=__get_m_StickToBottom, put=__set_m_StickToBottom)) bool  m_StickToBottom;

/// @brief Field m_AverageHeight offset 0x7c
 __declspec(property(get=__get_m_AverageHeight, put=__set_m_AverageHeight)) float_t  m_AverageHeight;

/// @brief Field m_AccumulatedHeight offset 0x80
 __declspec(property(get=__get_m_AccumulatedHeight, put=__set_m_AccumulatedHeight)) float_t  m_AccumulatedHeight;

/// @brief Field m_StoredPadding offset 0x84
 __declspec(property(get=__get_m_StoredPadding, put=__set_m_StoredPadding)) float_t  m_StoredPadding;

/// @brief Field m_FillCallback offset 0x88
 __declspec(property(get=__get_m_FillCallback, put=__set_m_FillCallback)) ::System::Action*  m_FillCallback;

/// @brief Field m_GeometryChangedCallback offset 0x90
 __declspec(property(get=__get_m_GeometryChangedCallback, put=__set_m_GeometryChangedCallback)) ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  m_GeometryChangedCallback;

/// @brief Field m_ScheduledItem offset 0x98
 __declspec(property(get=__get_m_ScheduledItem, put=__set_m_ScheduledItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem*  m_ScheduledItem;

/// @brief Field m_IndexOutOfBoundsPredicate offset 0xa0
 __declspec(property(get=__get_m_IndexOutOfBoundsPredicate, put=__set_m_IndexOutOfBoundsPredicate)) ::System::Predicate_1<int32_t>*  m_IndexOutOfBoundsPredicate;

static inline void setStaticF_InitialAverageHeight(int32_t  value) ;

static inline int32_t getStaticF_InitialAverageHeight() ;

constexpr void __set_m_ItemHeightCache(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* __get_m_ItemHeightCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*> __get_m_ItemHeightCache() const;

constexpr void __set_m_WaitingCache(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* __get_m_WaitingCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> __get_m_WaitingCache() const;

constexpr void __set_m_ForcedFirstVisibleItem(int32_t  value) ;

constexpr int32_t& __get_m_ForcedFirstVisibleItem() ;

constexpr int32_t const& __get_m_ForcedFirstVisibleItem() const;

constexpr void __set_m_ForcedLastVisibleItem(int32_t  value) ;

constexpr int32_t& __get_m_ForcedLastVisibleItem() ;

constexpr int32_t const& __get_m_ForcedLastVisibleItem() const;

constexpr void __set_m_StickToBottom(bool  value) ;

constexpr bool& __get_m_StickToBottom() ;

constexpr bool const& __get_m_StickToBottom() const;

constexpr void __set_m_AverageHeight(float_t  value) ;

constexpr float_t& __get_m_AverageHeight() ;

constexpr float_t const& __get_m_AverageHeight() const;

constexpr void __set_m_AccumulatedHeight(float_t  value) ;

constexpr float_t& __get_m_AccumulatedHeight() ;

constexpr float_t const& __get_m_AccumulatedHeight() const;

constexpr void __set_m_StoredPadding(float_t  value) ;

constexpr float_t& __get_m_StoredPadding() ;

constexpr float_t const& __get_m_StoredPadding() const;

constexpr void __set_m_FillCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_m_FillCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_FillCallback() const;

constexpr void __set_m_GeometryChangedCallback(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* __get_m_GeometryChangedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*> __get_m_GeometryChangedCallback() const;

constexpr void __set_m_ScheduledItem(::UnityEngine::UIElements::IVisualElementScheduledItem*  value) ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* __get_m_ScheduledItem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> __get_m_ScheduledItem() const;

constexpr void __set_m_IndexOutOfBoundsPredicate(::System::Predicate_1<int32_t>*  value) ;

constexpr ::System::Predicate_1<int32_t>* __get_m_IndexOutOfBoundsPredicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<int32_t>*> __get_m_IndexOutOfBoundsPredicate() const;

static inline ::UnityEngine::UIElements::DynamicHeightVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  collectionView) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  collectionView) ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Refresh(bool  rebuild) ;

/// @brief Method ScrollToItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ScrollToItem(int32_t  index) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Resize(::UnityEngine::Vector2  size, int32_t  layoutPass) ;

/// @brief Method OnScroll addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnScroll(::UnityEngine::Vector2  scrollOffset) ;

/// @brief Method NeedsFill addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool NeedsFill() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Fill() ;

/// @brief Method GetIndexFromPosition addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetIndexFromPosition(::UnityEngine::Vector2  position) ;

/// @brief Method GetItemHeight addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetItemHeight(int32_t  index) ;

/// @brief Method GetFirstVisibleItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetFirstVisibleItem(float_t  offset) ;

/// @brief Method UpdateScrollViewContainer addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateScrollViewContainer(int32_t  index, float_t  previousHeight, float_t  newHeight) ;

/// @brief Method ApplyScrollViewUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ApplyScrollViewUpdate() ;

/// @brief Method OnViewportGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnViewportGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method GetContentHeight addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetContentHeight() ;

/// @brief Method GetContentHeightForIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t GetContentHeightForIndex(int32_t  lastIndex) ;

/// @brief Method RegisterItemHeight addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterItemHeight(int32_t  index, float_t  height) ;

/// @brief Method UnregisterItemHeight addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UnregisterItemHeight(int32_t  index, float_t  height) ;

/// @brief Method OnRecycledItemGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
inline void OnRecycledItemGeometryChanged(::UnityEngine::UIElements::ReusableCollectionItem*  item) ;

/// @brief Method GetOrMakeItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline T GetOrMakeItem() ;

/// @brief Method ReplaceActiveItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReplaceActiveItem(int32_t  index) ;

/// @brief Method ReleaseItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseItem(int32_t  activeItemsIndex) ;

/// @brief Method IsIndexOutOfBounds addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool IsIndexOutOfBounds(int32_t  i) ;

/// @brief Method <.ctor>b__13_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __ctor_b__13_0(::UnityEngine::UIElements::VisualElement*  element) ;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeightVirtualizationController_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeightVirtualizationController_1(DynamicHeightVirtualizationController_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DynamicHeightVirtualizationController_1()  = default;
public:


// Fields

// Static field InitialAverageHeight


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::DynamicHeightVirtualizationController_1, "UnityEngine.UIElements", "DynamicHeightVirtualizationController`1");
