#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacAlgorithm)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class MacAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::MacAlgorithm);
// Type: Org.BouncyCastle.Crypto.Tls::MacAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1253))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::MacAlgorithm*
class CORDL_TYPE MacAlgorithm : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field cls_null offset 0x0
static constexpr int32_t  cls_null{static_cast<int32_t>(0x0)};

/// @brief Field md5 offset 0x0
static constexpr int32_t  md5{static_cast<int32_t>(0x1)};

/// @brief Field sha offset 0x0
static constexpr int32_t  sha{static_cast<int32_t>(0x2)};

/// @brief Field hmac_md5 offset 0x0
static constexpr int32_t  hmac_md5{static_cast<int32_t>(0x1)};

/// @brief Field hmac_sha1 offset 0x0
static constexpr int32_t  hmac_sha1{static_cast<int32_t>(0x2)};

/// @brief Field hmac_sha256 offset 0x0
static constexpr int32_t  hmac_sha256{static_cast<int32_t>(0x3)};

/// @brief Field hmac_sha384 offset 0x0
static constexpr int32_t  hmac_sha384{static_cast<int32_t>(0x4)};

/// @brief Field hmac_sha512 offset 0x0
static constexpr int32_t  hmac_sha512{static_cast<int32_t>(0x5)};

static inline ::Org::BouncyCastle::Crypto::Tls::MacAlgorithm* New_ctor() ;

/// @brief Method .ctor addr 0xf91eac size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MacAlgorithm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacAlgorithm(MacAlgorithm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacAlgorithm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacAlgorithm(MacAlgorithm const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MacAlgorithm()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::MacAlgorithm, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::MacAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::MacAlgorithm*, "Org.BouncyCastle.Crypto.Tls", "MacAlgorithm");
