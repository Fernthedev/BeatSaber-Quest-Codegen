#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoPaneSplitView)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitViewResizer;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct TwoPaneSplitViewOrientation;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TwoPaneSplitView;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __TwoPaneSplitView__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TwoPaneSplitView);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7137))
// CS Name: ::TwoPaneSplitView::UxmlTraits*
class CORDL_TYPE __TwoPaneSplitView__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::__VisualElement__UxmlTraits)]{};

/// @brief Field m_FixedPaneIndex offset 0x70
 __declspec(property(get=__get_m_FixedPaneIndex, put=__set_m_FixedPaneIndex)) ::UnityEngine::UIElements::UxmlIntAttributeDescription*  m_FixedPaneIndex;

/// @brief Field m_FixedPaneInitialDimension offset 0x78
 __declspec(property(get=__get_m_FixedPaneInitialDimension, put=__set_m_FixedPaneInitialDimension)) ::UnityEngine::UIElements::UxmlIntAttributeDescription*  m_FixedPaneInitialDimension;

/// @brief Field m_Orientation offset 0x80
 __declspec(property(get=__get_m_Orientation, put=__set_m_Orientation)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*  m_Orientation;

constexpr void __set_m_FixedPaneIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* __get_m_FixedPaneIndex() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> __get_m_FixedPaneIndex() const;

constexpr void __set_m_FixedPaneInitialDimension(::UnityEngine::UIElements::UxmlIntAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* __get_m_FixedPaneInitialDimension() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> __get_m_FixedPaneInitialDimension() const;

constexpr void __set_m_Orientation(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*  value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>* __get_m_Orientation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::TwoPaneSplitViewOrientation>*> __get_m_Orientation() const;

/// @brief Method Init addr 0x2e3f730 size 0x16c virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e3f89c size 0x14c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TwoPaneSplitView__UxmlTraits(__TwoPaneSplitView__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TwoPaneSplitView__UxmlTraits(__TwoPaneSplitView__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TwoPaneSplitView__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits, 0x88>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TwoPaneSplitView
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6744))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7138))
// CS Name: ::UnityEngine.UIElements::TwoPaneSplitView*
class CORDL_TYPE TwoPaneSplitView : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x410};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x410 - sizeof(::UnityEngine::UIElements::VisualElement)]{};

/// @brief Field m_LeftPane offset 0x3b0
 __declspec(property(get=__get_m_LeftPane, put=__set_m_LeftPane)) ::UnityEngine::UIElements::VisualElement*  m_LeftPane;

/// @brief Field m_RightPane offset 0x3b8
 __declspec(property(get=__get_m_RightPane, put=__set_m_RightPane)) ::UnityEngine::UIElements::VisualElement*  m_RightPane;

/// @brief Field m_FixedPane offset 0x3c0
 __declspec(property(get=__get_m_FixedPane, put=__set_m_FixedPane)) ::UnityEngine::UIElements::VisualElement*  m_FixedPane;

/// @brief Field m_FlexedPane offset 0x3c8
 __declspec(property(get=__get_m_FlexedPane, put=__set_m_FlexedPane)) ::UnityEngine::UIElements::VisualElement*  m_FlexedPane;

/// @brief Field m_FixedPaneDimension offset 0x3d0
 __declspec(property(get=__get_m_FixedPaneDimension, put=__set_m_FixedPaneDimension)) float_t  m_FixedPaneDimension;

/// @brief Field m_DragLine offset 0x3d8
 __declspec(property(get=__get_m_DragLine, put=__set_m_DragLine)) ::UnityEngine::UIElements::VisualElement*  m_DragLine;

/// @brief Field m_DragLineAnchor offset 0x3e0
 __declspec(property(get=__get_m_DragLineAnchor, put=__set_m_DragLineAnchor)) ::UnityEngine::UIElements::VisualElement*  m_DragLineAnchor;

/// @brief Field m_CollapseMode offset 0x3e8
 __declspec(property(get=__get_m_CollapseMode, put=__set_m_CollapseMode)) bool  m_CollapseMode;

/// @brief Field m_Content offset 0x3f0
 __declspec(property(get=__get_m_Content, put=__set_m_Content)) ::UnityEngine::UIElements::VisualElement*  m_Content;

