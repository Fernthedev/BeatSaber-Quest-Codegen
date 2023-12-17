#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAManaged)
namespace Mono::Security::Cryptography {
class __RSAManaged__KeyGeneratedEventHandler;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace Mono::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace System {
class EventArgs;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class RSAManaged;
}
namespace Mono::Security::Cryptography {
class __RSAManaged__KeyGeneratedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::RSAManaged);
MARK_REF_PTR_T(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler);
// Type: ::KeyGeneratedEventHandler
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13799))
// CS Name: ::RSAManaged::KeyGeneratedEventHandler*
class CORDL_TYPE __RSAManaged__KeyGeneratedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x240a2ac size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x240a3dc size 0x14 virtual true final false
inline void Invoke(::System::Object*  sender, ::System::EventArgs*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "__RSAManaged__KeyGeneratedEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RSAManaged__KeyGeneratedEventHandler(__RSAManaged__KeyGeneratedEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RSAManaged__KeyGeneratedEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RSAManaged__KeyGeneratedEventHandler(__RSAManaged__KeyGeneratedEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RSAManaged__KeyGeneratedEventHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler, 0x80>, "Size mismatch!");

} // namespace end def Mono::Security::Cryptography
// Type: Mono.Security.Cryptography::RSAManaged
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2956))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13800))
// CS Name: ::Mono.Security.Cryptography::RSAManaged*
class CORDL_TYPE RSAManaged : public ::System::Security::Cryptography::RSA {
public:
// Declarations
using KeyGeneratedEventHandler = ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::System::Security::Cryptography::RSA)]{};

/// @brief Field isCRTpossible offset 0x20
 __declspec(property(get=__get_isCRTpossible, put=__set_isCRTpossible)) bool  isCRTpossible;

/// @brief Field keyBlinding offset 0x21
 __declspec(property(get=__get_keyBlinding, put=__set_keyBlinding)) bool  keyBlinding;

/// @brief Field keypairGenerated offset 0x22
 __declspec(property(get=__get_keypairGenerated, put=__set_keypairGenerated)) bool  keypairGenerated;

/// @brief Field m_disposed offset 0x23
 __declspec(property(get=__get_m_disposed, put=__set_m_disposed)) bool  m_disposed;

/// @brief Field d offset 0x28
 __declspec(property(get=__get_d, put=__set_d)) ::Mono::Math::BigInteger*  d;

/// @brief Field p offset 0x30
 __declspec(property(get=__get_p, put=__set_p)) ::Mono::Math::BigInteger*  p;

/// @brief Field q offset 0x38
 __declspec(property(get=__get_q, put=__set_q)) ::Mono::Math::BigInteger*  q;

/// @brief Field dp offset 0x40
 __declspec(property(get=__get_dp, put=__set_dp)) ::Mono::Math::BigInteger*  dp;

/// @brief Field dq offset 0x48
 __declspec(property(get=__get_dq, put=__set_dq)) ::Mono::Math::BigInteger*  dq;

/// @brief Field qInv offset 0x50
 __declspec(property(get=__get_qInv, put=__set_qInv)) ::Mono::Math::BigInteger*  qInv;

/// @brief Field n offset 0x58
 __declspec(property(get=__get_n, put=__set_n)) ::Mono::Math::BigInteger*  n;

/// @brief Field e offset 0x60
 __declspec(property(get=__get_e, put=__set_e)) ::Mono::Math::BigInteger*  e;

/// @brief Field KeyGenerated offset 0x68
 __declspec(property(get=__get_KeyGenerated, put=__set_KeyGenerated)) ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*  KeyGenerated;

 __declspec(property(get=get_KeySize)) int32_t  KeySize;

 __declspec(property(get=get_PublicOnly)) bool  PublicOnly;

constexpr void __set_isCRTpossible(bool  value) ;

constexpr bool& __get_isCRTpossible() ;

constexpr bool const& __get_isCRTpossible() const;

constexpr void __set_keyBlinding(bool  value) ;

constexpr bool& __get_keyBlinding() ;

constexpr bool const& __get_keyBlinding() const;

constexpr void __set_keypairGenerated(bool  value) ;

constexpr bool& __get_keypairGenerated() ;

constexpr bool const& __get_keypairGenerated() const;

constexpr void __set_m_disposed(bool  value) ;

constexpr bool& __get_m_disposed() ;

constexpr bool const& __get_m_disposed() const;

constexpr void __set_d(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_d() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_d() const;

constexpr void __set_p(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_p() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_p() const;

constexpr void __set_q(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_q() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_q() const;

constexpr void __set_dp(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_dp() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_dp() const;

constexpr void __set_dq(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_dq() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_dq() const;

constexpr void __set_qInv(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_qInv() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_qInv() const;

constexpr void __set_n(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_n() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_n() const;

constexpr void __set_e(::Mono::Math::BigInteger*  value) ;

constexpr ::Mono::Math::BigInteger* __get_e() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> __get_e() const;

constexpr void __set_KeyGenerated(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*  value) ;

constexpr ::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler* __get_KeyGenerated() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*> __get_KeyGenerated() const;

static inline ::Mono::Security::Cryptography::RSAManaged* New_ctor() ;

/// @brief Method .ctor addr 0x2408094 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Mono::Security::Cryptography::RSAManaged* New_ctor(int32_t  keySize) ;

/// @brief Method .ctor addr 0x240809c size 0xf0 virtual false final false
inline void _ctor(int32_t  keySize) ;

/// @brief Method Finalize addr 0x240818c size 0xa0 virtual true final false
inline void Finalize() ;

/// @brief Method GenerateKeyPair addr 0x240822c size 0x268 virtual false final false
inline void GenerateKeyPair() ;

/// @brief Method get_KeySize addr 0x2408aa4 size 0xa4 virtual true final false
inline int32_t get_KeySize() ;

/// @brief Method get_PublicOnly addr 0x2408b48 size 0xa0 virtual false final false
inline bool get_PublicOnly() ;

/// @brief Method EncryptValue addr 0x2408c98 size 0x10c virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncryptValue(::ArrayW<uint8_t,::Array<uint8_t>*>  rgb) ;

/// @brief Method ExportParameters addr 0x2409158 size 0x334 virtual true final false
inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool  includePrivateParameters) ;

/// @brief Method ImportParameters addr 0x24095b8 size 0x46c virtual true final false
inline void ImportParameters(::System::Security::Cryptography::RSAParameters  parameters) ;

/// @brief Method Dispose addr 0x2409a24 size 0x204 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method ToXmlString addr 0x2409c28 size 0x684 virtual true final false
inline ::StringW ToXmlString(bool  includePrivateParameters) ;

/// @brief Method GetPaddedValue addr 0x2409058 size 0xb0 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetPaddedValue(::Mono::Math::BigInteger*  value, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RSAManaged(RSAManaged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSAManaged(RSAManaged const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RSAManaged()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::RSAManaged, 0x70>, "Size mismatch!");

} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::RSAManaged);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RSAManaged*, "Mono.Security.Cryptography", "RSAManaged");
NEED_NO_BOX(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::__RSAManaged__KeyGeneratedEventHandler*, "Mono.Security.Cryptography", "RSAManaged/KeyGeneratedEventHandler");
