#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RepeatButton)
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlTraits;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlLongAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RepeatButton;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RepeatButton__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RepeatButton);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RepeatButton__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RepeatButton__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6813))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7051))
// CS Name: ::RepeatButton::UxmlTraits*
class CORDL_TYPE __RepeatButton__UxmlTraits : public ::UnityEngine::UIElements::__TextElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::UIElements::__TextElement__UxmlTraits)]{};

/// @brief Field m_Delay offset 0x90
 __declspec(property(get=__get_m_Delay, put=__set_m_Delay)) ::UnityEngine::UIElements::UxmlLongAttributeDescription*  m_Delay;

/// @brief Field m_Interval offset 0x98
 __declspec(property(get=__get_m_Interval, put=__set_m_Interval)) ::UnityEngine::UIElements::UxmlLongAttributeDescription*  m_Interval;

constexpr void __set_m_Delay(::UnityEngine::UIElements::UxmlLongAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription* __get_m_Delay() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlLongAttributeDescription*> __get_m_Delay() const;

constexpr void __set_m_Interval(::UnityEngine::UIElements::UxmlLongAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlLongAttributeDescription* __get_m_Interval() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlLongAttributeDescription*> __get_m_Interval() const;

/// @brief Method Init addr 0x2e27420 size 0x134 virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__RepeatButton__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e27554 size 0xc4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RepeatButton__UxmlTraits(__RepeatButton__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RepeatButton__UxmlTraits(__RepeatButton__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RepeatButton__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RepeatButton__UxmlTraits, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::RepeatButton
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6814))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7052))
// CS Name: ::UnityEngine.UIElements::RepeatButton*
class CORDL_TYPE RepeatButton : public ::UnityEngine::UIElements::TextElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__RepeatButton__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__RepeatButton__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x480};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x480 - sizeof(::UnityEngine::UIElements::TextElement)]{};

/// @brief Field m_Clickable offset 0x478
 __declspec(property(get=__get_m_Clickable, put=__set_m_Clickable)) ::UnityEngine::UIElements::Clickable*  m_Clickable;

constexpr void __set_m_Clickable(::UnityEngine::UIElements::Clickable*  value) ;

constexpr ::UnityEngine::UIElements::Clickable* __get_m_Clickable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Clickable*> __get_m_Clickable() const;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline ::UnityEngine::UIElements::RepeatButton* New_ctor() ;

/// @brief Method .ctor addr 0x2e27200 size 0x94 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::RepeatButton* New_ctor(::System::Action*  clickEvent, int64_t  delay, int64_t  interval) ;

/// @brief Method .ctor addr 0x2e27294 size 0x40 virtual false final false
inline void _ctor(::System::Action*  clickEvent, int64_t  delay, int64_t  interval) ;

/// @brief Method SetAction addr 0x2e272d4 size 0xa4 virtual false final false
inline void SetAction(::System::Action*  clickEvent, int64_t  delay, int64_t  interval) ;

// Ctor Parameters [CppParam { name: "", ty: "RepeatButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RepeatButton(RepeatButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RepeatButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RepeatButton(RepeatButton const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RepeatButton()  = default;
public:


// Fields

// Static field ussClassName


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RepeatButton, 0x480>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7051)), TypeDefinitionIndex(TypeDefinitionIndex(7052)), TypeDefinitionIndex(TypeDefinitionIndex(6997)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5273 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7050))
// CS Name: ::RepeatButton::UxmlFactory*
class CORDL_TYPE __RepeatButton__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RepeatButton*,::UnityEngine::UIElements::__RepeatButton__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RepeatButton*,::UnityEngine::UIElements::__RepeatButton__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__RepeatButton__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e273d8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RepeatButton__UxmlFactory(__RepeatButton__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RepeatButton__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RepeatButton__UxmlFactory(__RepeatButton__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RepeatButton__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RepeatButton__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RepeatButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepeatButton*, "UnityEngine.UIElements", "RepeatButton");
NEED_NO_BOX(::UnityEngine::UIElements::__RepeatButton__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RepeatButton__UxmlFactory*, "UnityEngine.UIElements", "RepeatButton/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__RepeatButton__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RepeatButton__UxmlTraits*, "UnityEngine.UIElements", "RepeatButton/UxmlTraits");
