#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ListViewDragger_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ListViewDraggerAnimated)
namespace UnityEngine::UIElements {
class StartDragArgs;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
struct __ListViewDragger__DragPosition;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListViewDraggerAnimated;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListViewDraggerAnimated);
// Type: UnityEngine.UIElements::ListViewDraggerAnimated
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6959))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6961))
// CS Name: ::UnityEngine.UIElements::ListViewDraggerAnimated*
class CORDL_TYPE ListViewDraggerAnimated : public ::UnityEngine::UIElements::ListViewDragger {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::ListViewDragger)]{};

/// @brief Field m_DragStartIndex offset 0x60
 __declspec(property(get=__get_m_DragStartIndex, put=__set_m_DragStartIndex)) int32_t  m_DragStartIndex;

/// @brief Field m_CurrentIndex offset 0x64
 __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex)) int32_t  m_CurrentIndex;

/// @brief Field m_SelectionHeight offset 0x68
 __declspec(property(get=__get_m_SelectionHeight, put=__set_m_SelectionHeight)) float_t  m_SelectionHeight;

/// @brief Field m_LocalOffsetOnStart offset 0x6c
 __declspec(property(get=__get_m_LocalOffsetOnStart, put=__set_m_LocalOffsetOnStart)) float_t  m_LocalOffsetOnStart;

/// @brief Field m_CurrentPointerPosition offset 0x70
 __declspec(property(get=__get_m_CurrentPointerPosition, put=__set_m_CurrentPointerPosition)) ::UnityEngine::Vector3  m_CurrentPointerPosition;

/// @brief Field m_Item offset 0x80
 __declspec(property(get=__get_m_Item, put=__set_m_Item)) ::UnityEngine::UIElements::ReusableCollectionItem*  m_Item;

/// @brief Field m_OffsetItem offset 0x88
 __declspec(property(get=__get_m_OffsetItem, put=__set_m_OffsetItem)) ::UnityEngine::UIElements::ReusableCollectionItem*  m_OffsetItem;

 __declspec(property(get=get_isDragging)) bool  isDragging;

 __declspec(property(get=get_draggedItem)) ::UnityEngine::UIElements::ReusableCollectionItem*  draggedItem;

 __declspec(property(get=get_supportsDragEvents)) bool  supportsDragEvents;

constexpr void __set_m_DragStartIndex(int32_t  value) ;

constexpr int32_t& __get_m_DragStartIndex() ;

constexpr int32_t const& __get_m_DragStartIndex() const;

constexpr void __set_m_CurrentIndex(int32_t  value) ;

constexpr int32_t& __get_m_CurrentIndex() ;

constexpr int32_t const& __get_m_CurrentIndex() const;

constexpr void __set_m_SelectionHeight(float_t  value) ;

constexpr float_t& __get_m_SelectionHeight() ;

constexpr float_t const& __get_m_SelectionHeight() const;

constexpr void __set_m_LocalOffsetOnStart(float_t  value) ;

constexpr float_t& __get_m_LocalOffsetOnStart() ;

constexpr float_t const& __get_m_LocalOffsetOnStart() const;

constexpr void __set_m_CurrentPointerPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_CurrentPointerPosition() ;

constexpr ::UnityEngine::Vector3 const& __get_m_CurrentPointerPosition() const;

constexpr void __set_m_Item(::UnityEngine::UIElements::ReusableCollectionItem*  value) ;

constexpr ::UnityEngine::UIElements::ReusableCollectionItem* __get_m_Item() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ReusableCollectionItem*> __get_m_Item() const;

constexpr void __set_m_OffsetItem(::UnityEngine::UIElements::ReusableCollectionItem*  value) ;

constexpr ::UnityEngine::UIElements::ReusableCollectionItem* __get_m_OffsetItem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ReusableCollectionItem*> __get_m_OffsetItem() const;

/// @brief Method get_isDragging addr 0x2e0bcd4 size 0x10 virtual false final false
inline bool get_isDragging() ;

/// @brief Method get_draggedItem addr 0x2e0bce4 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::ReusableCollectionItem* get_draggedItem() ;

/// @brief Method get_supportsDragEvents addr 0x2e0bcec size 0x8 virtual true final false
inline bool get_supportsDragEvents() ;

static inline ::UnityEngine::UIElements::ListViewDraggerAnimated* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView) ;

/// @brief Method .ctor addr 0x2e0bcf4 size 0x4 virtual false final false
inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  listView) ;

/// @brief Method StartDrag addr 0x2e0bcf8 size 0x6e0 virtual true final false
inline ::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method UpdateDrag addr 0x2e0c718 size 0x894 virtual true final false
inline ::UnityEngine::UIElements::DragVisualMode UpdateDrag(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method Animate addr 0x2e0c3d8 size 0x340 virtual false final false
inline void Animate(::UnityEngine::UIElements::ReusableCollectionItem*  element, float_t  paddingTop) ;

/// @brief Method OnDrop addr 0x2e0cfac size 0x300 virtual true final false
inline void OnDrop(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method ClearDragAndDropUI addr 0x2e0d2ac size 0x4 virtual true final false
inline void ClearDragAndDropUI() ;

/// @brief Method TryGetDragPosition addr 0x2e0d2b0 size 0x20 virtual true final false
inline bool TryGetDragPosition(::UnityEngine::Vector2  pointerPosition, ByRef<::UnityEngine::UIElements::__ListViewDragger__DragPosition>  dragPosition) ;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListViewDraggerAnimated(ListViewDraggerAnimated && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListViewDraggerAnimated", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListViewDraggerAnimated(ListViewDraggerAnimated const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ListViewDraggerAnimated()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListViewDraggerAnimated, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListViewDraggerAnimated);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListViewDraggerAnimated*, "UnityEngine.UIElements", "ListViewDraggerAnimated");
