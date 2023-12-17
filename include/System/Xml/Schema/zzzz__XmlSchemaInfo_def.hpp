#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaInfo)
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaInfo);
// Type: System.Xml.Schema::XmlSchemaInfo
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11729))
// CS Name: ::System.Xml.Schema::XmlSchemaInfo*
class CORDL_TYPE XmlSchemaInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field isDefault offset 0x10
 __declspec(property(get=__get_isDefault, put=__set_isDefault)) bool  isDefault;

/// @brief Field isNil offset 0x11
 __declspec(property(get=__get_isNil, put=__set_isNil)) bool  isNil;

/// @brief Field schemaElement offset 0x18
 __declspec(property(get=__get_schemaElement, put=__set_schemaElement)) ::System::Xml::Schema::XmlSchemaElement*  schemaElement;

/// @brief Field schemaAttribute offset 0x20
 __declspec(property(get=__get_schemaAttribute, put=__set_schemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute*  schemaAttribute;

/// @brief Field schemaType offset 0x28
 __declspec(property(get=__get_schemaType, put=__set_schemaType)) ::System::Xml::Schema::XmlSchemaType*  schemaType;

/// @brief Field memberType offset 0x30
 __declspec(property(get=__get_memberType, put=__set_memberType)) ::System::Xml::Schema::XmlSchemaSimpleType*  memberType;

/// @brief Field validity offset 0x38
 __declspec(property(get=__get_validity, put=__set_validity)) ::System::Xml::Schema::XmlSchemaValidity  validity;

/// @brief Field contentType offset 0x3c
 __declspec(property(get=__get_contentType, put=__set_contentType)) ::System::Xml::Schema::XmlSchemaContentType  contentType;

 __declspec(property(get=get_Validity)) ::System::Xml::Schema::XmlSchemaValidity  Validity;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsNil)) bool  IsNil;

 __declspec(property(get=get_MemberType)) ::System::Xml::Schema::XmlSchemaSimpleType*  MemberType;

 __declspec(property(get=get_SchemaType)) ::System::Xml::Schema::XmlSchemaType*  SchemaType;

 __declspec(property(get=get_SchemaElement)) ::System::Xml::Schema::XmlSchemaElement*  SchemaElement;

 __declspec(property(get=get_SchemaAttribute)) ::System::Xml::Schema::XmlSchemaAttribute*  SchemaAttribute;

/// @brief Convert operator to "::System::Xml::Schema::IXmlSchemaInfo"
constexpr operator  ::System::Xml::Schema::IXmlSchemaInfo*() noexcept;

constexpr void __set_isDefault(bool  value) ;

constexpr bool& __get_isDefault() ;

constexpr bool const& __get_isDefault() const;

constexpr void __set_isNil(bool  value) ;

constexpr bool& __get_isNil() ;

constexpr bool const& __get_isNil() const;

constexpr void __set_schemaElement(::System::Xml::Schema::XmlSchemaElement*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaElement* __get_schemaElement() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaElement*> __get_schemaElement() const;

constexpr void __set_schemaAttribute(::System::Xml::Schema::XmlSchemaAttribute*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaAttribute* __get_schemaAttribute() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAttribute*> __get_schemaAttribute() const;

constexpr void __set_schemaType(::System::Xml::Schema::XmlSchemaType*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaType* __get_schemaType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> __get_schemaType() const;

constexpr void __set_memberType(::System::Xml::Schema::XmlSchemaSimpleType*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaSimpleType* __get_memberType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> __get_memberType() const;

constexpr void __set_validity(::System::Xml::Schema::XmlSchemaValidity  value) ;

constexpr ::System::Xml::Schema::XmlSchemaValidity& __get_validity() ;

constexpr ::System::Xml::Schema::XmlSchemaValidity const& __get_validity() const;

constexpr void __set_contentType(::System::Xml::Schema::XmlSchemaContentType  value) ;

constexpr ::System::Xml::Schema::XmlSchemaContentType& __get_contentType() ;

constexpr ::System::Xml::Schema::XmlSchemaContentType const& __get_contentType() const;

static inline ::System::Xml::Schema::XmlSchemaInfo* New_ctor() ;

/// @brief Method .ctor addr 0x28c8b5c size 0x30 virtual false final false
inline void _ctor() ;

static inline ::System::Xml::Schema::XmlSchemaInfo* New_ctor(::System::Xml::Schema::XmlSchemaValidity  validity) ;

/// @brief Method .ctor addr 0x28c8ba8 size 0x3c virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaValidity  validity) ;

/// @brief Method get_Validity addr 0x28c8be4 size 0x8 virtual true final true
inline ::System::Xml::Schema::XmlSchemaValidity get_Validity() ;

/// @brief Method get_IsDefault addr 0x28c8bec size 0x8 virtual true final true
inline bool get_IsDefault() ;

/// @brief Method get_IsNil addr 0x28c8bf4 size 0x8 virtual true final true
inline bool get_IsNil() ;

/// @brief Method get_MemberType addr 0x28c8bfc size 0x8 virtual true final true
inline ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType() ;

/// @brief Method get_SchemaType addr 0x28c8c04 size 0x8 virtual true final true
inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType() ;

/// @brief Method get_SchemaElement addr 0x28c8c0c size 0x8 virtual true final true
inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement() ;

/// @brief Method get_SchemaAttribute addr 0x28c8c14 size 0x8 virtual true final true
inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute() ;

/// @brief Method Clear addr 0x28c8b8c size 0x1c virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaInfo(XmlSchemaInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaInfo(XmlSchemaInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInfo, 0x40>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInfo*, "System.Xml.Schema", "XmlSchemaInfo");
