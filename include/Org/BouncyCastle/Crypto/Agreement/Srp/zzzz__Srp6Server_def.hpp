#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Srp6Server)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
class Srp6Server;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server);
// Type: Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Server
namespace Org::BouncyCastle::Crypto::Agreement::Srp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(728))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Srp::Srp6Server*
class CORDL_TYPE Srp6Server : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::System::Object)]{};

/// @brief Field N offset 0x10
 __declspec(property(get=__get_N, put=__set_N)) ::Org::BouncyCastle::Math::BigInteger*  N;

/// @brief Field g offset 0x18
 __declspec(property(get=__get_g, put=__set_g)) ::Org::BouncyCastle::Math::BigInteger*  g;

/// @brief Field v offset 0x20
 __declspec(property(get=__get_v, put=__set_v)) ::Org::BouncyCastle::Math::BigInteger*  v;

/// @brief Field random offset 0x28
 __declspec(property(get=__get_random, put=__set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

/// @brief Field digest offset 0x30
 __declspec(property(get=__get_digest, put=__set_digest)) ::Org::BouncyCastle::Crypto::IDigest*  digest;

/// @brief Field A offset 0x38
 __declspec(property(get=__get_A, put=__set_A)) ::Org::BouncyCastle::Math::BigInteger*  A;

/// @brief Field privB offset 0x40
 __declspec(property(get=__get_privB, put=__set_privB)) ::Org::BouncyCastle::Math::BigInteger*  privB;

/// @brief Field pubB offset 0x48
 __declspec(property(get=__get_pubB, put=__set_pubB)) ::Org::BouncyCastle::Math::BigInteger*  pubB;

/// @brief Field u offset 0x50
 __declspec(property(get=__get_u, put=__set_u)) ::Org::BouncyCastle::Math::BigInteger*  u;

/// @brief Field S offset 0x58
 __declspec(property(get=__get_S, put=__set_S)) ::Org::BouncyCastle::Math::BigInteger*  S;

/// @brief Field M1 offset 0x60
 __declspec(property(get=__get_M1, put=__set_M1)) ::Org::BouncyCastle::Math::BigInteger*  M1;

/// @brief Field M2 offset 0x68
 __declspec(property(get=__get_M2, put=__set_M2)) ::Org::BouncyCastle::Math::BigInteger*  M2;

/// @brief Field Key offset 0x70
 __declspec(property(get=__get_Key, put=__set_Key)) ::Org::BouncyCastle::Math::BigInteger*  Key;

constexpr void __set_N(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_N() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_N() const;

constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_g() const;

constexpr void __set_v(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_v() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_v() const;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_random() const;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_digest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_digest() const;

constexpr void __set_A(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_A() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_A() const;

constexpr void __set_privB(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_privB() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_privB() const;

constexpr void __set_pubB(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_pubB() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_pubB() const;

constexpr void __set_u(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_u() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_u() const;

constexpr void __set_S(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_S() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_S() const;

constexpr void __set_M1(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_M1() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_M1() const;

constexpr void __set_M2(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_M2() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_M2() const;

constexpr void __set_Key(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_Key() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_Key() const;

static inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* New_ctor() ;

/// @brief Method .ctor addr 0x12185e8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0x12185f0 size 0x10 virtual true final false
inline void Init(::Org::BouncyCastle::Math::BigInteger*  N, ::Org::BouncyCastle::Math::BigInteger*  g, ::Org::BouncyCastle::Math::BigInteger*  v, ::Org::BouncyCastle::Crypto::IDigest*  digest, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method Init addr 0x1218600 size 0x30 virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*  group, ::Org::BouncyCastle::Math::BigInteger*  v, ::Org::BouncyCastle::Crypto::IDigest*  digest, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method GenerateServerCredentials addr 0x1218630 size 0xb0 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* GenerateServerCredentials() ;

/// @brief Method CalculateSecret addr 0x12186e0 size 0x44 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateSecret(::Org::BouncyCastle::Math::BigInteger*  clientA) ;

/// @brief Method SelectPrivateValue addr 0x1218780 size 0xc virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* SelectPrivateValue() ;

/// @brief Method CalculateS addr 0x1218724 size 0x5c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateS() ;

/// @brief Method VerifyClientEvidenceMessage addr 0x121878c size 0xb8 virtual true final false
inline bool VerifyClientEvidenceMessage(::Org::BouncyCastle::Math::BigInteger*  clientM1) ;

/// @brief Method CalculateServerEvidenceMessage addr 0x1218844 size 0x84 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateServerEvidenceMessage() ;

/// @brief Method CalculateSessionKey addr 0x12188c8 size 0x84 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* CalculateSessionKey() ;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Server", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Srp6Server(Srp6Server && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Srp6Server", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Srp6Server(Srp6Server const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Srp6Server()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, 0x78>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Agreement::Srp
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server*, "Org.BouncyCastle.Crypto.Agreement.Srp", "Srp6Server");
