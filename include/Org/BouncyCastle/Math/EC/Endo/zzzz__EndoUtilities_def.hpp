#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndoUtilities)
namespace Org::BouncyCastle::Math::EC::Endo {
class __EndoUtilities__MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoUtilities;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class __EndoUtilities__MapPointCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback);
// Type: ::MapPointCallback
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1518))
// CS Name: ::EndoUtilities::MapPointCallback*
class CORDL_TYPE __EndoUtilities__MapPointCallback : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_endomorphism offset 0x10
 __declspec(property(get=__get_m_endomorphism, put=__set_m_endomorphism)) ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*  m_endomorphism;

/// @brief Field m_point offset 0x18
 __declspec(property(get=__get_m_point, put=__set_m_point)) ::Org::BouncyCastle::Math::EC::ECPoint*  m_point;

/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr operator  ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

constexpr void __set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* __get_m_endomorphism() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> __get_m_endomorphism() const;

constexpr void __set_m_point(::Org::BouncyCastle::Math::EC::ECPoint*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint* __get_m_point() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> __get_m_point() const;

static inline ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*  endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint*  point) ;

/// @brief Method .ctor addr 0x10350e4 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*  endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint*  point) ;

/// @brief Method Precompute addr 0x1035178 size 0x1f8 virtual true final true
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*  existing) ;

/// @brief Method CheckExisting addr 0x1035370 size 0x58 virtual false final false
inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*  existingEndo, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*  endomorphism) ;

// Ctor Parameters [CppParam { name: "", ty: "__EndoUtilities__MapPointCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EndoUtilities__MapPointCallback(__EndoUtilities__MapPointCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EndoUtilities__MapPointCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EndoUtilities__MapPointCallback(__EndoUtilities__MapPointCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EndoUtilities__MapPointCallback()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Endo
// Type: Org.BouncyCastle.Math.EC.Endo::EndoUtilities
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1519))
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::EndoUtilities*
class CORDL_TYPE EndoUtilities : public ::System::Object {
public:
// Declarations
using MapPointCallback = ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_PRECOMP_NAME(::StringW  value) ;

static inline ::StringW getStaticF_PRECOMP_NAME() ;

/// @brief Method DecomposeScalar addr 0x1034c88 size 0x234 virtual false final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> DecomposeScalar(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*  p, ::Org::BouncyCastle::Math::BigInteger*  k) ;

/// @brief Method MapPoint addr 0x1034fbc size 0x128 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::ECPoint* MapPoint(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*  endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint*  p) ;

/// @brief Method CalculateB addr 0x1034ebc size 0x100 virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* CalculateB(::Org::BouncyCastle::Math::BigInteger*  k, ::Org::BouncyCastle::Math::BigInteger*  g, int32_t  t) ;

static inline ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities* New_ctor() ;

/// @brief Method .ctor addr 0x1035170 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EndoUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EndoUtilities(EndoUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndoUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndoUtilities(EndoUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EndoUtilities()  = default;
public:


// Fields

// Static field PRECOMP_NAME


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities/MapPointCallback");
