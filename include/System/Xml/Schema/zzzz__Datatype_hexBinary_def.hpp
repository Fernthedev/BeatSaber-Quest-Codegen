#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_hexBinary)
namespace System {
class Exception;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System {
class Object;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_hexBinary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_hexBinary);
// Type: System.Xml.Schema::Datatype_hexBinary
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11648))
// CS Name: ::System.Xml.Schema::Datatype_hexBinary*
class CORDL_TYPE Datatype_hexBinary : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::Schema::Datatype_anySimpleType)]{};

 __declspec(property(get=get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker*  FacetsChecker;

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_ListValueType)) ::System::Type*  ListValueType;

 __declspec(property(get=get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace  BuiltInWhitespaceFacet;

static inline void setStaticF_atomicValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_atomicValueType() ;

static inline void setStaticF_listValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_listValueType() ;

/// @brief Method CreateValueConverter addr 0x28ba22c size 0xc virtual true final false
inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method get_FacetsChecker addr 0x28ba238 size 0x58 virtual true final false
inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x28ba290 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_ValueType addr 0x28ba298 size 0x58 virtual true final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_ListValueType addr 0x28ba2f0 size 0x58 virtual true final false
inline ::System::Type* get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x28ba348 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method Compare addr 0x28ba350 size 0xbc virtual true final false
inline int32_t Compare(::System::Object*  value1, ::System::Object*  value2) ;

/// @brief Method TryParseValue addr 0x28ba40c size 0x1a4 virtual true final false
inline ::System::Exception* TryParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ByRef<::System::Object*>  typedValue) ;

static inline ::System::Xml::Schema::Datatype_hexBinary* New_ctor() ;

/// @brief Method .ctor addr 0x28ba5b0 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_hexBinary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_hexBinary(Datatype_hexBinary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_hexBinary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_hexBinary(Datatype_hexBinary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Datatype_hexBinary()  = default;
public:


// Fields

// Static field atomicValueType

// Static field listValueType


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_hexBinary, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_hexBinary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_hexBinary*, "System.Xml.Schema", "Datatype_hexBinary");
