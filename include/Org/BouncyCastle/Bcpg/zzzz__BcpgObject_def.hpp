#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BcpgObject)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgObject);
// Type: Org.BouncyCastle.Bcpg::BcpgObject
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(554))
// CS Name: ::Org.BouncyCastle.Bcpg::BcpgObject*
class CORDL_TYPE BcpgObject : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetEncoded addr 0x11cf600 size 0xb0 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

/// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream*  bcpgOut) ;

static inline ::Org::BouncyCastle::Bcpg::BcpgObject* New_ctor() ;

/// @brief Method .ctor addr 0x11cf750 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BcpgObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BcpgObject(BcpgObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BcpgObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BcpgObject(BcpgObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BcpgObject()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgObject, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgObject*, "Org.BouncyCastle.Bcpg", "BcpgObject");
