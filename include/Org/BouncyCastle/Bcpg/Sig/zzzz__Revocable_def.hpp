#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Revocable)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class Revocable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::Revocable);
// Type: Org.BouncyCastle.Bcpg.Sig::Revocable
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(541))
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::Revocable*
class CORDL_TYPE Revocable : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Bcpg::SignatureSubpacket)]{};

/// @brief Method BooleanToByteArray addr 0x11c86b0 size 0x6c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> BooleanToByteArray(bool  value) ;

static inline ::Org::BouncyCastle::Bcpg::Sig::Revocable* New_ctor(bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x11c871c size 0x48 virtual false final false
inline void _ctor(bool  critical, bool  isLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::Sig::Revocable* New_ctor(bool  critical, bool  isRevocable) ;

/// @brief Method .ctor addr 0x11c8764 size 0x4c virtual false final false
inline void _ctor(bool  critical, bool  isRevocable) ;

/// @brief Method IsRevocable addr 0x11c87b0 size 0x30 virtual false final false
inline bool IsRevocable() ;

// Ctor Parameters [CppParam { name: "", ty: "Revocable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Revocable(Revocable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Revocable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Revocable(Revocable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Revocable()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::Revocable, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::Revocable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::Revocable*, "Org.BouncyCastle.Bcpg.Sig", "Revocable");
