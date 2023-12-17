#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelpBox)
namespace UnityEngine::UIElements {
class __HelpBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class __HelpBox__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct HelpBoxMessageType;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class HelpBox;
}
namespace UnityEngine::UIElements {
class __HelpBox__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __HelpBox__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::HelpBox);
MARK_REF_PTR_T(::UnityEngine::UIElements::__HelpBox__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__HelpBox__UxmlTraits);
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7111))
// CS Name: ::HelpBox::UxmlTraits*
class CORDL_TYPE __HelpBox__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::__VisualElement__UxmlTraits)]{};

/// @brief Field m_Text offset 0x70
 __declspec(property(get=__get_m_Text, put=__set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription*  m_Text;

/// @brief Field m_MessageType offset 0x78
 __declspec(property(get=__get_m_MessageType, put=__set_m_MessageType)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*  m_MessageType;

constexpr void __set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription*  value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* __get_m_Text() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> __get_m_Text() const;

constexpr void __set_m_MessageType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*  value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* __get_m_MessageType() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*> __get_m_MessageType() const;

/// @brief Method Init addr 0x2e374c8 size 0x154 virtual true final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::__HelpBox__UxmlTraits* New_ctor() ;

/// @brief Method .ctor addr 0x2e3761c size 0xfc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlTraits", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HelpBox__UxmlTraits(__HelpBox__UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlTraits", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HelpBox__UxmlTraits(__HelpBox__UxmlTraits const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HelpBox__UxmlTraits()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__HelpBox__UxmlTraits, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::HelpBox
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6744))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7112))
// CS Name: ::UnityEngine.UIElements::HelpBox*
class CORDL_TYPE HelpBox : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::__HelpBox__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::__HelpBox__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x3d0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x3d0 - sizeof(::UnityEngine::UIElements::VisualElement)]{};

/// @brief Field m_HelpBoxMessageType offset 0x3b0
 __declspec(property(get=__get_m_HelpBoxMessageType, put=__set_m_HelpBoxMessageType)) ::UnityEngine::UIElements::HelpBoxMessageType  m_HelpBoxMessageType;

/// @brief Field m_Icon offset 0x3b8
 __declspec(property(get=__get_m_Icon, put=__set_m_Icon)) ::UnityEngine::UIElements::VisualElement*  m_Icon;

/// @brief Field m_IconClass offset 0x3c0
 __declspec(property(get=__get_m_IconClass, put=__set_m_IconClass)) ::StringW  m_IconClass;

/// @brief Field m_Label offset 0x3c8
 __declspec(property(get=__get_m_Label, put=__set_m_Label)) ::UnityEngine::UIElements::Label*  m_Label;

 __declspec(property(put=set_text)) ::StringW  text;

 __declspec(property(put=set_messageType)) ::UnityEngine::UIElements::HelpBoxMessageType  messageType;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_labelUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_labelUssClassName() ;

static inline void setStaticF_iconUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_iconUssClassName() ;

static inline void setStaticF_iconInfoUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_iconInfoUssClassName() ;

static inline void setStaticF_iconwarningUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_iconwarningUssClassName() ;

static inline void setStaticF_iconErrorUssClassName(::StringW  value) ;

static inline ::StringW getStaticF_iconErrorUssClassName() ;

constexpr void __set_m_HelpBoxMessageType(::UnityEngine::UIElements::HelpBoxMessageType  value) ;

constexpr ::UnityEngine::UIElements::HelpBoxMessageType& __get_m_HelpBoxMessageType() ;

constexpr ::UnityEngine::UIElements::HelpBoxMessageType const& __get_m_HelpBoxMessageType() const;

constexpr void __set_m_Icon(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Icon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Icon() const;

constexpr void __set_m_IconClass(::StringW  value) ;

constexpr ::StringW& __get_m_IconClass() ;

constexpr ::StringW const& __get_m_IconClass() const;

constexpr void __set_m_Label(::UnityEngine::UIElements::Label*  value) ;

constexpr ::UnityEngine::UIElements::Label* __get_m_Label() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> __get_m_Label() const;

/// @brief Method set_text addr 0x2e36fc8 size 0x24 virtual false final false
inline void set_text(::StringW  value) ;

/// @brief Method set_messageType addr 0x2e36fec size 0x18 virtual false final false
inline void set_messageType(::UnityEngine::UIElements::HelpBoxMessageType  value) ;

static inline ::UnityEngine::UIElements::HelpBox* New_ctor() ;

/// @brief Method .ctor addr 0x2e370b8 size 0x54 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::HelpBox* New_ctor(::StringW  text, ::UnityEngine::UIElements::HelpBoxMessageType  messageType) ;

/// @brief Method .ctor addr 0x2e3710c size 0x150 virtual false final false
inline void _ctor(::StringW  text, ::UnityEngine::UIElements::HelpBoxMessageType  messageType) ;

/// @brief Method GetIconClass addr 0x2e3725c size 0xb8 virtual false final false
inline ::StringW GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType  messageType) ;

/// @brief Method UpdateIcon addr 0x2e37004 size 0xb4 virtual false final false
inline void UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType  messageType) ;

// Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpBox(HelpBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpBox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpBox(HelpBox const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HelpBox()  = default;
public:


// Fields

// Static field ussClassName

// Static field labelUssClassName

// Static field iconUssClassName

// Static field iconInfoUssClassName

// Static field iconwarningUssClassName

// Static field iconErrorUssClassName


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::HelpBox, 0x3d0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5262 }), TypeDefinitionIndex(TypeDefinitionIndex(7112)), TypeDefinitionIndex(TypeDefinitionIndex(7111)), TypeDefinitionIndex(TypeDefinitionIndex(6997))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7110))
// CS Name: ::HelpBox::UxmlFactory*
class CORDL_TYPE __HelpBox__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::HelpBox*,::UnityEngine::UIElements::__HelpBox__UxmlTraits*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::HelpBox*,::UnityEngine::UIElements::__HelpBox__UxmlTraits*>)]{};

static inline ::UnityEngine::UIElements::__HelpBox__UxmlFactory* New_ctor() ;

/// @brief Method .ctor addr 0x2e37480 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HelpBox__UxmlFactory(__HelpBox__UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HelpBox__UxmlFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HelpBox__UxmlFactory(__HelpBox__UxmlFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HelpBox__UxmlFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__HelpBox__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::HelpBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HelpBox*, "UnityEngine.UIElements", "HelpBox");
NEED_NO_BOX(::UnityEngine::UIElements::__HelpBox__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__HelpBox__UxmlFactory*, "UnityEngine.UIElements", "HelpBox/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__HelpBox__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__HelpBox__UxmlTraits*, "UnityEngine.UIElements", "HelpBox/UxmlTraits");
