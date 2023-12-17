#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrustPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class TrustPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::TrustPacket);
// Type: Org.BouncyCastle.Bcpg::TrustPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(596))
// CS Name: ::Org.BouncyCastle.Bcpg::TrustPacket*
class CORDL_TYPE TrustPacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Bcpg::ContainedPacket)]{};

/// @brief Field levelAndTrustAmount offset 0x10
 __declspec(property(get=__get_levelAndTrustAmount, put=__set_levelAndTrustAmount)) ::ArrayW<uint8_t,::Array<uint8_t>*>  levelAndTrustAmount;

constexpr void __set_levelAndTrustAmount(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_levelAndTrustAmount() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_levelAndTrustAmount() const;

static inline ::Org::BouncyCastle::Bcpg::TrustPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor addr 0x11ced58 size 0xdc virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

static inline ::Org::BouncyCastle::Bcpg::TrustPacket* New_ctor(int32_t  trustCode) ;

/// @brief Method .ctor addr 0x11d4dc4 size 0x80 virtual false final false
inline void _ctor(int32_t  trustCode) ;

/// @brief Method GetLevelAndTrustAmount addr 0x11d4e44 size 0x78 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetLevelAndTrustAmount() ;

/// @brief Method Encode addr 0x11d4ebc size 0x28 virtual true final false
inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut) ;

// Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrustPacket(TrustPacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrustPacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrustPacket(TrustPacket const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrustPacket()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::TrustPacket, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::TrustPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::TrustPacket*, "Org.BouncyCastle.Bcpg", "TrustPacket");
