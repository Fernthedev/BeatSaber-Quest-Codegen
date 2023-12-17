#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractECLookupTable_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mCurve_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(F2mCurve)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC {
class F2mPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ECMultiplier;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math::EC {
class __F2mCurve__DefaultF2mLookupTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class F2mCurve;
}
namespace Org::BouncyCastle::Math::EC {
class __F2mCurve__DefaultF2mLookupTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::F2mCurve);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::__F2mCurve__DefaultF2mLookupTable);
// Type: ::DefaultF2mLookupTable
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1567))
// CS Name: ::F2mCurve::DefaultF2mLookupTable*
class CORDL_TYPE __F2mCurve__DefaultF2mLookupTable : public ::Org::BouncyCastle::Math::EC::AbstractECLookupTable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Math::EC::AbstractECLookupTable)]{};

/// @brief Field m_outer offset 0x10
 __declspec(property(get=__get_m_outer, put=__set_m_outer)) ::Org::BouncyCastle::Math::EC::F2mCurve*  m_outer;

/// @brief Field m_table offset 0x18
 __declspec(property(get=__get_m_table, put=__set_m_table)) ::ArrayW<int64_t,::Array<int64_t>*>  m_table;

/// @brief Field m_size offset 0x20
 __declspec(property(get=__get_m_size, put=__set_m_size)) int32_t  m_size;

 __declspec(property(get=get_Size)) int32_t  Size;

constexpr void __set_m_outer(::Org::BouncyCastle::Math::EC::F2mCurve*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::F2mCurve* __get_m_outer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::F2mCurve*> __get_m_outer() const;

constexpr void __set_m_table(::ArrayW<int64_t,::Array<int64_t>*>  value) ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*>& __get_m_table() ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& __get_m_table() const;

constexpr void __set_m_size(int32_t  value) ;

constexpr int32_t& __get_m_size() ;

constexpr int32_t const& __get_m_size() const;

static inline ::Org::BouncyCastle::Math::EC::__F2mCurve__DefaultF2mLookupTable* New_ctor(::Org::BouncyCastle::Math::EC::F2mCurve*  outer, ::ArrayW<int64_t,::Array<int64_t>*>  table, int32_t  size) ;

/// @brief Method .ctor addr 0x104e180 size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::F2mCurve*  outer, ::ArrayW<int64_t,::Array<int64_t>*>  table, int32_t  size) ;

/// @brief Method get_Size addr 0x104e1bc size 0x8 virtual true final false
inline int32_t get_Size() ;

/// @brief Method Lookup addr 0x104e1c4 size 0x170 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* Lookup(int32_t  index) ;

/// @brief Method LookupVar addr 0x104e4f8 size 0x134 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int32_t  index) ;

/// @brief Method CreatePoint addr 0x104e334 size 0x1c4 virtual false final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::ArrayW<int64_t,::Array<int64_t>*>  x, ::ArrayW<int64_t,::Array<int64_t>*>  y) ;

// Ctor Parameters [CppParam { name: "", ty: "__F2mCurve__DefaultF2mLookupTable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__F2mCurve__DefaultF2mLookupTable(__F2mCurve__DefaultF2mLookupTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__F2mCurve__DefaultF2mLookupTable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__F2mCurve__DefaultF2mLookupTable(__F2mCurve__DefaultF2mLookupTable const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __F2mCurve__DefaultF2mLookupTable()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::__F2mCurve__DefaultF2mLookupTable, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC
// Type: Org.BouncyCastle.Math.EC::F2mCurve
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1568))
// CS Name: ::Org.BouncyCastle.Math.EC::F2mCurve*
class CORDL_TYPE F2mCurve : public ::Org::BouncyCastle::Math::EC::AbstractF2mCurve {
public:
// Declarations
using DefaultF2mLookupTable = ::Org::BouncyCastle::Math::EC::__F2mCurve__DefaultF2mLookupTable;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::Org::BouncyCastle::Math::EC::AbstractF2mCurve)]{};

/// @brief Field F2M_DEFAULT_COORDS offset 0x0
static constexpr int32_t  F2M_DEFAULT_COORDS{static_cast<int32_t>(0x6)};

/// @brief Field m offset 0x58
 __declspec(property(get=__get_m, put=__set_m)) int32_t  m;

/// @brief Field k1 offset 0x5c
 __declspec(property(get=__get_k1, put=__set_k1)) int32_t  k1;

/// @brief Field k2 offset 0x60
 __declspec(property(get=__get_k2, put=__set_k2)) int32_t  k2;

/// @brief Field k3 offset 0x64
 __declspec(property(get=__get_k3, put=__set_k3)) int32_t  k3;

/// @brief Field m_infinity offset 0x68
 __declspec(property(get=__get_m_infinity, put=__set_m_infinity)) ::Org::BouncyCastle::Math::EC::F2mPoint*  m_infinity;

 __declspec(property(get=get_FieldSize)) int32_t  FieldSize;

 __declspec(property(get=get_Infinity)) ::Org::BouncyCastle::Math::EC::ECPoint*  Infinity;

 __declspec(property(get=get_M)) int32_t  M;

 __declspec(property(get=get_K1)) int32_t  K1;

 __declspec(property(get=get_K2)) int32_t  K2;

 __declspec(property(get=get_K3)) int32_t  K3;

