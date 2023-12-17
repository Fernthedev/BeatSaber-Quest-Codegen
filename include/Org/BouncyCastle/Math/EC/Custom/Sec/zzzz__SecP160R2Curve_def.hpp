#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP160R2Curve)
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R2Point;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecP160R2Curve__SecP160R2LookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R2Curve;
}
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class __SecP160R2Curve__SecP160R2LookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable);
// Type: ::SecP160R2LookupTable
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1395))
// CS Name: ::SecP160R2Curve::SecP160R2LookupTable*
class CORDL_TYPE __SecP160R2Curve__SecP160R2LookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Math::EC::AbstractECLookupTable)]{};

/// @brief Field m_outer offset 0x10
 __declspec(property(get=__get_m_outer, put=__set_m_outer)) ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*  m_outer;

/// @brief Field m_table offset 0x18
 __declspec(property(get=__get_m_table, put=__set_m_table)) ::ArrayW<uint32_t,::Array<uint32_t>*>  m_table;

/// @brief Field m_size offset 0x20
 __declspec(property(get=__get_m_size, put=__set_m_size)) int32_t  m_size;

 __declspec(property(get=get_Size)) int32_t  Size;

constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* __get_m_outer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*> __get_m_outer() const;

constexpr void __set_m_table(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_m_table() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_m_table() const;

constexpr void __set_m_size(int32_t  value) ;

constexpr int32_t& __get_m_size() ;

constexpr int32_t const& __get_m_size() const;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable* New_ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*  outer, ::ArrayW<uint32_t,::Array<uint32_t>*>  table, int32_t  size) ;

/// @brief Method .ctor addr 0xfdf4c0 size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*  outer, ::ArrayW<uint32_t,::Array<uint32_t>*>  table, int32_t  size) ;

/// @brief Method get_Size addr 0xfdf8e4 size 0x8 virtual true final false
inline int32_t get_Size() ;

/// @brief Method Lookup addr 0xfdf8ec size 0x108 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t  index) ;

/// @brief Method LookupVar addr 0xfdfad4 size 0xc8 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t  index) ;

/// @brief Method CreatePoint addr 0xfdf9f4 size 0xe0 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

// Ctor Parameters [CppParam { name: "", ty: "__SecP160R2Curve__SecP160R2LookupTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SecP160R2Curve__SecP160R2LookupTable(__SecP160R2Curve__SecP160R2LookupTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SecP160R2Curve__SecP160R2LookupTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SecP160R2Curve__SecP160R2LookupTable(__SecP160R2Curve__SecP160R2LookupTable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SecP160R2Curve__SecP160R2LookupTable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Curve
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1396))
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Curve*
class CORDL_TYPE SecP160R2Curve : public ::Org::BouncyCastle::Math::EC::AbstractFpCurve {
public:
// Declarations
using SecP160R2LookupTable = ::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::Org::BouncyCastle::Math::EC::AbstractFpCurve)]{};

/// @brief Field SECP160R2_DEFAULT_COORDS offset 0x0
static constexpr int32_t  SECP160R2_DEFAULT_COORDS{static_cast<int32_t>(0x2)};

/// @brief Field SECP160R2_FE_INTS offset 0x0
static constexpr int32_t  SECP160R2_FE_INTS{static_cast<int32_t>(0x5)};

/// @brief Field m_infinity offset 0x50
 __declspec(property(get=__get_m_infinity, put=__set_m_infinity)) ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*  m_infinity;

 __declspec(property(get=get_Q)) ::Org::BouncyCastle::Math::BigInteger*  Q;

 __declspec(property(get=get_Infinity)) ::Org::BouncyCastle::Math::EC::ECPoint*  Infinity;

 __declspec(property(get=get_FieldSize)) int32_t  FieldSize;

static inline void setStaticF_q(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_q() ;

static inline void setStaticF_SECP160R2_AFFINE_ZS(::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  value) ;

static inline ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*> getStaticF_SECP160R2_AFFINE_ZS() ;

constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point* __get_m_infinity() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Point*> __get_m_infinity() const;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve* New_ctor() ;

/// @brief Method .ctor addr 0xfdec9c size 0x220 virtual false final false
inline void _ctor() ;

/// @brief Method CloneCurve addr 0xfdeec4 size 0x58 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve() ;

/// @brief Method SupportsCoordinateSystem addr 0xfdef1c size 0xc virtual true final false
inline bool SupportsCoordinateSystem(int32_t  coord) ;

/// @brief Method get_Q addr 0xfdef28 size 0x58 virtual true final false
inline ::Org::BouncyCastle::Math::BigInteger* get_Q() ;

/// @brief Method get_Infinity addr 0xfdef80 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity() ;

/// @brief Method get_FieldSize addr 0xfdef88 size 0x64 virtual true final false
inline int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0xfdefec size 0x60 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method CreateRawPoint addr 0xfdf164 size 0x88 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

/// @brief Method CreateRawPoint addr 0xfdf278 size 0x94 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method CreateCacheSafeLookupTable addr 0xfdf318 size 0x1a8 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points, int32_t  off, int32_t  len) ;

/// @brief Method RandomFieldElement addr 0xfdf4fc size 0xa4 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElement(::Org::BouncyCastle::Security::SecureRandom*  r) ;

/// @brief Method RandomFieldElementMult addr 0xfdf6a0 size 0xa4 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom*  r) ;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2Curve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecP160R2Curve(SecP160R2Curve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2Curve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecP160R2Curve(SecP160R2Curve const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SecP160R2Curve()  = default;
public:


// Fields

// Static field q

// Static field SECP160R2_AFFINE_ZS


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve, 0x58>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Curve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::__SecP160R2Curve__SecP160R2LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Curve/SecP160R2LookupTable");
