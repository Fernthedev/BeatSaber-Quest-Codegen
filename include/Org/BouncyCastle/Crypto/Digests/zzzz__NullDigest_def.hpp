#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class NullDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::NullDigest);
// Type: Org.BouncyCastle.Crypto.Digests::NullDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(761))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::NullDigest*
class CORDL_TYPE NullDigest : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field bOut offset 0x10
 __declspec(property(get=__get_bOut, put=__set_bOut)) ::System::IO::MemoryStream*  bOut;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

constexpr void __set_bOut(::System::IO::MemoryStream*  value) ;

constexpr ::System::IO::MemoryStream* __get_bOut() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> __get_bOut() const;

/// @brief Method get_AlgorithmName addr 0x1229d6c size 0x40 virtual true final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetByteLength addr 0x1229dac size 0x8 virtual true final true
inline int32_t GetByteLength() ;

/// @brief Method GetDigestSize addr 0x1229db4 size 0x24 virtual true final true
inline int32_t GetDigestSize() ;

/// @brief Method Update addr 0x1229dd8 size 0x24 virtual true final true
inline void Update(uint8_t  b) ;

/// @brief Method BlockUpdate addr 0x1229dfc size 0x24 virtual true final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  inBytes, int32_t  inOff, int32_t  len) ;

/// @brief Method DoFinal addr 0x1229e20 size 0xc4 virtual true final true
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method Reset addr 0x1229ee4 size 0x28 virtual true final true
inline void Reset() ;

static inline ::Org::BouncyCastle::Crypto::Digests::NullDigest* New_ctor() ;

/// @brief Method .ctor addr 0x1229f0c size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NullDigest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullDigest(NullDigest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullDigest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullDigest(NullDigest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NullDigest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::NullDigest, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::NullDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::NullDigest*, "Org.BouncyCastle.Crypto.Digests", "NullDigest");
