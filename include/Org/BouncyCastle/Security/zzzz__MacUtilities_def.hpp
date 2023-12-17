#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacUtilities)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class MacUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::MacUtilities);
// Type: Org.BouncyCastle.Security::MacUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1751))
// CS Name: ::Org.BouncyCastle.Security::MacUtilities*
class CORDL_TYPE MacUtilities : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_algorithms(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_algorithms() ;

static inline ::Org::BouncyCastle::Security::MacUtilities* New_ctor() ;

/// @brief Method .ctor addr 0x112eeb4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method GetMac addr 0x1130acc size 0x60 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IMac* GetMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  id) ;

/// @brief Method GetMac addr 0x1130b2c size 0xb88 virtual false final false
static inline ::Org::BouncyCastle::Crypto::IMac* GetMac(::StringW  algorithm) ;

/// @brief Method GetAlgorithmName addr 0x11316b4 size 0x108 virtual false final false
static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

/// @brief Method CalculateMac addr 0x11317bc size 0x158 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CalculateMac(::StringW  algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters*  cp, ::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

/// @brief Method DoFinal addr 0x1131914 size 0x134 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal(::Org::BouncyCastle::Crypto::IMac*  mac) ;

/// @brief Method DoFinal addr 0x1131a48 size 0xec virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoFinal(::Org::BouncyCastle::Crypto::IMac*  mac, ::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

// Ctor Parameters [CppParam { name: "", ty: "MacUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MacUtilities(MacUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MacUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MacUtilities(MacUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MacUtilities()  = default;
public:


// Fields

// Static field algorithms


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::MacUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::MacUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::MacUtilities*, "Org.BouncyCastle.Security", "MacUtilities");
