#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DatatypeImplementation)
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class __DatatypeImplementation__SchemaDatatypeMap;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System {
class Object;
}
namespace System::Xml::Schema {
struct XmlSchemaDatatypeVariety;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
class __DatatypeImplementation__SchemaDatatypeMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DatatypeImplementation);
MARK_REF_PTR_T(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap);
// Type: ::SchemaDatatypeMap
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11620))
// CS Name: ::DatatypeImplementation::SchemaDatatypeMap*
class CORDL_TYPE __DatatypeImplementation__SchemaDatatypeMap : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field type offset 0x18
 __declspec(property(get=__get_type, put=__set_type)) ::System::Xml::Schema::DatatypeImplementation*  type;

/// @brief Field parentIndex offset 0x20
 __declspec(property(get=__get_parentIndex, put=__set_parentIndex)) int32_t  parentIndex;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ParentIndex)) int32_t  ParentIndex;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_type(::System::Xml::Schema::DatatypeImplementation*  value) ;

constexpr ::System::Xml::Schema::DatatypeImplementation* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DatatypeImplementation*> __get_type() const;

constexpr void __set_parentIndex(int32_t  value) ;

constexpr int32_t& __get_parentIndex() ;

constexpr int32_t const& __get_parentIndex() const;

static inline ::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap* New_ctor(::StringW  name, ::System::Xml::Schema::DatatypeImplementation*  type) ;

/// @brief Method .ctor addr 0x28b475c size 0x2c virtual false final false
inline void _ctor(::StringW  name, ::System::Xml::Schema::DatatypeImplementation*  type) ;

static inline ::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap* New_ctor(::StringW  name, ::System::Xml::Schema::DatatypeImplementation*  type, int32_t  parentIndex) ;

/// @brief Method .ctor addr 0x28b4788 size 0x3c virtual false final false
inline void _ctor(::StringW  name, ::System::Xml::Schema::DatatypeImplementation*  type, int32_t  parentIndex) ;

/// @brief Method op_Explicit addr 0x28b5948 size 0x18 virtual false final false
static inline ::System::Xml::Schema::DatatypeImplementation* op_Explicit___System__Xml__Schema__DatatypeImplementation_(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*  sdm) ;

/// @brief Method get_Name addr 0x28b5960 size 0x8 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method get_ParentIndex addr 0x28b5968 size 0x8 virtual false final false
inline int32_t get_ParentIndex() ;

/// @brief Method CompareTo addr 0x28b5970 size 0x70 virtual true final true
inline int32_t CompareTo(::System::Object*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "__DatatypeImplementation__SchemaDatatypeMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DatatypeImplementation__SchemaDatatypeMap(__DatatypeImplementation__SchemaDatatypeMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DatatypeImplementation__SchemaDatatypeMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DatatypeImplementation__SchemaDatatypeMap(__DatatypeImplementation__SchemaDatatypeMap const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DatatypeImplementation__SchemaDatatypeMap()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap, 0x28>, "Size mismatch!");

} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::DatatypeImplementation
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11621))
// CS Name: ::System.Xml.Schema::DatatypeImplementation*
class CORDL_TYPE DatatypeImplementation : public ::System::Xml::Schema::XmlSchemaDatatype {
public:
// Declarations
using SchemaDatatypeMap = ::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Xml::Schema::XmlSchemaDatatype)]{};

/// @brief Field variety offset 0x10
 __declspec(property(get=__get_variety, put=__set_variety)) ::System::Xml::Schema::XmlSchemaDatatypeVariety  variety;

/// @brief Field restriction offset 0x18
 __declspec(property(get=__get_restriction, put=__set_restriction)) ::System::Xml::Schema::RestrictionFacets*  restriction;

/// @brief Field baseType offset 0x20
 __declspec(property(get=__get_baseType, put=__set_baseType)) ::System::Xml::Schema::DatatypeImplementation*  baseType;

/// @brief Field valueConverter offset 0x28
 __declspec(property(get=__get_valueConverter, put=__set_valueConverter)) ::System::Xml::Schema::XmlValueConverter*  valueConverter;

