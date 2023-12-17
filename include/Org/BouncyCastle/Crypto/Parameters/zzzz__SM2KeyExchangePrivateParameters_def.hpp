#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SM2KeyExchangePrivateParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class SM2KeyExchangePrivateParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePrivateParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1084))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::SM2KeyExchangePrivateParameters*
class CORDL_TYPE SM2KeyExchangePrivateParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field mInitiator offset 0x10
 __declspec(property(get=__get_mInitiator, put=__set_mInitiator)) bool  mInitiator;

/// @brief Field mStaticPrivateKey offset 0x18
 __declspec(property(get=__get_mStaticPrivateKey, put=__set_mStaticPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  mStaticPrivateKey;

/// @brief Field mStaticPublicPoint offset 0x20
 __declspec(property(get=__get_mStaticPublicPoint, put=__set_mStaticPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint*  mStaticPublicPoint;

/// @brief Field mEphemeralPrivateKey offset 0x28
 __declspec(property(get=__get_mEphemeralPrivateKey, put=__set_mEphemeralPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  mEphemeralPrivateKey;

/// @brief Field mEphemeralPublicPoint offset 0x30
 __declspec(property(get=__get_mEphemeralPublicPoint, put=__set_mEphemeralPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint*  mEphemeralPublicPoint;

 __declspec(property(get=get_IsInitiator)) bool  IsInitiator;

 __declspec(property(get=get_StaticPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  StaticPrivateKey;

 __declspec(property(get=get_StaticPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint*  StaticPublicPoint;

 __declspec(property(get=get_EphemeralPrivateKey)) ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  EphemeralPrivateKey;

 __declspec(property(get=get_EphemeralPublicPoint)) ::Org::BouncyCastle::Math::EC::ECPoint*  EphemeralPublicPoint;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

constexpr void __set_mInitiator(bool  value) ;

constexpr bool& __get_mInitiator() ;

constexpr bool const& __get_mInitiator() const;

constexpr void __set_mStaticPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* __get_mStaticPrivateKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> __get_mStaticPrivateKey() const;

constexpr void __set_mStaticPublicPoint(::Org::BouncyCastle::Math::EC::ECPoint*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint* __get_mStaticPublicPoint() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> __get_mStaticPublicPoint() const;

constexpr void __set_mEphemeralPrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* __get_mEphemeralPrivateKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> __get_mEphemeralPrivateKey() const;

constexpr void __set_mEphemeralPublicPoint(::Org::BouncyCastle::Math::EC::ECPoint*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint* __get_mEphemeralPublicPoint() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> __get_mEphemeralPublicPoint() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters* New_ctor(bool  initiator, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  staticPrivateKey, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  ephemeralPrivateKey) ;

/// @brief Method .ctor addr 0xf3b494 size 0x274 virtual false final false
inline void _ctor(bool  initiator, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  staticPrivateKey, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*  ephemeralPrivateKey) ;

/// @brief Method get_IsInitiator addr 0xf3b708 size 0x8 virtual true final false
inline bool get_IsInitiator() ;

/// @brief Method get_StaticPrivateKey addr 0xf3b710 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_StaticPrivateKey() ;

/// @brief Method get_StaticPublicPoint addr 0xf3b718 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_StaticPublicPoint() ;

/// @brief Method get_EphemeralPrivateKey addr 0xf3b720 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* get_EphemeralPrivateKey() ;

/// @brief Method get_EphemeralPublicPoint addr 0xf3b728 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_EphemeralPublicPoint() ;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SM2KeyExchangePrivateParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SM2KeyExchangePrivateParameters(SM2KeyExchangePrivateParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SM2KeyExchangePrivateParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters, 0x38>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePrivateParameters*, "Org.BouncyCastle.Crypto.Parameters", "SM2KeyExchangePrivateParameters");
