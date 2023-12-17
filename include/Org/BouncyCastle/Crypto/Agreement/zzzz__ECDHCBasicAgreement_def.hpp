#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHCBasicAgreement)
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class ECDHCBasicAgreement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::ECDHCBasicAgreement);
// Type: Org.BouncyCastle.Crypto.Agreement::ECDHCBasicAgreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(737))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::ECDHCBasicAgreement*
class CORDL_TYPE ECDHCBasicAgreement : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field privKey offset 0x10
 __declspec(property(get=__get_privKey, put=__set_privKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  privKey;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr operator  ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept;

constexpr void __set_privKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* __get_privKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> __get_privKey() const;

/// @brief Method Init addr 0x121a80c size 0xec virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method GetFieldSize addr 0x121a8f8 size 0x48 virtual true final false
inline int32_t GetFieldSize() ;

/// @brief Method CalculateAgreement addr 0x121a940 size 0x1f4 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters*  pubKey) ;

static inline ::Org::BouncyCastle::Crypto::Agreement::ECDHCBasicAgreement* New_ctor() ;

/// @brief Method .ctor addr 0x121ab34 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ECDHCBasicAgreement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ECDHCBasicAgreement(ECDHCBasicAgreement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ECDHCBasicAgreement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ECDHCBasicAgreement(ECDHCBasicAgreement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ECDHCBasicAgreement()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::ECDHCBasicAgreement, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::ECDHCBasicAgreement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::ECDHCBasicAgreement*, "Org.BouncyCastle.Crypto.Agreement", "ECDHCBasicAgreement");
