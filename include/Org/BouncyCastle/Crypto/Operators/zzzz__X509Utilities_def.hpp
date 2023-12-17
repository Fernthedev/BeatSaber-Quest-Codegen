#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Utilities)
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class X509Utilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::X509Utilities);
// Type: Org.BouncyCastle.Crypto.Operators::X509Utilities
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(990))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::X509Utilities*
class CORDL_TYPE X509Utilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_derNull(::Org::BouncyCastle::Asn1::Asn1Null*  value) ;

static inline ::Org::BouncyCastle::Asn1::Asn1Null* getStaticF_derNull() ;

static inline void setStaticF_algorithms(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_algorithms() ;

static inline void setStaticF_exParams(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_exParams() ;

static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams() ;

/// @brief Method GetDigestAlgName addr 0xf2be3c size 0x370 virtual false final false
static inline ::StringW GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  digestAlgOID) ;

/// @brief Method GetSignatureName addr 0xf2c1ac size 0x298 virtual false final false
static inline ::StringW GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  sigAlgId) ;

/// @brief Method CreatePssParams addr 0xf2bd10 size 0x12c virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  hashAlgId, int32_t  saltSize) ;

/// @brief Method GetAlgorithmOid addr 0xf2c444 size 0x20c virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetAlgorithmOid(::StringW  algorithmName) ;

/// @brief Method GetSigAlgID addr 0xf2c650 size 0x330 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetSigAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigOid, ::StringW  algorithmName) ;

/// @brief Method GetAlgNames addr 0xf2c980 size 0x10c virtual false final false
static inline ::System::Collections::IEnumerable* GetAlgNames() ;

static inline ::Org::BouncyCastle::Crypto::Operators::X509Utilities* New_ctor() ;

/// @brief Method .ctor addr 0xf2ca8c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X509Utilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Utilities(X509Utilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Utilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Utilities(X509Utilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509Utilities()  = default;
public:


// Fields

// Static field derNull

// Static field algorithms

// Static field exParams

// Static field noParams


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::X509Utilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::X509Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::X509Utilities*, "Org.BouncyCastle.Crypto.Operators", "X509Utilities");
