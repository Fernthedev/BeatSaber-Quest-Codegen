#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs8EncryptedPrivateKeyInfoBuilder)
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfoBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder);
// Type: Org.BouncyCastle.Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1704))
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*
class CORDL_TYPE Pkcs8EncryptedPrivateKeyInfoBuilder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field privateKeyInfo offset 0x10
 __declspec(property(get=__get_privateKeyInfo, put=__set_privateKeyInfo)) ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*  privateKeyInfo;

constexpr void __set_privateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* __get_privateKeyInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*> __get_privateKeyInfo() const;

static inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  privateKeyInfo) ;

/// @brief Method .ctor addr 0x10e6dd0 size 0x38 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  privateKeyInfo) ;

static inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*  privateKeyInfo) ;

/// @brief Method .ctor addr 0x10e6e08 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*  privateKeyInfo) ;

/// @brief Method Build addr 0x10e6e30 size 0x400 virtual false final false
inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* Build(::Org::BouncyCastle::Crypto::ICipherBuilder*  encryptor) ;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfoBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Pkcs8EncryptedPrivateKeyInfoBuilder(Pkcs8EncryptedPrivateKeyInfoBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfoBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Pkcs8EncryptedPrivateKeyInfoBuilder(Pkcs8EncryptedPrivateKeyInfoBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Pkcs8EncryptedPrivateKeyInfoBuilder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*, "Org.BouncyCastle.Pkcs", "Pkcs8EncryptedPrivateKeyInfoBuilder");
