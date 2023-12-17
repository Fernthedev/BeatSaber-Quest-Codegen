#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tnaf)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
namespace Org::BouncyCastle::Math::EC::Abc {
class SimpleBigDecimal;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mCurve;
}
namespace Org::BouncyCastle::Math::EC {
class AbstractF2mPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class Tnaf;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Abc::Tnaf);
// Type: Org.BouncyCastle.Math.EC.Abc::Tnaf
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1357))
// CS Name: ::Org.BouncyCastle.Math.EC.Abc::Tnaf*
class CORDL_TYPE Tnaf : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field Width offset 0x0
static constexpr int8_t  Width{static_cast<int8_t>(0x4)};

/// @brief Field Pow2Width offset 0x0
static constexpr int8_t  Pow2Width{static_cast<int8_t>(0x10)};

static inline void setStaticF_MinusOne(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusOne() ;

static inline void setStaticF_MinusTwo(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusTwo() ;

static inline void setStaticF_MinusThree(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_MinusThree() ;

static inline void setStaticF_Four(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Four() ;

static inline void setStaticF_Alpha0(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*,::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*>  value) ;

static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*,::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> getStaticF_Alpha0() ;

static inline void setStaticF_Alpha0Tnaf(::ArrayW<::ArrayW<int8_t,::Array<int8_t>*>,::Array<::ArrayW<int8_t,::Array<int8_t>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<int8_t,::Array<int8_t>*>,::Array<::ArrayW<int8_t,::Array<int8_t>*>>*> getStaticF_Alpha0Tnaf() ;

static inline void setStaticF_Alpha1(::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*,::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*>  value) ;

static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*,::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*> getStaticF_Alpha1() ;

static inline void setStaticF_Alpha1Tnaf(::ArrayW<::ArrayW<int8_t,::Array<int8_t>*>,::Array<::ArrayW<int8_t,::Array<int8_t>*>>*>  value) ;

static inline ::ArrayW<::ArrayW<int8_t,::Array<int8_t>*>,::Array<::ArrayW<int8_t,::Array<int8_t>*>>*> getStaticF_Alpha1Tnaf() ;

/// @brief Method Norm addr 0xfc73c4 size 0x11c virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* Norm(int8_t  mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*  lambda) ;

/// @brief Method Norm addr 0xfc74e0 size 0xfc virtual false final false
static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Norm(int8_t  mu, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  u, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  v) ;

/// @brief Method Round addr 0xfc75dc size 0x3b8 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Round(::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  lambda0, ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*  lambda1, int8_t  mu) ;

/// @brief Method ApproximateDivisionByN addr 0xfc79c0 size 0x178 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ApproximateDivisionByN(::Org::BouncyCastle::Math::BigInteger*  k, ::Org::BouncyCastle::Math::BigInteger*  s, ::Org::BouncyCastle::Math::BigInteger*  vm, int8_t  a, int32_t  m, int32_t  c) ;

/// @brief Method TauAdicNaf addr 0xfc7b38 size 0x3a4 virtual false final false
static inline ::ArrayW<int8_t,::Array<int8_t>*> TauAdicNaf(int8_t  mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*  lambda) ;

/// @brief Method Tau addr 0xfc7edc size 0x20 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Tau(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*  p) ;

/// @brief Method GetMu addr 0xfc7efc size 0x104 virtual false final false
static inline int8_t GetMu(::Org::BouncyCastle::Math::EC::AbstractF2mCurve*  curve) ;

/// @brief Method GetMu addr 0xfc8000 size 0x30 virtual false final false
static inline int8_t GetMu(::Org::BouncyCastle::Math::EC::ECFieldElement*  curveA) ;

/// @brief Method GetMu addr 0xfc8030 size 0x10 virtual false final false
static inline int8_t GetMu(int32_t  curveA) ;

/// @brief Method GetLucas addr 0xfc8040 size 0x1e4 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetLucas(int8_t  mu, int32_t  k, bool  doV) ;

/// @brief Method GetTw addr 0xfc8224 size 0x16c virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* GetTw(int8_t  mu, int32_t  w) ;

/// @brief Method GetSi addr 0xfc8390 size 0x30c virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetSi(::Org::BouncyCastle::Math::EC::AbstractF2mCurve*  curve) ;

/// @brief Method GetSi addr 0xfc8734 size 0x250 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> GetSi(int32_t  fieldSize, int32_t  curveA, ::Org::BouncyCastle::Math::BigInteger*  cofactor) ;

/// @brief Method GetShiftsForCofactor addr 0xfc869c size 0x98 virtual false final false
static inline int32_t GetShiftsForCofactor(::Org::BouncyCastle::Math::BigInteger*  h) ;

/// @brief Method PartModReduction addr 0xfc8984 size 0x288 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::Abc::ZTauElement* PartModReduction(::Org::BouncyCastle::Math::BigInteger*  k, int32_t  m, int8_t  a, ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  s, int8_t  mu, int8_t  c) ;

/// @brief Method MultiplyRTnaf addr 0xfc8c0c size 0x150 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyRTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*  p, ::Org::BouncyCastle::Math::BigInteger*  k) ;

/// @brief Method MultiplyTnaf addr 0xfc8d5c size 0xfc virtual false final false
static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*  p, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*  lambda) ;

/// @brief Method MultiplyFromTnaf addr 0xfc8e58 size 0x20c virtual false final false
static inline ::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromTnaf(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*  p, ::ArrayW<int8_t,::Array<int8_t>*>  u) ;

/// @brief Method TauAdicWNaf addr 0xfc9064 size 0x3c0 virtual false final false
static inline ::ArrayW<int8_t,::Array<int8_t>*> TauAdicWNaf(int8_t  mu, ::Org::BouncyCastle::Math::EC::Abc::ZTauElement*  lambda, int8_t  width, ::Org::BouncyCastle::Math::BigInteger*  pow2w, ::Org::BouncyCastle::Math::BigInteger*  tw, ::ArrayW<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*,::Array<::Org::BouncyCastle::Math::EC::Abc::ZTauElement*>*>  alpha) ;

/// @brief Method GetPreComp addr 0xfc9424 size 0x1a4 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*,::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> GetPreComp(::Org::BouncyCastle::Math::EC::AbstractF2mPoint*  p, int8_t  a) ;

static inline ::Org::BouncyCastle::Math::EC::Abc::Tnaf* New_ctor() ;

/// @brief Method .ctor addr 0xfc9cd4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Tnaf(Tnaf && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tnaf", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tnaf(Tnaf const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Tnaf()  = default;
public:


// Fields

// Static field MinusOne

// Static field MinusTwo

// Static field MinusThree

// Static field Four

// Static field Alpha0

// Static field Alpha0Tnaf

// Static field Alpha1

// Static field Alpha1Tnaf


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Abc::Tnaf, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Abc
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::Tnaf);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::Tnaf*, "Org.BouncyCastle.Math.EC.Abc", "Tnaf");
