#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultAuthenticatedAttributeTableGenerator)
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultAuthenticatedAttributeTableGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator);
// Type: Org.BouncyCastle.Cms::DefaultAuthenticatedAttributeTableGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(666))
// CS Name: ::Org.BouncyCastle.Cms::DefaultAuthenticatedAttributeTableGenerator*
class CORDL_TYPE DefaultAuthenticatedAttributeTableGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field table offset 0x10
 __declspec(property(get=__get_table, put=__set_table)) ::System::Collections::IDictionary*  table;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr operator  ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept;

constexpr void __set_table(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_table() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_table() const;

static inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x1200298 size 0x68 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributeTable) ;

/// @brief Method .ctor addr 0x1200300 size 0x80 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable*  attributeTable) ;

/// @brief Method CreateStandardAttributeTable addr 0x1200380 size 0x528 virtual true final false
inline ::System::Collections::IDictionary* CreateStandardAttributeTable(::System::Collections::IDictionary*  parameters) ;

/// @brief Method GetAttributes addr 0x12008a8 size 0x8c virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary*  parameters) ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultAuthenticatedAttributeTableGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultAuthenticatedAttributeTableGenerator(DefaultAuthenticatedAttributeTableGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultAuthenticatedAttributeTableGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultAuthenticatedAttributeTableGenerator(DefaultAuthenticatedAttributeTableGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultAuthenticatedAttributeTableGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*, "Org.BouncyCastle.Cms", "DefaultAuthenticatedAttributeTableGenerator");
