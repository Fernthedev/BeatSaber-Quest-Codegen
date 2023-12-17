#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
CORDL_MODULE_EXPORT(MPInteger)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::MPInteger);
// Type: Org.BouncyCastle.Bcpg::MPInteger
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(576))
// CS Name: ::Org.BouncyCastle.Bcpg::MPInteger*
class CORDL_TYPE MPInteger : public ::Org::BouncyCastle::Bcpg::BcpgObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Bcpg::BcpgObject)]{};

/// @brief Field val offset 0x10
 __declspec(property(get=__get_val, put=__set_val)) ::Org::BouncyCastle::Math::BigInteger*  val;

 __declspec(property(get=get_Value)) ::Org::BouncyCastle::Math::BigInteger*  Value;

constexpr void __set_val(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_val() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_val() const;

static inline ::Org::BouncyCastle::Bcpg::MPInteger* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

/// @brief Method .ctor addr 0x11d05b0 size 0x140 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgIn) ;

static inline ::Org::BouncyCastle::Bcpg::MPInteger* New_ctor(::Org::BouncyCastle::Math::BigInteger*  val) ;

/// @brief Method .ctor addr 0x11d07d0 size 0xcc virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  val) ;

/// @brief Method get_Value addr 0x11d1ecc size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Value() ;

/// @brief Method Encode addr 0x11d1ed4 size 0x70 virtual true final false
inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut) ;

/// @brief Method Encode addr 0x11d1f44 size 0x6c virtual false final false
static inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut, ::Org::BouncyCastle::Math::BigInteger*  val) ;

// Ctor Parameters [CppParam { name: "", ty: "MPInteger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MPInteger(MPInteger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MPInteger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MPInteger(MPInteger const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MPInteger()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::MPInteger, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::MPInteger);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::MPInteger*, "Org.BouncyCastle.Bcpg", "MPInteger");
