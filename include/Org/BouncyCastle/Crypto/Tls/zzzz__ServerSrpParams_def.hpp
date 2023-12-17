#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerSrpParams)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerSrpParams;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ServerSrpParams);
// Type: Org.BouncyCastle.Crypto.Tls::ServerSrpParams
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1271))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ServerSrpParams*
class CORDL_TYPE ServerSrpParams : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_N offset 0x10
 __declspec(property(get=__get_m_N, put=__set_m_N)) ::Org::BouncyCastle::Math::BigInteger*  m_N;

/// @brief Field m_g offset 0x18
 __declspec(property(get=__get_m_g, put=__set_m_g)) ::Org::BouncyCastle::Math::BigInteger*  m_g;

/// @brief Field m_B offset 0x20
 __declspec(property(get=__get_m_B, put=__set_m_B)) ::Org::BouncyCastle::Math::BigInteger*  m_B;

/// @brief Field m_s offset 0x28
 __declspec(property(get=__get_m_s, put=__set_m_s)) ::ArrayW<uint8_t,::Array<uint8_t>*>  m_s;

 __declspec(property(get=get_B)) ::Org::BouncyCastle::Math::BigInteger*  B;

 __declspec(property(get=get_G)) ::Org::BouncyCastle::Math::BigInteger*  G;

 __declspec(property(get=get_N)) ::Org::BouncyCastle::Math::BigInteger*  N;

 __declspec(property(get=get_S)) ::ArrayW<uint8_t,::Array<uint8_t>*>  S;

constexpr void __set_m_N(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_m_N() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_m_N() const;

constexpr void __set_m_g(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_m_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_m_g() const;

constexpr void __set_m_B(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_m_B() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_m_B() const;

constexpr void __set_m_s(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_m_s() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_m_s() const;

static inline ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams* New_ctor(::Org::BouncyCastle::Math::BigInteger*  N, ::Org::BouncyCastle::Math::BigInteger*  g, ::ArrayW<uint8_t,::Array<uint8_t>*>  s, ::Org::BouncyCastle::Math::BigInteger*  B) ;

/// @brief Method .ctor addr 0xf95aa8 size 0x90 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  N, ::Org::BouncyCastle::Math::BigInteger*  g, ::ArrayW<uint8_t,::Array<uint8_t>*>  s, ::Org::BouncyCastle::Math::BigInteger*  B) ;

/// @brief Method get_B addr 0xf95b38 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* get_B() ;

/// @brief Method get_G addr 0xf95b40 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* get_G() ;

/// @brief Method get_N addr 0xf95b48 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* get_N() ;

/// @brief Method get_S addr 0xf95b50 size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_S() ;

/// @brief Method Encode addr 0xf95b58 size 0x9c virtual true final false
inline void Encode(::System::IO::Stream*  output) ;

/// @brief Method Parse addr 0xf95bf4 size 0xe0 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams* Parse(::System::IO::Stream*  input) ;

// Ctor Parameters [CppParam { name: "", ty: "ServerSrpParams", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerSrpParams(ServerSrpParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerSrpParams", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerSrpParams(ServerSrpParams const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServerSrpParams()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerSrpParams);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*, "Org.BouncyCastle.Crypto.Tls", "ServerSrpParams");
