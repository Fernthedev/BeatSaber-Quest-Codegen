#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlAttributeAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAttributeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAttributeAttribute);
// Type: System.Xml.Serialization::XmlAttributeAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11586))
// CS Name: ::System.Xml.Serialization::XmlAttributeAttribute*
class CORDL_TYPE XmlAttributeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field attributeName offset 0x10
 __declspec(property(get=__get_attributeName, put=__set_attributeName)) ::StringW  attributeName;

constexpr void __set_attributeName(::StringW  value) ;

constexpr ::StringW& __get_attributeName() ;

constexpr ::StringW const& __get_attributeName() const;

static inline ::System::Xml::Serialization::XmlAttributeAttribute* New_ctor(::StringW  attributeName) ;

/// @brief Method .ctor addr 0x28abed0 size 0x28 virtual false final false
inline void _ctor(::StringW  attributeName) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlAttributeAttribute(XmlAttributeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlAttributeAttribute(XmlAttributeAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlAttributeAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAttributeAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributeAttribute*, "System.Xml.Serialization", "XmlAttributeAttribute");
