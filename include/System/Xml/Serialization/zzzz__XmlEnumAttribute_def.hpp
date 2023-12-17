#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlEnumAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlEnumAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlEnumAttribute);
// Type: System.Xml.Serialization::XmlEnumAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11588))
// CS Name: ::System.Xml.Serialization::XmlEnumAttribute*
class CORDL_TYPE XmlEnumAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

static inline ::System::Xml::Serialization::XmlEnumAttribute* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x28abf2c size 0x28 virtual false final false
inline void _ctor(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlEnumAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlEnumAttribute(XmlEnumAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlEnumAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlEnumAttribute(XmlEnumAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlEnumAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlEnumAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlEnumAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlEnumAttribute*, "System.Xml.Serialization", "XmlEnumAttribute");
