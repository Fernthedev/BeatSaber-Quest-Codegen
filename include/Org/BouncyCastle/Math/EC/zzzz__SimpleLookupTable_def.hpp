#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleLookupTable)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class SimpleLookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::SimpleLookupTable);
// Type: Org.BouncyCastle.Math.EC::SimpleLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1579))
// CS Name: ::Org.BouncyCastle.Math.EC::SimpleLookupTable*
class CORDL_TYPE SimpleLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Math::EC::AbstractECLookupTable)]{};

/// @brief Field points offset 0x10
 __declspec(property(get=__get_points, put=__set_points)) ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points;

 __declspec(property(get=get_Size)) int32_t  Size;

constexpr void __set_points(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>& __get_points() ;

constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> const& __get_points() const;

/// @brief Method Copy addr 0x105aef4 size 0xec virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*> Copy(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points, int32_t  off, int32_t  len) ;

static inline ::Org::BouncyCastle::Math::EC::SimpleLookupTable* New_ctor(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points, int32_t  off, int32_t  len) ;

/// @brief Method .ctor addr 0x105afe0 size 0x48 virtual false final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points, int32_t  off, int32_t  len) ;

/// @brief Method get_Size addr 0x105b028 size 0x1c virtual true final false
inline int32_t get_Size() ;

/// @brief Method Lookup addr 0x105b044 size 0x50 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t  index) ;

/// @brief Method LookupVar addr 0x105b094 size 0x30 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLookupTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleLookupTable(SimpleLookupTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLookupTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleLookupTable(SimpleLookupTable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimpleLookupTable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::SimpleLookupTable, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::SimpleLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::SimpleLookupTable*, "Org.BouncyCastle.Math.EC", "SimpleLookupTable");
