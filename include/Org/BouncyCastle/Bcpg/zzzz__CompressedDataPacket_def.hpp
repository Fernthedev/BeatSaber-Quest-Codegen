#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
CORDL_MODULE_EXPORT(CompressedDataPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class CompressedDataPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::CompressedDataPacket);
// Type: Org.BouncyCastle.Bcpg::CompressedDataPacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(558))
// CS Name: ::Org.BouncyCastle.Bcpg::CompressedDataPacket*
class CORDL_TYPE CompressedDataPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Bcpg::InputStreamPacket)]{};

/// @brief Field algorithm offset 0x18
 __declspec(property(get=__get_algorithm, put=__set_algorithm)) ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag  algorithm;

 __declspec(property(get=get_Algorithm)) ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag  Algorithm;

constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag  value) ;

constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& __get_algorithm() ;

constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& __get_algorithm() const;

static inline ::Org::BouncyCastle::Bcpg::CompressedDataPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor addr 0x11cea90 size 0x48 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method get_Algorithm addr 0x11d0414 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag get_Algorithm() ;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompressedDataPacket(CompressedDataPacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompressedDataPacket(CompressedDataPacket const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CompressedDataPacket()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::CompressedDataPacket, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::CompressedDataPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::CompressedDataPacket*, "Org.BouncyCastle.Bcpg", "CompressedDataPacket");
