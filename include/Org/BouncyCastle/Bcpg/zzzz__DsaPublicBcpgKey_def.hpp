#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DsaPublicBcpgKey)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class DsaPublicBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey);
// Type: Org.BouncyCastle.Bcpg::DsaPublicBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(563))
// CS Name: ::Org.BouncyCastle.Bcpg::DsaPublicBcpgKey*
class CORDL_TYPE DsaPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Org::BouncyCastle::Bcpg::BcpgObject)]{};

/// @brief Field p offset 0x10
 __declspec(property(get=__get_p, put=__set_p)) ::Org::BouncyCastle::Bcpg::MPInteger*  p;

/// @brief Field q offset 0x18
 __declspec(property(get=__get_q, put=__set_q)) ::Org::BouncyCastle::Bcpg::MPInteger*  q;

/// @brief Field g offset 0x20
 __declspec(property(get=__get_g, put=__set_g)) ::Org::BouncyCastle::Bcpg::MPInteger*  g;

/// @brief Field y offset 0x28
 __declspec(property(get=__get_y, put=__set_y)) ::Org::BouncyCastle::Bcpg::MPInteger*  y;

 __declspec(property(get=get_Format)) ::StringW  Format;

 __declspec(property(get=get_G)) ::Org::BouncyCastle::Math::BigInteger*  G;

 __declspec(property(get=get_P)) ::Org::BouncyCastle::Math::BigInteger*  P;

 __declspec(property(get=get_Q)) ::Org::BouncyCastle::Math::BigInteger*  Q;

 __declspec(property(get=get_Y)) ::Org::BouncyCastle::Math::BigInteger*  Y;

/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::IBcpgKey"
constexpr operator  ::Org::BouncyCastle::Bcpg::IBcpgKey*() noexcept;

constexpr void __set_p(::Org::BouncyCastle::Bcpg::MPInteger*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger* __get_p() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> __get_p() const;

constexpr void __set_q(::Org::BouncyCastle::Bcpg::MPInteger*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger* __get_q() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> __get_q() const;

constexpr void __set_g(::Org::BouncyCastle::Bcpg::MPInteger*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger* __get_g() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> __get_g() const;

constexpr void __set_y(::Org::BouncyCastle::Bcpg::MPInteger*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::MPInteger* __get_y() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MPInteger*> __get_y() const;

static inline ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor addr 0x11d04e4 size 0xcc virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

static inline ::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey* New_ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  q, ::Org::BouncyCastle::Math::BigInteger*  g, ::Org::BouncyCastle::Math::BigInteger*  y) ;

/// @brief Method .ctor addr 0x11d06f0 size 0xe0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  p, ::Org::BouncyCastle::Math::BigInteger*  q, ::Org::BouncyCastle::Math::BigInteger*  g, ::Org::BouncyCastle::Math::BigInteger*  y) ;

/// @brief Method get_Format addr 0x11d089c size 0x40 virtual true final true
inline ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x11d08dc size 0x84 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

/// @brief Method Encode addr 0x11d0960 size 0x12c virtual true final false
inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut) ;

/// @brief Method get_G addr 0x11d0a8c size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_G() ;

/// @brief Method get_P addr 0x11d0aa8 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_P() ;

/// @brief Method get_Q addr 0x11d0ac4 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Q() ;

/// @brief Method get_Y addr 0x11d0ae0 size 0x1c virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Y() ;

// Ctor Parameters [CppParam { name: "", ty: "DsaPublicBcpgKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DsaPublicBcpgKey(DsaPublicBcpgKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DsaPublicBcpgKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DsaPublicBcpgKey(DsaPublicBcpgKey const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DsaPublicBcpgKey()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::DsaPublicBcpgKey*, "Org.BouncyCastle.Bcpg", "DsaPublicBcpgKey");
