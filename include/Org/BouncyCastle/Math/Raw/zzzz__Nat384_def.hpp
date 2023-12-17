#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat384)
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat384;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat384);
// Type: Org.BouncyCastle.Math.Raw::Nat384
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1597))
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat384*
class CORDL_TYPE Nat384 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Mul addr 0x108e548 size 0x16c virtual false final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Square addr 0x108e6b4 size 0x114 virtual false final false
static inline void Square(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

static inline ::Org::BouncyCastle::Math::Raw::Nat384* New_ctor() ;

/// @brief Method .ctor addr 0x108e7c8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Nat384", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Nat384(Nat384 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Nat384", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Nat384(Nat384 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Nat384()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat384, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat384);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat384*, "Org.BouncyCastle.Math.Raw", "Nat384");