/// @brief Field m_Orientation offset 0x3f8
 __declspec(property(get=__get_m_Orientation, put=__set_m_Orientation)) ::UnityEngine::UIElements::TwoPaneSplitViewOrientation  m_Orientation;

/// @brief Field m_FixedPaneIndex offset 0x3fc
 __declspec(property(get=__get_m_FixedPaneIndex, put=__set_m_FixedPaneIndex)) int32_t  m_FixedPaneIndex;

/// @brief Field m_FixedPaneInitialDimension offset 0x400
 __declspec(property(get=__get_m_FixedPaneInitialDimension, put=__set_m_FixedPaneInitialDimension)) float_t  m_FixedPaneInitialDimension;

/// @brief Field m_Resizer offset 0x408
 __declspec(property(get=__get_m_Resizer, put=__set_m_Resizer)) ::UnityEngine::UIElements::TwoPaneSplitViewResizer*  m_Resizer;

 __declspec(property(get=get_fixedPane)) ::UnityEngine::UIElements::VisualElement*  fixedPane;

 __declspec(property(get=get_flexedPane)) ::UnityEngine::UIElements::VisualElement*  flexedPane;

 __declspec(property(get=get_fixedPaneIndex)) int32_t  fixedPaneIndex;

 __declspec(property(get=get_fixedPaneDimension, put=set_fixedPaneDimension)) float_t  fixedPaneDimension;

 __declspec(property(get=get_contentContainer)) ::UnityEngine::UIElements::VisualElement*  contentContainer;

static inline void setStaticF_s_UssClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_UssClassName() ;

static inline void setStaticF_s_ContentContainerClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_ContentContainerClassName() ;

static inline void setStaticF_s_HandleDragLineClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_HandleDragLineClassName() ;

static inline void setStaticF_s_HandleDragLineVerticalClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_HandleDragLineVerticalClassName() ;

static inline void setStaticF_s_HandleDragLineHorizontalClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_HandleDragLineHorizontalClassName() ;

static inline void setStaticF_s_HandleDragLineAnchorClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_HandleDragLineAnchorClassName() ;

static inline void setStaticF_s_HandleDragLineAnchorVerticalClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_HandleDragLineAnchorVerticalClassName() ;

static inline void setStaticF_s_HandleDragLineAnchorHorizontalClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_HandleDragLineAnchorHorizontalClassName() ;

static inline void setStaticF_s_VerticalClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_VerticalClassName() ;

static inline void setStaticF_s_HorizontalClassName(::StringW  value) ;

static inline ::StringW getStaticF_s_HorizontalClassName() ;

