#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HkdfBytesGenerator)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class HkdfBytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::HkdfBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(906))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::HkdfBytesGenerator*
class CORDL_TYPE HkdfBytesGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field hMacHash offset 0x10
 __declspec(property(get=__get_hMacHash, put=__set_hMacHash)) ::Org::BouncyCastle::Crypto::Macs::HMac*  hMacHash;

/// @brief Field hashLen offset 0x18
 __declspec(property(get=__get_hashLen, put=__set_hashLen)) int32_t  hashLen;

/// @brief Field info offset 0x20
 __declspec(property(get=__get_info, put=__set_info)) ::ArrayW<uint8_t,::Array<uint8_t>*>  info;

/// @brief Field currentT offset 0x28
 __declspec(property(get=__get_currentT, put=__set_currentT)) ::ArrayW<uint8_t,::Array<uint8_t>*>  currentT;

/// @brief Field generatedBytes offset 0x30
 __declspec(property(get=__get_generatedBytes, put=__set_generatedBytes)) int32_t  generatedBytes;

 __declspec(property(get=get_Digest)) ::Org::BouncyCastle::Crypto::IDigest*  Digest;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

constexpr void __set_hMacHash(::Org::BouncyCastle::Crypto::Macs::HMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Macs::HMac* __get_hMacHash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Macs::HMac*> __get_hMacHash() const;

constexpr void __set_hashLen(int32_t  value) ;

constexpr int32_t& __get_hashLen() ;

constexpr int32_t const& __get_hashLen() const;

constexpr void __set_info(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_info() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_info() const;

constexpr void __set_currentT(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_currentT() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_currentT() const;

constexpr void __set_generatedBytes(int32_t  value) ;

constexpr int32_t& __get_generatedBytes() ;

constexpr int32_t const& __get_generatedBytes() const;

static inline ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest*  hash) ;

/// @brief Method .ctor addr 0xefcbcc size 0xf4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IDigest*  hash) ;

/// @brief Method Init addr 0xefccc0 size 0x1d8 virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters*  parameters) ;

/// @brief Method Extract addr 0xefce98 size 0x170 virtual false final false
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Extract(::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  ikm) ;

/// @brief Method ExpandNext addr 0xefd008 size 0x104 virtual false final false
inline void ExpandNext() ;

/// @brief Method get_Digest addr 0xefd10c size 0x20 virtual true final false
inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest() ;

/// @brief Method GenerateBytes addr 0xefd12c size 0x1bc virtual true final false
inline int32_t GenerateBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "HkdfBytesGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HkdfBytesGenerator(HkdfBytesGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HkdfBytesGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HkdfBytesGenerator(HkdfBytesGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HkdfBytesGenerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "HkdfBytesGenerator");
