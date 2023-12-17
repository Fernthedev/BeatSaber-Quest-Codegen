#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BaseBoolField)
namespace UnityEngine::UIElements {
class Clickable;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class Label;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseBoolField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseBoolField);
// Type: UnityEngine.UIElements::BaseBoolField
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7130)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 105 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7067))
// CS Name: ::UnityEngine.UIElements::BaseBoolField*
class CORDL_TYPE BaseBoolField : public ::UnityEngine::UIElements::BaseField_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x428};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x428 - sizeof(::UnityEngine::UIElements::BaseField_1<bool>)]{};

/// @brief Field m_Label offset 0x408
 __declspec(property(get=__get_m_Label, put=__set_m_Label)) ::UnityEngine::UIElements::Label*  m_Label;

/// @brief Field m_CheckMark offset 0x410
 __declspec(property(get=__get_m_CheckMark, put=__set_m_CheckMark)) ::UnityEngine::UIElements::VisualElement*  m_CheckMark;

/// @brief Field m_Clickable offset 0x418
 __declspec(property(get=__get_m_Clickable, put=__set_m_Clickable)) ::UnityEngine::UIElements::Clickable*  m_Clickable;

/// @brief Field m_OriginalText offset 0x420
 __declspec(property(get=__get_m_OriginalText, put=__set_m_OriginalText)) ::StringW  m_OriginalText;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

constexpr void __set_m_Label(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_Label() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_Label() const;

constexpr void __set_m_CheckMark(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CheckMark() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CheckMark() const;

constexpr void __set_m_Clickable(::UnityEngine::UIElements::Clickable*  value) ;

constexpr ::UnityEngine::UIElements::Clickable* __get_m_Clickable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Clickable*> __get_m_Clickable() const;

constexpr void __set_m_OriginalText(::StringW  value) ;

constexpr ::StringW& __get_m_OriginalText() ;

constexpr ::StringW const& __get_m_OriginalText() const;

static inline ::UnityEngine::UIElements::BaseBoolField* New_ctor(::StringW  label) ;

/// @brief Method .ctor addr 0x2e2b30c size 0x29c virtual false final false
inline void _ctor(::StringW  label) ;

/// @brief Method OnNavigationSubmit addr 0x2e2b630 size 0x34 virtual false final false
inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent*  evt) ;

/// @brief Method OnKeyDown addr 0x2e2b664 size 0x114 virtual false final false
inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt) ;

/// @brief Method get_text addr 0x2e2b778 size 0x1c virtual false final false
inline ::StringW get_text() ;

/// @brief Method set_text addr 0x2e2b5a8 size 0x88 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method InitLabel addr 0x2e2b794 size 0x94 virtual true final false
inline void InitLabel() ;

/// @brief Method SetValueWithoutNotify addr 0x2e2b828 size 0xe0 virtual true final false
inline void SetValueWithoutNotify(bool  newValue) ;

/// @brief Method OnClickEvent addr 0x2e2b908 size 0x288 virtual false final false
inline void OnClickEvent(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method ToggleValue addr 0x2e2bb90 size 0x38 virtual true final false
inline void ToggleValue() ;

/// @brief Method UpdateMixedValueContent addr 0x2e2bbc8 size 0x184 virtual true final false
inline void UpdateMixedValueContent() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseBoolField(BaseBoolField && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseBoolField", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseBoolField(BaseBoolField const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseBoolField()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseBoolField, 0x428>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseBoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseBoolField*, "UnityEngine.UIElements", "BaseBoolField");