constexpr void __set_m_LeftPane(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_LeftPane() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_LeftPane() const;

constexpr void __set_m_RightPane(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_RightPane() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_RightPane() const;

constexpr void __set_m_FixedPane(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_FixedPane() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_FixedPane() const;

constexpr void __set_m_FlexedPane(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_FlexedPane() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_FlexedPane() const;

constexpr void __set_m_FixedPaneDimension(float_t  value) ;

constexpr float_t& __get_m_FixedPaneDimension() ;

constexpr float_t const& __get_m_FixedPaneDimension() const;

constexpr void __set_m_DragLine(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_DragLine() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_DragLine() const;

constexpr void __set_m_DragLineAnchor(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_DragLineAnchor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_DragLineAnchor() const;

constexpr void __set_m_CollapseMode(bool  value) ;

constexpr bool& __get_m_CollapseMode() ;

constexpr bool const& __get_m_CollapseMode() const;

constexpr void __set_m_Content(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Content() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Content() const;

constexpr void __set_m_Orientation(::UnityEngine::UIElements::TwoPaneSplitViewOrientation  value) ;

constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation& __get_m_Orientation() ;

constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation const& __get_m_Orientation() const;

constexpr void __set_m_FixedPaneIndex(int32_t  value) ;

constexpr int32_t& __get_m_FixedPaneIndex() ;

constexpr int32_t const& __get_m_FixedPaneIndex() const;

constexpr void __set_m_FixedPaneInitialDimension(float_t  value) ;

constexpr float_t& __get_m_FixedPaneInitialDimension() ;

constexpr float_t const& __get_m_FixedPaneInitialDimension() const;

constexpr void __set_m_Resizer(::UnityEngine::UIElements::TwoPaneSplitViewResizer*  value) ;

constexpr ::UnityEngine::UIElements::TwoPaneSplitViewResizer* __get_m_Resizer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TwoPaneSplitViewResizer*> __get_m_Resizer() const;

/// @brief Method get_fixedPane addr 0x2e3d718 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_fixedPane() ;

/// @brief Method get_flexedPane addr 0x2e3d720 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_flexedPane() ;

/// @brief Method get_fixedPaneIndex addr 0x2e3d728 size 0x8 virtual false final false
inline int32_t get_fixedPaneIndex() ;

/// @brief Method get_fixedPaneDimension addr 0x2e3d730 size 0x34 virtual false final false
inline float_t get_fixedPaneDimension() ;

/// @brief Method set_fixedPaneDimension addr 0x2e3d764 size 0x1c virtual false final false
inline void set_fixedPaneDimension(float_t  value) ;

static inline ::UnityEngine::UIElements::TwoPaneSplitView* New_ctor() ;

/// @brief Method .ctor addr 0x2e3d780 size 0x210 virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x2e3d990 size 0x2dc virtual false final false
inline void Init(int32_t  fixedPaneIndex, float_t  fixedPaneInitialDimension, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation  orientation) ;

/// @brief Method OnPostDisplaySetup addr 0x2e3ebdc size 0x108 virtual false final false
inline void OnPostDisplaySetup(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method PostDisplaySetup addr 0x2e3dc6c size 0xf70 virtual false final false
inline void PostDisplaySetup() ;

/// @brief Method OnSizeChange addr 0x2e3ece4 size 0x4 virtual false final false
inline void OnSizeChange(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnSizeChange addr 0x2e3ece8 size 0x5d0 virtual false final false
inline void OnSizeChange() ;

/// @brief Method get_contentContainer addr 0x2e3f508 size 0x8 virtual true final false
inline ::UnityEngine::UIElements::VisualElement* get_contentContainer() ;

/// @brief Method OnViewDataReady addr 0x2e3f510 size 0x3c virtual true final false
inline void OnViewDataReady() ;

/// @brief Method SetDragLineOffset addr 0x2e3f2b8 size 0x128 virtual false final false
inline void SetDragLineOffset(float_t  offset) ;

/// @brief Method SetFixedPaneDimension addr 0x2e3f3e0 size 0x128 virtual false final false
inline void SetFixedPaneDimension(float_t  dimension) ;

// Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TwoPaneSplitView(TwoPaneSplitView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TwoPaneSplitView(TwoPaneSplitView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TwoPaneSplitView()  = default;
public:


// Fields

// Static field s_UssClassName

// Static field s_ContentContainerClassName

// Static field s_HandleDragLineClassName

// Static field s_HandleDragLineVerticalClassName

// Static field s_HandleDragLineHorizontalClassName

// Static field s_HandleDragLineAnchorClassName

// Static field s_HandleDragLineAnchorVerticalClassName

// Static field s_HandleDragLineAnchorHorizontalClassName

// Static field s_VerticalClassName

// Static field s_HorizontalClassName


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TwoPaneSplitView, 0x410>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7138)), TypeDefinitionIndex(TypeDefinitionIndex(6997)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5283 }), TypeDefinitionIndex(TypeDefinitionIndex(7137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7136))
// CS Name: ::TwoPaneSplitView::UxmlFactory*
class CORDL_TYPE __TwoPaneSplitView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TwoPaneSplitView*,::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TwoPaneSplitView*,::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e3f6e8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TwoPaneSplitView__UxmlFactory(__TwoPaneSplitView__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TwoPaneSplitView__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TwoPaneSplitView__UxmlFactory(__TwoPaneSplitView__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TwoPaneSplitView__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TwoPaneSplitView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitView*, "UnityEngine.UIElements", "TwoPaneSplitView");
NEED_NO_BOX(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlFactory*, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__TwoPaneSplitView__UxmlTraits*, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlTraits");
