#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_def.hpp"
CORDL_MODULE_EXPORT(PgpMarker)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class MarkerPacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpMarker;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpMarker
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1652))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpMarker*
class CORDL_TYPE PgpMarker : public ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject)]{};

/// @brief Field data offset 0x10
 __declspec(property(get=__get_data, put=__set_data)) ::Org::BouncyCastle::Bcpg::MarkerPacket*  data;

constexpr void __set_data(::Org::BouncyCastle::Bcpg::MarkerPacket*  value) ;

constexpr ::Org::BouncyCastle::Bcpg::MarkerPacket* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::MarkerPacket*> __get_data() const;

static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgInput) ;

/// @brief Method .ctor addr 0x10b0708 size 0x120 virtual false final false
inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream*  bcpgInput) ;

// Ctor Parameters [CppParam { name: "", ty: "PgpMarker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PgpMarker(PgpMarker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PgpMarker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PgpMarker(PgpMarker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PgpMarker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpMarker");
