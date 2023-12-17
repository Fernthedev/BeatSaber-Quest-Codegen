#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__AeadParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CcmParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class CcmParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::CcmParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::CcmParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1014))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::CcmParameters*
class CORDL_TYPE CcmParameters : public ::Org::BouncyCastle::Crypto::Parameters::AeadParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Crypto::Parameters::AeadParameters)]{};

static inline ::Org::BouncyCastle::Crypto::Parameters::CcmParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, int32_t  macSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce, ::ArrayW<uint8_t,::Array<uint8_t>*>  associatedText) ;

/// @brief Method .ctor addr 0xf2f660 size 0x44 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, int32_t  macSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce, ::ArrayW<uint8_t,::Array<uint8_t>*>  associatedText) ;

// Ctor Parameters [CppParam { name: "", ty: "CcmParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CcmParameters(CcmParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CcmParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CcmParameters(CcmParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CcmParameters()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::CcmParameters, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::CcmParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::CcmParameters*, "Org.BouncyCastle.Crypto.Parameters", "CcmParameters");
