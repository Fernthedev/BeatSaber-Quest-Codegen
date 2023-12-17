#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
CORDL_MODULE_EXPORT(ReusableListViewItem)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableListViewItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ReusableListViewItem);
// Type: UnityEngine.UIElements::ReusableListViewItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7372))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7368))
// CS Name: ::UnityEngine.UIElements::ReusableListViewItem*
class CORDL_TYPE ReusableListViewItem : public ::UnityEngine::UIElements::ReusableCollectionItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::UIElements::ReusableCollectionItem)]{};

/// @brief Field m_Container offset 0x38
 __declspec(property(get=__get_m_Container, put=__set_m_Container)) ::UnityEngine::UIElements::VisualElement*  m_Container;

/// @brief Field m_DragHandle offset 0x40
 __declspec(property(get=__get_m_DragHandle, put=__set_m_DragHandle)) ::UnityEngine::UIElements::VisualElement*  m_DragHandle;

/// @brief Field m_ItemContainer offset 0x48
 __declspec(property(get=__get_m_ItemContainer, put=__set_m_ItemContainer)) ::UnityEngine::UIElements::VisualElement*  m_ItemContainer;

 __declspec(property(get=get_rootElement)) ::UnityEngine::UIElements::VisualElement*  rootElement;

constexpr void __set_m_Container(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Container() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Container() const;

constexpr void __set_m_DragHandle(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_DragHandle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_DragHandle() const;

constexpr void __set_m_ItemContainer(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_ItemContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_ItemContainer() const;

/// @brief Method get_rootElement addr 0x2e875b0 size 0x18 virtual true final false
inline ::UnityEngine::UIElements::VisualElement* get_rootElement() ;

/// @brief Method Init addr 0x2e85950 size 0x10 virtual false final false
inline void Init(::UnityEngine::UIElements::VisualElement*  item, bool  usesAnimatedDragger) ;

/// @brief Method UpdateHierarchy addr 0x2e875d0 size 0x274 virtual false final false
inline void UpdateHierarchy(bool  usesAnimatedDragger) ;

/// @brief Method UpdateDragHandle addr 0x2e85a4c size 0x13c virtual false final false
inline void UpdateDragHandle(bool  needsDragHandle) ;

/// @brief Method PreAttachElement addr 0x2e87844 size 0x8c virtual true final false
inline void PreAttachElement() ;

/// @brief Method DetachElement addr 0x2e8798c size 0x8c virtual true final false
inline void DetachElement() ;

static inline ::UnityEngine::UIElements::ReusableListViewItem* New_ctor() ;

/// @brief Method .ctor addr 0x2e87b10 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReusableListViewItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReusableListViewItem(ReusableListViewItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReusableListViewItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReusableListViewItem(ReusableListViewItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReusableListViewItem()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReusableListViewItem, 0x50>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReusableListViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableListViewItem*, "UnityEngine.UIElements", "ReusableListViewItem");
