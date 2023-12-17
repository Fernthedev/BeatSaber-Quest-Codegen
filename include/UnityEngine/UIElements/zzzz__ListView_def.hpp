#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVerticalCollectionView_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListView)
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct ListViewReorderMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class Foldout;
}
namespace UnityEngine::UIElements {
class ListViewController;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
class ListViewDragger;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlTraits;
}
namespace UnityEngine::UIElements {
class ICollectionDragAndDropController;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class Button;
}
namespace UnityEngine::UIElements {
struct SelectionType;
}
namespace UnityEngine::UIElements {
struct CollectionVirtualizationMethod;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
struct AlternatingRowBackground;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ListView;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __ListView__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ListView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ListView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ListView__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6800))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7070))
// CS Name: ::ListView::UxmlTraits*
class CORDL_TYPE __ListView__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd8 - sizeof(::UnityEngine::UIElements::__BindableElement__UxmlTraits)]{};

/// @brief Field m_FixedItemHeight offset 0x78
 __declspec(property(get=__get_m_FixedItemHeight, put=__set_m_FixedItemHeight)) ::UnityEngine::UIElements::UxmlIntAttributeDescription*  m_FixedItemHeight;

/// @brief Field m_VirtualizationMethod offset 0x80
 __declspec(property(get=__get_m_VirtualizationMethod, put=__set_m_VirtualizationMethod)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  m_VirtualizationMethod;

/// @brief Field m_ShowBorder offset 0x88
 __declspec(property(get=__get_m_ShowBorder, put=__set_m_ShowBorder)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowBorder;

/// @brief Field m_SelectionType offset 0x90
 __declspec(property(get=__get_m_SelectionType, put=__set_m_SelectionType)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  m_SelectionType;

/// @brief Field m_ShowAlternatingRowBackgrounds offset 0x98
 __declspec(property(get=__get_m_ShowAlternatingRowBackgrounds, put=__set_m_ShowAlternatingRowBackgrounds)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  m_ShowAlternatingRowBackgrounds;

/// @brief Field m_ShowFoldoutHeader offset 0xa0
 __declspec(property(get=__get_m_ShowFoldoutHeader, put=__set_m_ShowFoldoutHeader)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowFoldoutHeader;

/// @brief Field m_HeaderTitle offset 0xa8
 __declspec(property(get=__get_m_HeaderTitle, put=__set_m_HeaderTitle)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_HeaderTitle;

/// @brief Field m_ShowAddRemoveFooter offset 0xb0
 __declspec(property(get=__get_m_ShowAddRemoveFooter, put=__set_m_ShowAddRemoveFooter)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowAddRemoveFooter;

/// @brief Field m_Reorderable offset 0xb8
 __declspec(property(get=__get_m_Reorderable, put=__set_m_Reorderable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_Reorderable;

/// @brief Field m_ReorderMode offset 0xc0
 __declspec(property(get=__get_m_ReorderMode, put=__set_m_ReorderMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*  m_ReorderMode;

/// @brief Field m_ShowBoundCollectionSize offset 0xc8
 __declspec(property(get=__get_m_ShowBoundCollectionSize, put=__set_m_ShowBoundCollectionSize)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowBoundCollectionSize;

/// @brief Field m_HorizontalScrollingEnabled offset 0xd0
 __declspec(property(get=__get_m_HorizontalScrollingEnabled, put=__set_m_HorizontalScrollingEnabled)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_HorizontalScrollingEnabled;

constexpr void __set_m_FixedItemHeight(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* __get_m_FixedItemHeight() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> __get_m_FixedItemHeight() const;

constexpr void __set_m_VirtualizationMethod(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*  value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>* __get_m_VirtualizationMethod() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::CollectionVirtualizationMethod>*> __get_m_VirtualizationMethod() const;

constexpr void __set_m_ShowBorder(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* __get_m_ShowBorder() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> __get_m_ShowBorder() const;

constexpr void __set_m_SelectionType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*  value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>* __get_m_SelectionType() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SelectionType>*> __get_m_SelectionType() const;

constexpr void __set_m_ShowAlternatingRowBackgrounds(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*  value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>* __get_m_ShowAlternatingRowBackgrounds() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::AlternatingRowBackground>*> __get_m_ShowAlternatingRowBackgrounds() const;

constexpr void __set_m_ShowFoldoutHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* __get_m_ShowFoldoutHeader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> __get_m_ShowFoldoutHeader() const;

constexpr void __set_m_HeaderTitle(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_HeaderTitle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_HeaderTitle() const;

constexpr void __set_m_ShowAddRemoveFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* __get_m_ShowAddRemoveFooter() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> __get_m_ShowAddRemoveFooter() const;

constexpr void __set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* __get_m_Reorderable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> __get_m_Reorderable() const;

constexpr void __set_m_ReorderMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*  value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>* __get_m_ReorderMode() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ListViewReorderMode>*> __get_m_ReorderMode() const;

constexpr void __set_m_ShowBoundCollectionSize(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* __get_m_ShowBoundCollectionSize() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> __get_m_ShowBoundCollectionSize() const;

constexpr void __set_m_HorizontalScrollingEnabled(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* __get_m_HorizontalScrollingEnabled() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> __get_m_HorizontalScrollingEnabled() const;

/// @brief Method Init addr 0x2e2db18 size 0x3d4 virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__ListView__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e2deec size 0x51c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ListView__UxmlTraits(__ListView__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ListView__UxmlTraits(__ListView__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ListView__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListView__UxmlTraits, 0xd8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ListView
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7071))
// CS Name: ::UnityEngine.UIElements::ListView*
class CORDL_TYPE ListView : public ::UnityEngine::UIElements::BaseVerticalCollectionView {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__ListView__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__ListView__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x508};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x508 - sizeof(::UnityEngine::UIElements::BaseVerticalCollectionView)]{};

/// @brief Field m_ShowBoundCollectionSize offset 0x494
 __declspec(property(get=__get_m_ShowBoundCollectionSize, put=__set_m_ShowBoundCollectionSize)) bool  m_ShowBoundCollectionSize;

/// @brief Field m_ShowFoldoutHeader offset 0x495
 __declspec(property(get=__get_m_ShowFoldoutHeader, put=__set_m_ShowFoldoutHeader)) bool  m_ShowFoldoutHeader;

/// @brief Field m_HeaderTitle offset 0x498
 __declspec(property(get=__get_m_HeaderTitle, put=__set_m_HeaderTitle)) ::StringW  m_HeaderTitle;

/// @brief Field itemsAdded offset 0x4a0
 __declspec(property(get=__get_itemsAdded, put=__set_itemsAdded)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  itemsAdded;

/// @brief Field itemsRemoved offset 0x4a8
 __declspec(property(get=__get_itemsRemoved, put=__set_itemsRemoved)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  itemsRemoved;

/// @brief Field m_EmptyListLabel offset 0x4b0
 __declspec(property(get=__get_m_EmptyListLabel, put=__set_m_EmptyListLabel)) ::UnityEngine::UIElements::Label*  m_EmptyListLabel;

/// @brief Field m_Foldout offset 0x4b8
 __declspec(property(get=__get_m_Foldout, put=__set_m_Foldout)) ::UnityEngine::UIElements::Foldout*  m_Foldout;

/// @brief Field m_ArraySizeField offset 0x4c0
 __declspec(property(get=__get_m_ArraySizeField, put=__set_m_ArraySizeField)) ::UnityEngine::UIElements::TextField*  m_ArraySizeField;

/// @brief Field m_Footer offset 0x4c8
 __declspec(property(get=__get_m_Footer, put=__set_m_Footer)) ::UnityEngine::UIElements::VisualElement*  m_Footer;

/// @brief Field m_AddButton offset 0x4d0
 __declspec(property(get=__get_m_AddButton, put=__set_m_AddButton)) ::UnityEngine::UIElements::Button*  m_AddButton;

/// @brief Field m_RemoveButton offset 0x4d8
 __declspec(property(get=__get_m_RemoveButton, put=__set_m_RemoveButton)) ::UnityEngine::UIElements::Button*  m_RemoveButton;

/// @brief Field m_ItemAddedCallback offset 0x4e0
 __declspec(property(get=__get_m_ItemAddedCallback, put=__set_m_ItemAddedCallback)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  m_ItemAddedCallback;

/// @brief Field m_ItemRemovedCallback offset 0x4e8
 __declspec(property(get=__get_m_ItemRemovedCallback, put=__set_m_ItemRemovedCallback)) ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  m_ItemRemovedCallback;

/// @brief Field m_ItemsSourceSizeChangedCallback offset 0x4f0
 __declspec(property(get=__get_m_ItemsSourceSizeChangedCallback, put=__set_m_ItemsSourceSizeChangedCallback)) ::System::Action*  m_ItemsSourceSizeChangedCallback;

/// @brief Field m_ListViewController offset 0x4f8
 __declspec(property(get=__get_m_ListViewController, put=__set_m_ListViewController)) ::UnityEngine::UIElements::ListViewController*  m_ListViewController;

/// @brief Field m_ReorderMode offset 0x500
 __declspec(property(get=__get_m_ReorderMode, put=__set_m_ReorderMode)) ::UnityEngine::UIElements::ListViewReorderMode  m_ReorderMode;

 __declspec(property(get=get_showBoundCollectionSize, put=set_showBoundCollectionSize)) bool  showBoundCollectionSize;

 __declspec(property(get=get_sourceIncludesArraySize)) bool  sourceIncludesArraySize;

 __declspec(property(get=get_showFoldoutHeader, put=set_showFoldoutHeader)) bool  showFoldoutHeader;

 __declspec(property(put=set_headerTitle)) ::StringW  headerTitle;

 __declspec(property(get=get_showAddRemoveFooter, put=set_showAddRemoveFooter)) bool  showAddRemoveFooter;

 __declspec(property(get=get_viewController)) ::UnityEngine::UIElements::ListViewController*  viewController;

 __declspec(property(get=get_reorderMode, put=set_reorderMode)) ::UnityEngine::UIElements::ListViewReorderMode  reorderMode;

constexpr void __set_m_ShowBoundCollectionSize(bool  value) ;

constexpr bool& __get_m_ShowBoundCollectionSize() ;

constexpr bool const& __get_m_ShowBoundCollectionSize() const;

constexpr void __set_m_ShowFoldoutHeader(bool  value) ;

constexpr bool& __get_m_ShowFoldoutHeader() ;

constexpr bool const& __get_m_ShowFoldoutHeader() const;

constexpr void __set_m_HeaderTitle(::StringW  value) ;

constexpr ::StringW& __get_m_HeaderTitle() ;

constexpr ::StringW const& __get_m_HeaderTitle() const;

constexpr void __set_itemsAdded(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* __get_itemsAdded() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> __get_itemsAdded() const;

constexpr void __set_itemsRemoved(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* __get_itemsRemoved() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> __get_itemsRemoved() const;

constexpr void __set_m_EmptyListLabel(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_EmptyListLabel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_EmptyListLabel() const;

constexpr void __set_m_Foldout(::UnityEngine::UIElements::Foldout*  value) ;

constexpr ::UnityEngine::UIElements::Foldout* __get_m_Foldout() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Foldout*> __get_m_Foldout() const;

constexpr void __set_m_ArraySizeField(::UnityEngine::UIElements::TextField*  value) ;

constexpr ::UnityEngine::UIElements::TextField* __get_m_ArraySizeField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> __get_m_ArraySizeField() const;

constexpr void __set_m_Footer(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Footer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Footer() const;

constexpr void __set_m_AddButton(::UnityEngine::UIElements::Button*  value) ;

constexpr ::UnityEngine::UIElements::Button* __get_m_AddButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Button*> __get_m_AddButton() const;

constexpr void __set_m_RemoveButton(::UnityEngine::UIElements::Button*  value) ;

constexpr ::UnityEngine::UIElements::Button* __get_m_RemoveButton() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Button*> __get_m_RemoveButton() const;

constexpr void __set_m_ItemAddedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* __get_m_ItemAddedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> __get_m_ItemAddedCallback() const;

constexpr void __set_m_ItemRemovedCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>* __get_m_ItemRemovedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Collections::Generic::IEnumerable_1<int32_t>*>*> __get_m_ItemRemovedCallback() const;

constexpr void __set_m_ItemsSourceSizeChangedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_m_ItemsSourceSizeChangedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_ItemsSourceSizeChangedCallback() const;

constexpr void __set_m_ListViewController(::UnityEngine::UIElements::ListViewController*  value) ;

constexpr ::UnityEngine::UIElements::ListViewController* __get_m_ListViewController() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListViewController*> __get_m_ListViewController() const;

constexpr void __set_m_ReorderMode(::UnityEngine::UIElements::ListViewReorderMode  value) ;

constexpr ::UnityEngine::UIElements::ListViewReorderMode& __get_m_ReorderMode() ;

constexpr ::UnityEngine::UIElements::ListViewReorderMode const& __get_m_ReorderMode() const;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_itemUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_itemUssClassName() ;

static inline void setStaticF_emptyLabelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_emptyLabelUssClassName() ;

static inline void setStaticF_reorderableUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_reorderableUssClassName() ;

static inline void setStaticF_reorderableItemUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_reorderableItemUssClassName() ;

static inline void setStaticF_reorderableItemContainerUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_reorderableItemContainerUssClassName() ;

static inline void setStaticF_reorderableItemHandleUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_reorderableItemHandleUssClassName() ;

static inline void setStaticF_reorderableItemHandleBarUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_reorderableItemHandleBarUssClassName() ;

static inline void setStaticF_footerUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_footerUssClassName() ;

static inline void setStaticF_foldoutHeaderUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_foldoutHeaderUssClassName() ;

static inline void setStaticF_arraySizeFieldUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_arraySizeFieldUssClassName() ;

static inline void setStaticF_listViewWithHeaderUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_listViewWithHeaderUssClassName() ;

static inline void setStaticF_listViewWithFooterUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_listViewWithFooterUssClassName() ;

static inline void setStaticF_scrollViewWithFooterUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_scrollViewWithFooterUssClassName() ;

static inline void setStaticF_footerAddButtonName(::StringW  value) ;

static inline ::StringW getStaticF_footerAddButtonName() ;

static inline void setStaticF_footerRemoveButtonName(::StringW  value) ;

static inline ::StringW getStaticF_footerRemoveButtonName() ;

/// @brief Method get_showBoundCollectionSize addr 0x2e2bd4c size 0x8 virtual false final false
inline bool get_showBoundCollectionSize() ;

/// @brief Method set_showBoundCollectionSize addr 0x2e2bd54 size 0x1c virtual false final false
inline void set_showBoundCollectionSize(bool  value) ;

/// @brief Method get_sourceIncludesArraySize addr 0x2e2bf44 size 0x28 virtual true final false
inline bool get_sourceIncludesArraySize() ;

/// @brief Method get_showFoldoutHeader addr 0x2e2bf6c size 0x8 virtual false final false
inline bool get_showFoldoutHeader() ;

/// @brief Method set_showFoldoutHeader addr 0x2e2bf74 size 0x1a4 virtual false final false
inline void set_showFoldoutHeader(bool  value) ;

/// @brief Method SetupArraySizeField addr 0x2e2bd70 size 0x1d4 virtual false final false
inline void SetupArraySizeField() ;

/// @brief Method set_headerTitle addr 0x2e2cad4 size 0x18 virtual false final false
inline void set_headerTitle(::StringW  value) ;

/// @brief Method get_showAddRemoveFooter addr 0x2e2c728 size 0x10 virtual false final false
inline bool get_showAddRemoveFooter() ;

/// @brief Method set_showAddRemoveFooter addr 0x2e2caec size 0x8 virtual false final false
inline void set_showAddRemoveFooter(bool  value) ;

/// @brief Method EnableFooter addr 0x2e2c738 size 0x32c virtual false final false
inline void EnableFooter(bool  enabled) ;

/// @brief Method AddItems addr 0x2e2ccbc size 0x24 virtual false final false
inline void AddItems(int32_t  itemCount) ;

/// @brief Method OnArraySizeFieldChanged addr 0x2e2cce0 size 0x108 virtual false final false
inline void OnArraySizeFieldChanged(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*  evt) ;

/// @brief Method UpdateArraySizeField addr 0x2e2ca64 size 0x70 virtual false final false
inline void UpdateArraySizeField() ;

/// @brief Method UpdateEmpty addr 0x2e2c56c size 0x1bc virtual false final false
inline void UpdateEmpty() ;

/// @brief Method OnAddClicked addr 0x2e2cde8 size 0x24c virtual false final false
inline void OnAddClicked() ;

/// @brief Method OnRemoveClicked addr 0x2e2d034 size 0x1cc virtual false final false
inline void OnRemoveClicked() ;

/// @brief Method get_viewController addr 0x2e2d200 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::ListViewController* get_viewController() ;

/// @brief Method CreateVirtualizationController addr 0x2e2d208 size 0x48 virtual true final false
inline void CreateVirtualizationController() ;

/// @brief Method CreateViewController addr 0x2e2d250 size 0x64 virtual true final false
inline void CreateViewController() ;

/// @brief Method SetViewController addr 0x2e2d2b4 size 0x1bc virtual false final false
inline void SetViewController(::UnityEngine::UIElements::ListViewController*  controller) ;

/// @brief Method OnItemAdded addr 0x2e2d470 size 0x1c virtual false final false
inline void OnItemAdded(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

/// @brief Method OnItemsRemoved addr 0x2e2d48c size 0x1c virtual false final false
inline void OnItemsRemoved(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices) ;

/// @brief Method OnItemsSourceSizeChanged addr 0x2e2d4a8 size 0x8 virtual false final false
inline void OnItemsSourceSizeChanged() ;

/// @brief Method get_reorderMode addr 0x2e2d4b0 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::ListViewReorderMode get_reorderMode() ;

/// @brief Method set_reorderMode addr 0x2e2d4b8 size 0x38 virtual false final false
inline void set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode  value) ;

/// @brief Method CreateDragger addr 0x2e2d4f0 size 0xa0 virtual true final false
inline ::UnityEngine::UIElements::ListViewDragger* CreateDragger() ;

/// @brief Method CreateDragAndDropController addr 0x2e2d590 size 0x64 virtual true final false
inline ::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController() ;

static inline ::UnityEngine::UIElements::ListView* New_ctor() ;

/// @brief Method .ctor addr 0x2e2d5f4 size 0x9c virtual false final false
inline void _ctor() ;

/// @brief Method PostRefresh addr 0x2e2d690 size 0x24 virtual true final false
inline void PostRefresh() ;

/// @brief Method <OnAddClicked>b__35_0 addr 0x2e2da00 size 0xd0 virtual false final false
inline void _OnAddClicked_b__35_0() ;

// Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListView(ListView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListView(ListView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ListView()  = default;
public:


// Fields

// Static field ussClassName

// Static field itemUssClassName

// Static field emptyLabelUssClassName

// Static field reorderableUssClassName

// Static field reorderableItemUssClassName

// Static field reorderableItemContainerUssClassName

// Static field reorderableItemHandleUssClassName

// Static field reorderableItemHandleBarUssClassName

// Static field footerUssClassName

// Static field foldoutHeaderUssClassName

// Static field arraySizeFieldUssClassName

// Static field listViewWithHeaderUssClassName

// Static field listViewWithFooterUssClassName

// Static field scrollViewWithFooterUssClassName

// Static field footerAddButtonName

// Static field footerRemoveButtonName


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ListView, 0x508>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7070)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5267 }), TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(7071))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7069))
// CS Name: ::ListView::UxmlFactory*
class CORDL_TYPE __ListView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ListView*,::UnityEngine::UIElements::__ListView__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ListView*,::UnityEngine::UIElements::__ListView__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__ListView__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e2dad0 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ListView__UxmlFactory(__ListView__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ListView__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ListView__UxmlFactory(__ListView__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ListView__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ListView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ListView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ListView*, "UnityEngine.UIElements", "ListView");
NEED_NO_BOX(::UnityEngine::UIElements::__ListView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListView__UxmlFactory*, "UnityEngine.UIElements", "ListView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__ListView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ListView__UxmlTraits*, "UnityEngine.UIElements", "ListView/UxmlTraits");
