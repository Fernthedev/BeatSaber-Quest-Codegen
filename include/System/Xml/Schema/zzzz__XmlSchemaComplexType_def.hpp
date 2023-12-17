#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaComplexType)
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class ContentValidator;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaComplexType);
// Type: System.Xml.Schema::XmlSchemaComplexType
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11742))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11720))
// CS Name: ::System.Xml.Schema::XmlSchemaComplexType*
class CORDL_TYPE XmlSchemaComplexType : public ::System::Xml::Schema::XmlSchemaType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Xml::Schema::XmlSchemaType)]{};

/// @brief Field block offset 0x3c
 __declspec(property(get=__get_block, put=__set_block)) ::System::Xml::Schema::XmlSchemaDerivationMethod  block;

/// @brief Field contentTypeParticle offset 0x40
 __declspec(property(get=__get_contentTypeParticle, put=__set_contentTypeParticle)) ::System::Xml::Schema::XmlSchemaParticle*  contentTypeParticle;

/// @brief Field attributeWildcard offset 0x48
 __declspec(property(get=__get_attributeWildcard, put=__set_attributeWildcard)) ::System::Xml::Schema::XmlSchemaAnyAttribute*  attributeWildcard;

/// @brief Field pvFlags offset 0x50
 __declspec(property(get=__get_pvFlags, put=__set_pvFlags)) uint8_t  pvFlags;

 __declspec(property(put=set_IsMixed)) bool  IsMixed;

 __declspec(property(get=get_ContentTypeParticle)) ::System::Xml::Schema::XmlSchemaParticle*  ContentTypeParticle;

constexpr void __set_block(::System::Xml::Schema::XmlSchemaDerivationMethod  value) ;

constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __get_block() ;

constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __get_block() const;

constexpr void __set_contentTypeParticle(::System::Xml::Schema::XmlSchemaParticle*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaParticle* __get_contentTypeParticle() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaParticle*> __get_contentTypeParticle() const;

constexpr void __set_attributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute*  value) ;

constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* __get_attributeWildcard() ;

constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnyAttribute*> __get_attributeWildcard() const;

static inline void setStaticF_anyTypeLax(::System::Xml::Schema::XmlSchemaComplexType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_anyTypeLax() ;

static inline void setStaticF_anyTypeSkip(::System::Xml::Schema::XmlSchemaComplexType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_anyTypeSkip() ;

static inline void setStaticF_untypedAnyType(::System::Xml::Schema::XmlSchemaComplexType*  value) ;

static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_untypedAnyType() ;

constexpr void __set_pvFlags(uint8_t  value) ;

constexpr uint8_t& __get_pvFlags() ;

constexpr uint8_t const& __get_pvFlags() const;

/// @brief Method CreateAnyType addr 0x28c74b0 size 0x2e4 virtual false final false
static inline ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(::System::Xml::Schema::XmlSchemaContentProcessing  processContents) ;

static inline ::System::Xml::Schema::XmlSchemaComplexType* New_ctor() ;

/// @brief Method .ctor addr 0x28c7794 size 0x6c virtual false final false
inline void _ctor() ;

/// @brief Method get_AnyType addr 0x28c7cf0 size 0x58 virtual false final false
static inline ::System::Xml::Schema::XmlSchemaComplexType* get_AnyType() ;

/// @brief Method get_AnyTypeContentValidator addr 0x28c7860 size 0x70 virtual false final false
static inline ::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator() ;

/// @brief Method set_IsMixed addr 0x28c7d48 size 0x1c virtual true final false
inline void set_IsMixed(bool  value) ;

/// @brief Method get_ContentTypeParticle addr 0x28c7d64 size 0x8 virtual false final false
inline ::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle() ;

/// @brief Method SetContentTypeParticle addr 0x28c7d6c size 0x8 virtual false final false
inline void SetContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle*  value) ;

/// @brief Method SetAttributeWildcard addr 0x28c7d74 size 0x8 virtual false final false
inline void SetAttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlSchemaComplexType(XmlSchemaComplexType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlSchemaComplexType(XmlSchemaComplexType const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XmlSchemaComplexType()  = default;
public:


// Fields

// Static field anyTypeLax

// Static field anyTypeSkip

// Static field untypedAnyType


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaComplexType, 0x58>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexType*, "System.Xml.Schema", "XmlSchemaComplexType");
