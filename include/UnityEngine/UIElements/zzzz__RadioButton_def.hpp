#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseBoolField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RadioButton)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __RadioButton__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __RadioButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RadioButton;
}
namespace UnityEngine::UIElements {
class __RadioButton__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RadioButton__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RadioButton);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RadioButton__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RadioButton__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7131), inst: 914 }), TypeDefinitionIndex(TypeDefinitionIndex(6992)), TypeDefinitionIndex(TypeDefinitionIndex(7131))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7077))
// CS Name: ::RadioButton::UxmlTraits*
class CORDL_TYPE __RadioButton__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<bool,::UnityEngine::UIElements::UxmlBoolAttributeDescription*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::BaseFieldTraits_2<bool,::UnityEngine::UIElements::UxmlBoolAttributeDescription*>)]{};

/// @brief Field m_Text offset 0x88
 __declspec(property(get=__get_m_Text, put=__set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Text;

constexpr void __set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Text() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Text() const;

/// @brief Method Init addr 0x2e31424 size 0x118 virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__RadioButton__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e3153c size 0xa0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RadioButton__UxmlTraits(__RadioButton__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RadioButton__UxmlTraits(__RadioButton__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RadioButton__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RadioButton__UxmlTraits, 0x90>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::RadioButton
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7067))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7078))
// CS Name: ::UnityEngine.UIElements::RadioButton*
class CORDL_TYPE RadioButton : public ::UnityEngine::UIElements::BaseBoolField {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__RadioButton__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__RadioButton__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x430};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x430 - sizeof(::UnityEngine::UIElements::BaseBoolField)]{};

/// @brief Field m_CheckmarkBackground offset 0x428
 __declspec(property(get=__get_m_CheckmarkBackground, put=__set_m_CheckmarkBackground)) ::UnityEngine::UIElements::VisualElement*  m_CheckmarkBackground;

 __declspec(property(get=get_value, put=set_value)) bool  value;

/// @brief Convert operator to "::UnityEngine::UIElements::IGroupBoxOption"
constexpr operator  ::UnityEngine::UIElements::IGroupBoxOption*() noexcept;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_labelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassName() ;

static inline void setStaticF_inputUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_inputUssClassName() ;

static inline void setStaticF_checkmarkBackgroundUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_checkmarkBackgroundUssClassName() ;

static inline void setStaticF_checkmarkUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_checkmarkUssClassName() ;

static inline void setStaticF_textUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_textUssClassName() ;

constexpr void __set_m_CheckmarkBackground(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CheckmarkBackground() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CheckmarkBackground() const;

/// @brief Method get_value addr 0x2e30ce8 size 0x48 virtual true final false
inline bool get_value() ;

/// @brief Method set_value addr 0x2e30d30 size 0xe0 virtual true final false
inline void set_value(bool  value) ;

static inline ::UnityEngine::UIElements::RadioButton* New_ctor() ;

/// @brief Method .ctor addr 0x2e30f04 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::RadioButton* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x2e30f0c size 0x1d8 virtual false final false
inline void _ctor(::StringW  label) ;

/// @brief Method InitLabel addr 0x2e310e4 size 0x78 virtual true final false
inline void InitLabel() ;

/// @brief Method ToggleValue addr 0x2e3115c size 0x40 virtual true final false
inline void ToggleValue() ;

/// @brief Method SetSelected addr 0x2e3119c size 0x14 virtual true final true
inline void SetSelected(bool  selected) ;

/// @brief Method SetValueWithoutNotify addr 0x2e311b0 size 0x1c virtual true final false
inline void SetValueWithoutNotify(bool  newValue) ;

/// @brief Method UpdateCheckmark addr 0x2e30e10 size 0xf4 virtual false final false
inline void UpdateCheckmark() ;

/// @brief Method UpdateMixedValueContent addr 0x2e311cc size 0xa0 virtual true final false
inline void UpdateMixedValueContent() ;

// Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RadioButton(RadioButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadioButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadioButton(RadioButton const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RadioButton()  = default;
public:


// Fields

// Static field ussClassName

// Static field labelUssClassName

// Static field inputUssClassName

// Static field checkmarkBackgroundUssClassName

// Static field checkmarkUssClassName

// Static field textUssClassName


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RadioButton, 0x430>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5271 }), TypeDefinitionIndex(TypeDefinitionIndex(7077)), TypeDefinitionIndex(TypeDefinitionIndex(7078))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7076))
// CS Name: ::RadioButton::UxmlFactory*
class CORDL_TYPE __RadioButton__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButton*,::UnityEngine::UIElements::__RadioButton__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButton*,::UnityEngine::UIElements::__RadioButton__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__RadioButton__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e313dc size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RadioButton__UxmlFactory(__RadioButton__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RadioButton__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RadioButton__UxmlFactory(__RadioButton__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RadioButton__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RadioButton__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RadioButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButton*, "UnityEngine.UIElements", "RadioButton");
NEED_NO_BOX(::UnityEngine::UIElements::__RadioButton__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RadioButton__UxmlFactory*, "UnityEngine.UIElements", "RadioButton/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__RadioButton__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RadioButton__UxmlTraits*, "UnityEngine.UIElements", "RadioButton/UxmlTraits");
