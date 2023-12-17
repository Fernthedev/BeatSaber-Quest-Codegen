#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FiniteFields)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::Field {
class IPolynomialExtensionField;
}
namespace Org::BouncyCastle::Math::Field {
class IFiniteField;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Field {
class FiniteFields;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Field::FiniteFields);
// Type: Org.BouncyCastle.Math.Field::FiniteFields
namespace Org::BouncyCastle::Math::Field {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1580))
// CS Name: ::Org.BouncyCastle.Math.Field::FiniteFields*
class CORDL_TYPE FiniteFields : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_GF_2(::Org::BouncyCastle::Math::Field::IFiniteField*  value) ;

static inline ::Org::BouncyCastle::Math::Field::IFiniteField* getStaticF_GF_2() ;

static inline void setStaticF_GF_3(::Org::BouncyCastle::Math::Field::IFiniteField*  value) ;

static inline ::Org::BouncyCastle::Math::Field::IFiniteField* getStaticF_GF_3() ;

/// @brief Method GetBinaryExtensionField addr 0x105b0c4 size 0x194 virtual false final false
static inline ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* GetBinaryExtensionField(::ArrayW<int32_t,::Array<int32_t>*>  exponents) ;

/// @brief Method GetPrimeField addr 0x105b2fc size 0x180 virtual false final false
static inline ::Org::BouncyCastle::Math::Field::IFiniteField* GetPrimeField(::Org::BouncyCastle::Math::BigInteger*  characteristic) ;

static inline ::Org::BouncyCastle::Math::Field::FiniteFields* New_ctor() ;

/// @brief Method .ctor addr 0x105b59c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FiniteFields(FiniteFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FiniteFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FiniteFields(FiniteFields const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FiniteFields()  = default;
public:


// Fields

// Static field GF_2

// Static field GF_3


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Field::FiniteFields, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::Field
NEED_NO_BOX(::Org::BouncyCastle::Math::Field::FiniteFields);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Field::FiniteFields*, "Org.BouncyCastle.Math.Field", "FiniteFields");
