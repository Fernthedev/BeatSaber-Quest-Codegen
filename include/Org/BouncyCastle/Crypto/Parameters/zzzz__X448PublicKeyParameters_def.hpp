#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X448PublicKeyParameters)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X448PublicKeyParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::X448PublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1093))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::X448PublicKeyParameters*
class CORDL_TYPE X448PublicKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)]{};

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

static inline void setStaticF_KeySize(int32_t  value) ;

static inline int32_t getStaticF_KeySize() ;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

/// @brief Method .ctor addr 0xf3c538 size 0xbc virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters* New_ctor(::System::IO::Stream*  input) ;

/// @brief Method .ctor addr 0xf3c7b8 size 0x108 virtual false final false
inline void _ctor(::System::IO::Stream*  input) ;

/// @brief Method Encode addr 0xf3c6e8 size 0x84 virtual false final false
inline void Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off) ;

/// @brief Method GetEncoded addr 0xf3c8c0 size 0x5c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

// Ctor Parameters [CppParam { name: "", ty: "X448PublicKeyParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X448PublicKeyParameters(X448PublicKeyParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X448PublicKeyParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X448PublicKeyParameters(X448PublicKeyParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X448PublicKeyParameters()  = default;
public:


// Fields

// Static field KeySize


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "X448PublicKeyParameters");
