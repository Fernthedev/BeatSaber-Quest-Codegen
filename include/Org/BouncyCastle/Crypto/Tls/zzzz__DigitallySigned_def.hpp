#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigitallySigned)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DigitallySigned);
// Type: Org.BouncyCastle.Crypto.Tls::DigitallySigned
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1221))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DigitallySigned*
class CORDL_TYPE DigitallySigned : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field mAlgorithm offset 0x10
 __declspec(property(get=__get_mAlgorithm, put=__set_mAlgorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  mAlgorithm;

/// @brief Field mSignature offset 0x18
 __declspec(property(get=__get_mSignature, put=__set_mSignature)) ::ArrayW<uint8_t,::Array<uint8_t>*>  mSignature;

 __declspec(property(get=get_Algorithm)) ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  Algorithm;

 __declspec(property(get=get_Signature)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Signature;

constexpr void __set_mAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* __get_mAlgorithm() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*> __get_mAlgorithm() const;

constexpr void __set_mSignature(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_mSignature() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_mSignature() const;

static inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* New_ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  algorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method .ctor addr 0xf688fc size 0x7c virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*  algorithm, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method get_Algorithm addr 0xf68978 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* get_Algorithm() ;

/// @brief Method get_Signature addr 0xf68980 size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Signature() ;

/// @brief Method Encode addr 0xf68988 size 0x7c virtual true final false
inline void Encode(::System::IO::Stream*  output) ;

/// @brief Method Parse addr 0xf5b62c size 0xdc virtual false final false
static inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Parse(::Org::BouncyCastle::Crypto::Tls::TlsContext*  context, ::System::IO::Stream*  input) ;

// Ctor Parameters [CppParam { name: "", ty: "DigitallySigned", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DigitallySigned(DigitallySigned && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DigitallySigned", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DigitallySigned(DigitallySigned const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DigitallySigned()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DigitallySigned, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DigitallySigned);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DigitallySigned*, "Org.BouncyCastle.Crypto.Tls", "DigitallySigned");
