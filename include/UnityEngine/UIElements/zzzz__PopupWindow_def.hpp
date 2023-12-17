#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PopupWindow)
namespace UnityEngine::UIElements {
class __PopupWindow__UxmlTraits;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __PopupWindow__UxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PopupWindow;
}
namespace UnityEngine::UIElements {
class __PopupWindow__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __PopupWindow__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PopupWindow);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PopupWindow__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PopupWindow__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6813))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7028))
// CS Name: ::PopupWindow::UxmlTraits*
class CORDL_TYPE __PopupWindow__UxmlTraits : public ::UnityEngine::UIElements::__TextElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::__TextElement__UxmlTraits)]{};

static inline ::UnityEngine::UIElements::__PopupWindow__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e19c84 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PopupWindow__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PopupWindow__UxmlTraits(__PopupWindow__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PopupWindow__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PopupWindow__UxmlTraits(__PopupWindow__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PopupWindow__UxmlTraits()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PopupWindow__UxmlTraits, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PopupWindow
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6814))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7029))
// CS Name: ::UnityEngine.UIElements::PopupWindow*
class CORDL_TYPE PopupWindow : public ::UnityEngine::UIElements::TextElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__PopupWindow__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__PopupWindow__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x480};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x480 - sizeof(::UnityEngine::UIElements::TextElement)]{};

/// @brief Field m_ContentContainer offset 0x478
 __declspec(property(get=__get_m_ContentContainer, put=__set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement*  m_ContentContainer;

 __declspec(property(get=get_contentContainer)) ::UnityEngine::UIElements::VisualElement*  contentContainer;

constexpr void __set_m_ContentContainer(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_ContentContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_ContentContainer() const;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_contentUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_contentUssClassName() ;

static inline ::UnityEngine::UIElements::PopupWindow* New_ctor() ;

/// @brief Method .ctor addr 0x2e19ab0 size 0x12c virtual false final false
inline void _ctor() ;

/// @brief Method get_contentContainer addr 0x2e19bdc size 0x8 virtual true final false
inline ::UnityEngine::UIElements::VisualElement* get_contentContainer() ;

// Ctor Parameters [CppParam { name: "", ty: "PopupWindow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PopupWindow(PopupWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PopupWindow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PopupWindow(PopupWindow const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PopupWindow()  = default;
public:


// Fields

// Static field ussClassName

// Static field contentUssClassName


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PopupWindow, 0x480>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7028)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5269 }), TypeDefinitionIndex(TypeDefinitionIndex(7029)), TypeDefinitionIndex(TypeDefinitionIndex(6997))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7027))
// CS Name: ::PopupWindow::UxmlFactory*
class CORDL_TYPE __PopupWindow__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::PopupWindow*,::UnityEngine::UIElements::__PopupWindow__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::PopupWindow*,::UnityEngine::UIElements::__PopupWindow__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__PopupWindow__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e113b0 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PopupWindow__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PopupWindow__UxmlFactory(__PopupWindow__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PopupWindow__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PopupWindow__UxmlFactory(__PopupWindow__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PopupWindow__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PopupWindow__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PopupWindow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PopupWindow*, "UnityEngine.UIElements", "PopupWindow");
NEED_NO_BOX(::UnityEngine::UIElements::__PopupWindow__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PopupWindow__UxmlFactory*, "UnityEngine.UIElements", "PopupWindow/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__PopupWindow__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PopupWindow__UxmlTraits*, "UnityEngine.UIElements", "PopupWindow/UxmlTraits");
