#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_dateTimeBase)
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
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
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_dateTimeBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_dateTimeBase);
// Type: System.Xml.Schema::Datatype_dateTimeBase
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11635))
// CS Name: ::System.Xml.Schema::Datatype_dateTimeBase*
class CORDL_TYPE Datatype_dateTimeBase : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Xml::Schema::Datatype_anySimpleType)]{};

/// @brief Field dateTimeFlags offset 0x38
 __declspec(property(get=__get_dateTimeFlags, put=__set_dateTimeFlags)) ::System::Xml::Schema::XsdDateTimeFlags  dateTimeFlags;

 __declspec(property(get=get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker*  FacetsChecker;

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_ListValueType)) ::System::Type*  ListValueType;

 __declspec(property(get=get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace  BuiltInWhitespaceFacet;

static inline void setStaticF_atomicValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_atomicValueType() ;

static inline void setStaticF_listValueType(::System::Type*  value) ;

static inline ::System::Type* getStaticF_listValueType() ;

constexpr void __set_dateTimeFlags(::System::Xml::Schema::XsdDateTimeFlags  value) ;

constexpr ::System::Xml::Schema::XsdDateTimeFlags& __get_dateTimeFlags() ;

constexpr ::System::Xml::Schema::XsdDateTimeFlags const& __get_dateTimeFlags() const;

/// @brief Method CreateValueConverter addr 0x28b9704 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method get_FacetsChecker addr 0x28b976c size 0x58 virtual true final false
inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x28b97c4 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

static inline ::System::Xml::Schema::Datatype_dateTimeBase* New_ctor(::System::Xml::Schema::XsdDateTimeFlags  dateTimeFlags) ;

/// @brief Method .ctor addr 0x28b97cc size 0x68 virtual false final false
inline void _ctor(::System::Xml::Schema::XsdDateTimeFlags  dateTimeFlags) ;

/// @brief Method get_ValueType addr 0x28b9834 size 0x58 virtual true final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_ListValueType addr 0x28b988c size 0x58 virtual true final false
inline ::System::Type* get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x28b98e4 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method Compare addr 0x28b98ec size 0x108 virtual true final false
inline int32_t Compare(::System::Object*  value1, ::System::Object*  value2) ;

/// @brief Method TryParseValue addr 0x28b99f4 size 0x324 virtual true final false
inline ::System::Exception* TryParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ByRef<::System::Object*>  typedValue) ;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Datatype_dateTimeBase(Datatype_dateTimeBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Datatype_dateTimeBase(Datatype_dateTimeBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Datatype_dateTimeBase()  = default;
public:


// Fields

// Static field atomicValueType

// Static field listValueType


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_dateTimeBase, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_dateTimeBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_dateTimeBase*, "System.Xml.Schema", "Datatype_dateTimeBase");
