#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MqvPublicParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class MqvPublicParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::MqvPublicParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1067))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::MqvPublicParameters*
class CORDL_TYPE MqvPublicParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field staticPublicKey offset 0x10
 __declspec(property(get=__get_staticPublicKey, put=__set_staticPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  staticPublicKey;

/// @brief Field ephemeralPublicKey offset 0x18
 __declspec(property(get=__get_ephemeralPublicKey, put=__set_ephemeralPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  ephemeralPublicKey;

 __declspec(property(get=get_StaticPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  StaticPublicKey;

 __declspec(property(get=get_EphemeralPublicKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  EphemeralPublicKey;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

constexpr void __set_staticPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* __get_staticPublicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> __get_staticPublicKey() const;

constexpr void __set_ephemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* __get_ephemeralPublicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> __get_ephemeralPublicKey() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  staticPublicKey, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  ephemeralPublicKey) ;

/// @brief Method .ctor addr 0xf38b68 size 0xfc virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  staticPublicKey, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*  ephemeralPublicKey) ;

/// @brief Method get_StaticPublicKey addr 0xf38c64 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_StaticPublicKey() ;

/// @brief Method get_EphemeralPublicKey addr 0xf38c6c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* get_EphemeralPublicKey() ;

// Ctor Parameters [CppParam { name: "", ty: "MqvPublicParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MqvPublicParameters(MqvPublicParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MqvPublicParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MqvPublicParameters(MqvPublicParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MqvPublicParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::MqvPublicParameters*, "Org.BouncyCastle.Crypto.Parameters", "MqvPublicParameters");
