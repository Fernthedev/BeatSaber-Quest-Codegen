#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHKekGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class ECDHKekGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator);
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::ECDHKekGenerator
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(726))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Kdf::ECDHKekGenerator*
class CORDL_TYPE ECDHKekGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field kdf offset 0x10
 __declspec(property(get=__get_kdf, put=__set_kdf)) ::Org::BouncyCastle::Crypto::IDerivationFunction*  kdf;

/// @brief Field algorithm offset 0x18
 __declspec(property(get=__get_algorithm, put=__set_algorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  algorithm;

/// @brief Field keySize offset 0x20
 __declspec(property(get=__get_keySize, put=__set_keySize)) int32_t  keySize;

/// @brief Field z offset 0x28
 __declspec(property(get=__get_z, put=__set_z)) ::ArrayW<uint8_t,::Array<uint8_t>*>  z;

 __declspec(property(get=get_Digest)) ::Org::BouncyCastle::Crypto::IDigest*  Digest;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

constexpr void __set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* __get_kdf() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> __get_kdf() const;

constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_algorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_algorithm() const;

constexpr void __set_keySize(int32_t  value) ;

constexpr int32_t& __get_keySize() ;

constexpr int32_t const& __get_keySize() const;

constexpr void __set_z(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_z() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_z() const;

static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method .ctor addr 0x1217574 size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method Init addr 0x12175f0 size 0x98 virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters*  param) ;

/// @brief Method get_Digest addr 0x1217688 size 0xa4 virtual true final false
inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest() ;

/// @brief Method GenerateBytes addr 0x121772c size 0x318 virtual true final false
inline int32_t GenerateBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "ECDHKekGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECDHKekGenerator(ECDHKekGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECDHKekGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECDHKekGenerator(ECDHKekGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECDHKekGenerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator*, "Org.BouncyCastle.Crypto.Agreement.Kdf", "ECDHKekGenerator");
