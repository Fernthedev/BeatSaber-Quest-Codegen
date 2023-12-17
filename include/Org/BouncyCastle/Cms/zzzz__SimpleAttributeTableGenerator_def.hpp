#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimpleAttributeTableGenerator)
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SimpleAttributeTableGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator);
// Type: Org.BouncyCastle.Cms::SimpleAttributeTableGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(693))
// CS Name: ::Org.BouncyCastle.Cms::SimpleAttributeTableGenerator*
class CORDL_TYPE SimpleAttributeTableGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field attributes offset 0x10
 __declspec(property(get=__get_attributes, put=__set_attributes)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributes;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr operator  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept;

constexpr void __set_attributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* __get_attributes() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> __get_attributes() const;

static inline ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributes) ;

/// @brief Method .ctor addr 0x120dd54 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributes) ;

/// @brief Method GetAttributes addr 0x120dd7c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary*  parameters) ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAttributeTableGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleAttributeTableGenerator(SimpleAttributeTableGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAttributeTableGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleAttributeTableGenerator(SimpleAttributeTableGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleAttributeTableGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*, "Org.BouncyCastle.Cms", "SimpleAttributeTableGenerator");
