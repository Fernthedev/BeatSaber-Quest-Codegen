#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
CORDL_MODULE_EXPORT(AbstractFpFieldElement)
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class AbstractFpFieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement);
// Type: Org.BouncyCastle.Math.EC::AbstractFpFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1369))
// CS Name: ::Org.BouncyCastle.Math.EC::AbstractFpFieldElement*
class CORDL_TYPE AbstractFpFieldElement : public ::Org::BouncyCastle::Math::EC::ECFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::Org::BouncyCastle::Math::EC::ECFieldElement)]{};

static inline ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement* New_ctor() ;

/// @brief Method .ctor addr 0xfce874 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpFieldElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbstractFpFieldElement(AbstractFpFieldElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbstractFpFieldElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbstractFpFieldElement(AbstractFpFieldElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AbstractFpFieldElement()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpFieldElement*, "Org.BouncyCastle.Math.EC", "AbstractFpFieldElement");
