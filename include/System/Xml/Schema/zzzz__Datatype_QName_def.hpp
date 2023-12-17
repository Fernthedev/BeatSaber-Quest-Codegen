#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_QName)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_QName;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_QName);
// Type: System.Xml.Schema::Datatype_QName
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11651))
// CS Name: ::System.Xml.Schema::Datatype_QName*
class CORDL_TYPE Datatype_QName : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::Schema::Datatype_anySimpleType)]{};

 __declspec(property(get=get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker*  FacetsChecker;

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

 __declspec(property(get=get_TokenizedType)) ::System::Xml::XmlTokenizedType  TokenizedType;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_ListValueType)) ::System::Type*  ListValueType;

 __declspec(property(get=get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace  BuiltInWhitespaceFacet;

static inline void setStaticF_atomicValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_atomicValueType() ;

static inline void setStaticF_listValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_listValueType() ;

/// @brief Method CreateValueConverter addr 0x28bb1dc size 0xc virtual true final false
inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method get_FacetsChecker addr 0x28bb1e8 size 0x58 virtual true final false
inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x28bb240 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_TokenizedType addr 0x28bb248 size 0x8 virtual true final false
inline ::System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method get_ValueType addr 0x28bb250 size 0x58 virtual true final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_ListValueType addr 0x28bb2a8 size 0x58 virtual true final false
inline ::System::Type* get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x28bb300 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method TryParseValue addr 0x28bb308 size 0x238 virtual true final false
inline ::System::Exception* TryParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ByRef<::System::Object*>  typedValue) ;

static inline ::System::Xml::Schema::Datatype_QName* New_ctor() ;

/// @brief Method .ctor addr 0x28bb540 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_QName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_QName(Datatype_QName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_QName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_QName(Datatype_QName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Datatype_QName()  = default;
public:


// Fields

// Static field atomicValueType

// Static field listValueType


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_QName, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_QName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_QName*, "System.Xml.Schema", "Datatype_QName");
