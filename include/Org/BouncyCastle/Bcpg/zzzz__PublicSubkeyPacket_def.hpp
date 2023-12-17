#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
CORDL_MODULE_EXPORT(PublicSubkeyPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class PublicSubkeyPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::PublicSubkeyPacket);
// Type: Org.BouncyCastle.Bcpg::PublicSubkeyPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(583))
// CS Name: ::Org.BouncyCastle.Bcpg::PublicSubkeyPacket*
class CORDL_TYPE PublicSubkeyPacket : public ::Org::BouncyCastle::Bcpg::PublicKeyPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Bcpg::PublicKeyPacket)]{};

static inline ::Org::BouncyCastle::Bcpg::PublicSubkeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor addr 0x11cf194 size 0x4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

static inline ::Org::BouncyCastle::Bcpg::PublicSubkeyPacket* New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  algorithm, ::System::DateTime  time, ::Org::BouncyCastle::Bcpg::IBcpgKey*  key) ;

/// @brief Method .ctor addr 0x11d2864 size 0x4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag  algorithm, ::System::DateTime  time, ::Org::BouncyCastle::Bcpg::IBcpgKey*  key) ;

/// @brief Method Encode addr 0x11d2868 size 0x38 virtual true final false
inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut) ;

// Ctor Parameters [CppParam { name: "", ty: "PublicSubkeyPacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PublicSubkeyPacket(PublicSubkeyPacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PublicSubkeyPacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PublicSubkeyPacket(PublicSubkeyPacket const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PublicSubkeyPacket()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::PublicSubkeyPacket, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::PublicSubkeyPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::PublicSubkeyPacket*, "Org.BouncyCastle.Bcpg", "PublicSubkeyPacket");
