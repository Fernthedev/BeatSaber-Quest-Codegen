#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContentValidator)
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class ContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ContentValidator);
// Type: System.Xml.Schema::ContentValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11610))
// CS Name: ::System.Xml.Schema::ContentValidator*
class CORDL_TYPE ContentValidator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field contentType offset 0x10
 __declspec(property(get=__get_contentType, put=__set_contentType)) ::System::Xml::Schema::XmlSchemaContentType  contentType;

/// @brief Field isOpen offset 0x14
 __declspec(property(get=__get_isOpen, put=__set_isOpen)) bool  isOpen;

/// @brief Field isEmptiable offset 0x15
 __declspec(property(get=__get_isEmptiable, put=__set_isEmptiable)) bool  isEmptiable;

 __declspec(property(get=get_ContentType)) ::System::Xml::Schema::XmlSchemaContentType  ContentType;

 __declspec(property(get=get_IsOpen)) bool  IsOpen;

constexpr void __set_contentType(::System::Xml::Schema::XmlSchemaContentType  value) ;

constexpr ::System::Xml::Schema::XmlSchemaContentType& __get_contentType() ;

constexpr ::System::Xml::Schema::XmlSchemaContentType const& __get_contentType() const;

constexpr void __set_isOpen(bool  value) ;

constexpr bool& __get_isOpen() ;

constexpr bool const& __get_isOpen() const;

constexpr void __set_isEmptiable(bool  value) ;

constexpr bool& __get_isEmptiable() ;

constexpr bool const& __get_isEmptiable() const;

static inline void setStaticF_Empty(::System::Xml::Schema::ContentValidator*  value) ;

static inline ::System::Xml::Schema::ContentValidator* getStaticF_Empty() ;

static inline void setStaticF_TextOnly(::System::Xml::Schema::ContentValidator*  value) ;

static inline ::System::Xml::Schema::ContentValidator* getStaticF_TextOnly() ;

static inline void setStaticF_Mixed(::System::Xml::Schema::ContentValidator*  value) ;

static inline ::System::Xml::Schema::ContentValidator* getStaticF_Mixed() ;

static inline void setStaticF_Any(::System::Xml::Schema::ContentValidator*  value) ;

static inline ::System::Xml::Schema::ContentValidator* getStaticF_Any() ;

static inline ::System::Xml::Schema::ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType  contentType) ;

/// @brief Method .ctor addr 0x28aed28 size 0x30 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaContentType  contentType) ;

static inline ::System::Xml::Schema::ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isOpen, bool  isEmptiable) ;

/// @brief Method .ctor addr 0x28aed58 size 0x40 virtual false final false
inline void _ctor(::System::Xml::Schema::XmlSchemaContentType  contentType, bool  isOpen, bool  isEmptiable) ;

/// @brief Method get_ContentType addr 0x28aed98 size 0x8 virtual false final false
inline ::System::Xml::Schema::XmlSchemaContentType get_ContentType() ;

/// @brief Method get_IsOpen addr 0x28aeda0 size 0x24 virtual false final false
inline bool get_IsOpen() ;

// Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContentValidator(ContentValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContentValidator(ContentValidator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ContentValidator()  = default;
public:


// Fields

// Static field Empty

// Static field TextOnly

// Static field Mixed

// Static field Any


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ContentValidator, 0x18>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ContentValidator*, "System.Xml.Schema", "ContentValidator");