constexpr void __set_m(int32_t  value) ;

constexpr int32_t& __get_m() ;

constexpr int32_t const& __get_m() const;

constexpr void __set_k1(int32_t  value) ;

constexpr int32_t& __get_k1() ;

constexpr int32_t const& __get_k1() const;

constexpr void __set_k2(int32_t  value) ;

constexpr int32_t& __get_k2() ;

constexpr int32_t const& __get_k2() const;

constexpr void __set_k3(int32_t  value) ;

constexpr int32_t& __get_k3() ;

constexpr int32_t const& __get_k3() const;

constexpr void __set_m_infinity(::Org::BouncyCastle::Math::EC::F2mPoint*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::F2mPoint* __get_m_infinity() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::F2mPoint*> __get_m_infinity() const;

static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t  m, int32_t  k, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b) ;

/// @brief Method .ctor addr 0x104d614 size 0x30 virtual false final false
inline void _ctor(int32_t  m, int32_t  k, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b) ;

static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t  m, int32_t  k, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor) ;

/// @brief Method .ctor addr 0x104d828 size 0x34 virtual false final false
inline void _ctor(int32_t  m, int32_t  k, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor) ;

static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b) ;

/// @brief Method .ctor addr 0x104d85c size 0x20 virtual false final false
inline void _ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b) ;

static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor) ;

/// @brief Method .ctor addr 0x104d644 size 0x1e4 virtual false final false
inline void _ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3, ::Org::BouncyCastle::Math::BigInteger*  a, ::Org::BouncyCastle::Math::BigInteger*  b, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor) ;

static inline ::Org::BouncyCastle::Math::EC::F2mCurve* New_ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3, ::Org::BouncyCastle::Math::EC::ECFieldElement*  a, ::Org::BouncyCastle::Math::EC::ECFieldElement*  b, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor) ;

/// @brief Method .ctor addr 0x104d948 size 0xe4 virtual false final false
inline void _ctor(int32_t  m, int32_t  k1, int32_t  k2, int32_t  k3, ::Org::BouncyCastle::Math::EC::ECFieldElement*  a, ::Org::BouncyCastle::Math::EC::ECFieldElement*  b, ::Org::BouncyCastle::Math::BigInteger*  order, ::Org::BouncyCastle::Math::BigInteger*  cofactor) ;

/// @brief Method CloneCurve addr 0x104da2c size 0xb4 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECCurve* CloneCurve() ;

/// @brief Method SupportsCoordinateSystem addr 0x104dae0 size 0x1c virtual true final false
inline bool SupportsCoordinateSystem(int32_t  coord) ;

/// @brief Method CreateDefaultMultiplier addr 0x104dafc size 0x8c virtual true final false
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier() ;

/// @brief Method get_FieldSize addr 0x104db88 size 0x8 virtual true final false
inline int32_t get_FieldSize() ;

/// @brief Method FromBigInteger addr 0x104db90 size 0x8c virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method CreateRawPoint addr 0x104de24 size 0x88 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, bool  withCompression) ;

/// @brief Method CreateRawPoint addr 0x104deac size 0x94 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y, ::ArrayW<::Org::BouncyCastle::Math::EC::ECFieldElement*,::Array<::Org::BouncyCastle::Math::EC::ECFieldElement*>*>  zs, bool  withCompression) ;

/// @brief Method get_Infinity addr 0x104df4c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPoint* get_Infinity() ;

/// @brief Method get_M addr 0x104df54 size 0x8 virtual false final false
inline int32_t get_M() ;

/// @brief Method IsTrinomial addr 0x104df5c size 0x20 virtual false final false
inline bool IsTrinomial() ;

/// @brief Method get_K1 addr 0x104df7c size 0x8 virtual false final false
inline int32_t get_K1() ;

/// @brief Method get_K2 addr 0x104df84 size 0x8 virtual false final false
inline int32_t get_K2() ;

/// @brief Method get_K3 addr 0x104df8c size 0x8 virtual false final false
inline int32_t get_K3() ;

/// @brief Method CreateCacheSafeLookupTable addr 0x104df94 size 0x1c0 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::ArrayW<::Org::BouncyCastle::Math::EC::ECPoint*,::Array<::Org::BouncyCastle::Math::EC::ECPoint*>*>  points, int32_t  off, int32_t  len) ;

// Ctor Parameters [CppParam { name: "", ty: "F2mCurve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
F2mCurve(F2mCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "F2mCurve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
F2mCurve(F2mCurve const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 F2mCurve()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::F2mCurve, 0x70>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::F2mCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::F2mCurve*, "Org.BouncyCastle.Math.EC", "F2mCurve");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::__F2mCurve__DefaultF2mLookupTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::__F2mCurve__DefaultF2mLookupTable*, "Org.BouncyCastle.Math.EC", "F2mCurve/DefaultF2mLookupTable");