/// @brief Field parentSchemaType offset 0x30
 __declspec(property(get=__get_parentSchemaType, put=__set_parentSchemaType)) ::System::Xml::Schema::XmlSchemaType*  parentSchemaType;

 __declspec(property(get=get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker*  FacetsChecker;

 __declspec(property(get=get_ValueConverter)) ::System::Xml::Schema::XmlValueConverter*  ValueConverter;

 __declspec(property(get=get_TokenizedType)) ::System::Xml::XmlTokenizedType  TokenizedType;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

 __declspec(property(get=get_Variety)) ::System::Xml::Schema::XmlSchemaDatatypeVariety  Variety;

 __declspec(property(get=get_TypeCode)) ::System::Xml::Schema::XmlTypeCode  TypeCode;

 __declspec(property(get=get_Restriction)) ::System::Xml::Schema::RestrictionFacets*  Restriction;

 __declspec(property(get=get_ListValueType)) ::System::Type*  ListValueType;

 __declspec(property(get=get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace  BuiltInWhitespaceFacet;

constexpr void __set_variety(::System::Xml::Schema::XmlSchemaDatatypeVariety  value) ;

constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety& __get_variety() ;

constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety const& __get_variety() const;

constexpr void __set_restriction(::System::Xml::Schema::RestrictionFacets*  value) ;

constexpr ::System::Xml::Schema::RestrictionFacets* __get_restriction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::RestrictionFacets*> __get_restriction() const;

constexpr void __set_baseType(::System::Xml::Schema::DatatypeImplementation*  value) ;

constexpr ::System::Xml::Schema::DatatypeImplementation* __get_baseType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DatatypeImplementation*> __get_baseType() const;

constexpr void __set_valueConverter(::System::Xml::Schema::XmlValueConverter*  value) ;

constexpr ::System::Xml::Schema::XmlValueConverter* __get_valueConverter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlValueConverter*> __get_valueConverter() const;

constexpr void __set_parentSchemaType(::System::Xml::Schema::XmlSchemaType*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaType* __get_parentSchemaType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> __get_parentSchemaType() const;

static inline void setStaticF_builtinTypes(::System::Collections::Hashtable*  value) ;

static inline ::System::Collections::Hashtable* getStaticF_builtinTypes() ;

static inline void setStaticF_enumToTypeCode(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*,::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>  value) ;

static inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*,::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> getStaticF_enumToTypeCode() ;

static inline void setStaticF_anySimpleType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_anySimpleType() ;

static inline void setStaticF_anyAtomicType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_anyAtomicType() ;

static inline void setStaticF_untypedAtomicType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_untypedAtomicType() ;

static inline void setStaticF_yearMonthDurationType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_yearMonthDurationType() ;

static inline void setStaticF_dayTimeDurationType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_dayTimeDurationType() ;

static inline void setStaticF_QnAnySimpleType(::System::Xml::XmlQualifiedName*  value) ;

static inline ::System::Xml::XmlQualifiedName* getStaticF_QnAnySimpleType() ;

static inline void setStaticF_QnAnyType(::System::Xml::XmlQualifiedName*  value) ;

static inline ::System::Xml::XmlQualifiedName* getStaticF_QnAnyType() ;

static inline void setStaticF_stringFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_stringFacetsChecker() ;

static inline void setStaticF_miscFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_miscFacetsChecker() ;

static inline void setStaticF_numeric2FacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_numeric2FacetsChecker() ;

static inline void setStaticF_binaryFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_binaryFacetsChecker() ;

static inline void setStaticF_dateTimeFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_dateTimeFacetsChecker() ;

static inline void setStaticF_durationFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_durationFacetsChecker() ;

static inline void setStaticF_listFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_listFacetsChecker() ;

static inline void setStaticF_qnameFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_qnameFacetsChecker() ;

static inline void setStaticF_unionFacetsChecker(::System::Xml::Schema::FacetsChecker*  value) ;

static inline ::System::Xml::Schema::FacetsChecker* getStaticF_unionFacetsChecker() ;

static inline void setStaticF_c_anySimpleType(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_anySimpleType() ;

static inline void setStaticF_c_anyURI(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_anyURI() ;

static inline void setStaticF_c_base64Binary(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_base64Binary() ;

static inline void setStaticF_c_boolean(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_boolean() ;

static inline void setStaticF_c_byte(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_byte() ;

static inline void setStaticF_c_char(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_char() ;

static inline void setStaticF_c_date(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_date() ;

static inline void setStaticF_c_dateTime(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dateTime() ;

static inline void setStaticF_c_dateTimeNoTz(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dateTimeNoTz() ;

static inline void setStaticF_c_dateTimeTz(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dateTimeTz() ;

static inline void setStaticF_c_day(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_day() ;

static inline void setStaticF_c_decimal(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_decimal() ;

static inline void setStaticF_c_double(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_double() ;

static inline void setStaticF_c_doubleXdr(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_doubleXdr() ;

static inline void setStaticF_c_duration(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_duration() ;

static inline void setStaticF_c_ENTITY(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ENTITY() ;

static inline void setStaticF_c_ENTITIES(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ENTITIES() ;

static inline void setStaticF_c_ENUMERATION(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ENUMERATION() ;

static inline void setStaticF_c_fixed(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_fixed() ;

static inline void setStaticF_c_float(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_float() ;

static inline void setStaticF_c_floatXdr(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_floatXdr() ;

static inline void setStaticF_c_hexBinary(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_hexBinary() ;

static inline void setStaticF_c_ID(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ID() ;

static inline void setStaticF_c_IDREF(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_IDREF() ;

static inline void setStaticF_c_IDREFS(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_IDREFS() ;

static inline void setStaticF_c_int(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_int() ;

static inline void setStaticF_c_integer(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_integer() ;

static inline void setStaticF_c_language(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_language() ;

static inline void setStaticF_c_long(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_long() ;

static inline void setStaticF_c_month(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_month() ;

static inline void setStaticF_c_monthDay(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_monthDay() ;

static inline void setStaticF_c_Name(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_Name() ;

static inline void setStaticF_c_NCName(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NCName() ;

static inline void setStaticF_c_negativeInteger(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_negativeInteger() ;

static inline void setStaticF_c_NMTOKEN(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NMTOKEN() ;

static inline void setStaticF_c_NMTOKENS(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NMTOKENS() ;

static inline void setStaticF_c_nonNegativeInteger(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_nonNegativeInteger() ;

static inline void setStaticF_c_nonPositiveInteger(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_nonPositiveInteger() ;

static inline void setStaticF_c_normalizedString(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_normalizedString() ;

static inline void setStaticF_c_NOTATION(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NOTATION() ;

static inline void setStaticF_c_positiveInteger(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_positiveInteger() ;

static inline void setStaticF_c_QName(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_QName() ;

static inline void setStaticF_c_QNameXdr(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_QNameXdr() ;

static inline void setStaticF_c_short(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_short() ;

static inline void setStaticF_c_string(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_string() ;

static inline void setStaticF_c_time(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_time() ;

static inline void setStaticF_c_timeNoTz(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_timeNoTz() ;

static inline void setStaticF_c_timeTz(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_timeTz() ;

static inline void setStaticF_c_token(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_token() ;

static inline void setStaticF_c_unsignedByte(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedByte() ;

static inline void setStaticF_c_unsignedInt(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedInt() ;

static inline void setStaticF_c_unsignedLong(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedLong() ;

static inline void setStaticF_c_unsignedShort(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedShort() ;

static inline void setStaticF_c_uuid(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_uuid() ;

static inline void setStaticF_c_year(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_year() ;

static inline void setStaticF_c_yearMonth(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_yearMonth() ;

static inline void setStaticF_c_normalizedStringV1Compat(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_normalizedStringV1Compat() ;

static inline void setStaticF_c_tokenV1Compat(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_tokenV1Compat() ;

static inline void setStaticF_c_anyAtomicType(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_anyAtomicType() ;

static inline void setStaticF_c_dayTimeDuration(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dayTimeDuration() ;

static inline void setStaticF_c_untypedAtomicType(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_untypedAtomicType() ;

static inline void setStaticF_c_yearMonthDuration(::System::Xml::Schema::DatatypeImplementation*  value) ;

static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_yearMonthDuration() ;

static inline void setStaticF_c_tokenizedTypes(::ArrayW<::System::Xml::Schema::DatatypeImplementation*,::Array<::System::Xml::Schema::DatatypeImplementation*>*>  value) ;

static inline ::ArrayW<::System::Xml::Schema::DatatypeImplementation*,::Array<::System::Xml::Schema::DatatypeImplementation*>*> getStaticF_c_tokenizedTypes() ;

static inline void setStaticF_c_tokenizedTypesXsd(::ArrayW<::System::Xml::Schema::DatatypeImplementation*,::Array<::System::Xml::Schema::DatatypeImplementation*>*>  value) ;

static inline ::ArrayW<::System::Xml::Schema::DatatypeImplementation*,::Array<::System::Xml::Schema::DatatypeImplementation*>*> getStaticF_c_tokenizedTypesXsd() ;

static inline void setStaticF_c_XdrTypes(::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*,::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*>  value) ;

static inline ::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*,::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> getStaticF_c_XdrTypes() ;

static inline void setStaticF_c_XsdTypes(::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*,::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*>  value) ;

static inline ::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*,::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> getStaticF_c_XsdTypes() ;

/// @brief Method get_AnySimpleType addr 0x28b4f90 size 0x58 virtual false final false
static inline ::System::Xml::Schema::XmlSchemaSimpleType* get_AnySimpleType() ;

/// @brief Method get_UntypedAtomicType addr 0x28b4fe8 size 0x58 virtual false final false
static inline ::System::Xml::Schema::XmlSchemaSimpleType* get_UntypedAtomicType() ;

/// @brief Method FromXmlTokenizedType addr 0x28b5040 size 0x7c virtual false final false
static inline ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType  token) ;

/// @brief Method FromTypeName addr 0x28b50bc size 0xc0 virtual false final false
static inline ::System::Xml::Schema::DatatypeImplementation* FromTypeName(::StringW  name) ;

/// @brief Method StartBuiltinType addr 0x28b517c size 0xd4 virtual false final false
static inline ::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(::System::Xml::XmlQualifiedName*  qname, ::System::Xml::Schema::XmlSchemaDatatype*  dataType) ;

/// @brief Method FinishBuiltinType addr 0x28b5250 size 0x1e4 virtual false final false
static inline void FinishBuiltinType(::System::Xml::Schema::XmlSchemaSimpleType*  derivedType, ::System::Xml::Schema::XmlSchemaSimpleType*  baseType) ;

/// @brief Method CreateBuiltinTypes addr 0x28b47c4 size 0x7cc virtual false final false
static inline void CreateBuiltinTypes() ;

/// @brief Method GetSimpleTypeFromTypeCode addr 0x28b5434 size 0x7c virtual false final false
static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(::System::Xml::Schema::XmlTypeCode  typeCode) ;

/// @brief Method DeriveByList addr 0x28b45d4 size 0x188 virtual false final false
inline ::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(int32_t  minSize, ::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method IsEqual addr 0x28b5524 size 0x20 virtual true final false
inline bool IsEqual(::System::Object*  o1, ::System::Object*  o2) ;

/// @brief Method CreateValueConverter addr 0x28b5544 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType*  schemaType) ;

/// @brief Method get_FacetsChecker addr 0x28b554c size 0x58 virtual true final false
inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker() ;

/// @brief Method get_ValueConverter addr 0x28b55a4 size 0x34 virtual true final false
inline ::System::Xml::Schema::XmlValueConverter* get_ValueConverter() ;

/// @brief Method get_TokenizedType addr 0x28b55d8 size 0x8 virtual true final false
inline ::System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method get_ValueType addr 0x28b55e0 size 0x6c virtual true final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_Variety addr 0x28b564c size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety() ;

/// @brief Method get_TypeCode addr 0x28b5654 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_Restriction addr 0x28b565c size 0x8 virtual true final false
inline ::System::Xml::Schema::RestrictionFacets* get_Restriction() ;

/// @brief Method get_ListValueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x28b5664 size 0x8 virtual true final false
inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method ParseValue addr 0x28b566c size 0x1f8 virtual true final false
inline ::System::Object* ParseValue(::StringW  s, ::System::Xml::XmlNameTable*  nameTable, ::System::Xml::IXmlNamespaceResolver*  nsmgr) ;

/// @brief Method GetTypeName addr 0x28b5864 size 0x68 virtual false final false
inline ::StringW GetTypeName() ;

/// @brief Method Compare addr 0x28b58cc size 0x74 virtual false final false
inline int32_t Compare(::ArrayW<uint8_t,::Array<uint8_t>*>  value1, ::ArrayW<uint8_t,::Array<uint8_t>*>  value2) ;

static inline ::System::Xml::Schema::DatatypeImplementation* New_ctor() ;

/// @brief Method .ctor addr 0x28b5940 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DatatypeImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DatatypeImplementation(DatatypeImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DatatypeImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DatatypeImplementation(DatatypeImplementation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DatatypeImplementation()  = default;
public:


// Fields

// Static field builtinTypes

// Static field enumToTypeCode

// Static field anySimpleType

// Static field anyAtomicType

// Static field untypedAtomicType

// Static field yearMonthDurationType

// Static field dayTimeDurationType

// Static field QnAnySimpleType

// Static field QnAnyType

// Static field stringFacetsChecker

// Static field miscFacetsChecker

// Static field numeric2FacetsChecker

// Static field binaryFacetsChecker

// Static field dateTimeFacetsChecker

// Static field durationFacetsChecker

// Static field listFacetsChecker

// Static field qnameFacetsChecker

// Static field unionFacetsChecker

// Static field c_anySimpleType

// Static field c_anyURI

// Static field c_base64Binary

// Static field c_boolean

// Static field c_byte

// Static field c_char

// Static field c_date

// Static field c_dateTime

// Static field c_dateTimeNoTz

// Static field c_dateTimeTz

// Static field c_day

// Static field c_decimal

// Static field c_double

// Static field c_doubleXdr

// Static field c_duration

// Static field c_ENTITY

// Static field c_ENTITIES

// Static field c_ENUMERATION

// Static field c_fixed

// Static field c_float

// Static field c_floatXdr

// Static field c_hexBinary

// Static field c_ID

// Static field c_IDREF

// Static field c_IDREFS

// Static field c_int

// Static field c_integer

// Static field c_language

// Static field c_long

// Static field c_month

// Static field c_monthDay

// Static field c_Name

// Static field c_NCName

// Static field c_negativeInteger

// Static field c_NMTOKEN

// Static field c_NMTOKENS

// Static field c_nonNegativeInteger

// Static field c_nonPositiveInteger

// Static field c_normalizedString

// Static field c_NOTATION

// Static field c_positiveInteger

// Static field c_QName

// Static field c_QNameXdr

// Static field c_short

// Static field c_string

// Static field c_time

// Static field c_timeNoTz

// Static field c_timeTz

// Static field c_token

// Static field c_unsignedByte

// Static field c_unsignedInt

// Static field c_unsignedLong

// Static field c_unsignedShort

// Static field c_uuid

// Static field c_year

// Static field c_yearMonth

// Static field c_normalizedStringV1Compat

// Static field c_tokenV1Compat

// Static field c_anyAtomicType

// Static field c_dayTimeDuration

// Static field c_untypedAtomicType

// Static field c_yearMonthDuration

// Static field c_tokenizedTypes

// Static field c_tokenizedTypesXsd

// Static field c_XdrTypes

// Static field c_XsdTypes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DatatypeImplementation, 0x38>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DatatypeImplementation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DatatypeImplementation*, "System.Xml.Schema", "DatatypeImplementation");
NEED_NO_BOX(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*, "System.Xml.Schema", "DatatypeImplementation/SchemaDatatypeMap");
