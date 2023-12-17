#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GMac)
namespace Org::BouncyCastle::Crypto::Modes {
class GcmBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class GMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::GMac);
// Type: Org.BouncyCastle.Crypto.Macs::GMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(941))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::GMac*
class CORDL_TYPE GMac : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field cipher offset 0x10
 __declspec(property(get=__get_cipher, put=__set_cipher)) ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*  cipher;

/// @brief Field macSizeBits offset 0x18
 __declspec(property(get=__get_macSizeBits, put=__set_macSizeBits)) int32_t  macSizeBits;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr operator  ::Org::BouncyCastle::Crypto::IMac*() noexcept;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* __get_cipher() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*> __get_cipher() const;

constexpr void __set_macSizeBits(int32_t  value) ;

constexpr int32_t& __get_macSizeBits() ;

constexpr int32_t const& __get_macSizeBits() const;

static inline ::Org::BouncyCastle::Crypto::Macs::GMac* New_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*  cipher) ;

/// @brief Method .ctor addr 0xf0cba4 size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*  cipher) ;

static inline ::Org::BouncyCastle::Crypto::Macs::GMac* New_ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*  cipher, int32_t  macSizeBits) ;

/// @brief Method .ctor addr 0xf0cbd4 size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher*  cipher, int32_t  macSizeBits) ;

/// @brief Method Init addr 0xf0cc04 size 0x188 virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xf0cd8c size 0xc8 virtual true final true
inline ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xf0ce54 size 0x18 virtual true final true
inline int32_t GetMacSize() ;

/// @brief Method Update addr 0xf0ce6c size 0x24 virtual true final true
inline void Update(uint8_t  input) ;

/// @brief Method BlockUpdate addr 0xf0ce90 size 0x24 virtual true final true
inline void BlockUpdate(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, int32_t  len) ;

/// @brief Method DoFinal addr 0xf0ceb4 size 0xf8 virtual true final true
inline int32_t DoFinal(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xf0cfac size 0x24 virtual true final true
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "GMac", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GMac(GMac && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GMac", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GMac(GMac const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GMac()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::GMac, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::GMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::GMac*, "Org.BouncyCastle.Crypto.Macs", "GMac");
