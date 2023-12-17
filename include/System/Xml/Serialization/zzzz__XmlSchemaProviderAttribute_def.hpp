#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaProviderAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSchemaProviderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSchemaProviderAttribute);
// Type: System.Xml.Serialization::XmlSchemaProviderAttribute
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11590))
// CS Name: ::System.Xml.Serialization::XmlSchemaProviderAttribute*
class CORDL_TYPE XmlSchemaProviderAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field _methodName offset 0x10
 __declspec(property(get=__get__methodName, put=__set__methodName)) ::StringW  _methodName;

/// @brief Field _isAny offset 0x18
 __declspec(property(get=__get__isAny, put=__set__isAny)) bool  _isAny;

 __declspec(property(put=set_IsAny)) bool  IsAny;

constexpr void __set__methodName(::StringW  value) ;

constexpr ::StringW& __get__methodName() ;

constexpr ::StringW const& __get__methodName() const;

constexpr void __set__isAny(bool  value) ;

constexpr bool& __get__isAny() ;

constexpr bool const& __get__isAny() const;

static inline ::System::Xml::Serialization::XmlSchemaProviderAttribute* New_ctor(::StringW  methodName) ;

/// @brief Method .ctor addr 0x28abf5c size 0x28 virtual false final false
inline void _ctor(::StringW  methodName) ;

/// @brief Method set_IsAny addr 0x28abf84 size 0xc virtual false final false
inline void set_IsAny(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaProviderAttribute(XmlSchemaProviderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaProviderAttribute(XmlSchemaProviderAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaProviderAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSchemaProviderAttribute, 0x20>, "Size mismatch!");

} // namespace end def System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSchemaProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSchemaProviderAttribute*, "System.Xml.Serialization", "XmlSchemaProviderAttribute");
