#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedPointUtilities)
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __FixedPointUtilities__FixedPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECLookupTable;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class FixedPointUtilities;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class __FixedPointUtilities__FixedPointCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback);
// Type: ::FixedPointCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1531))
// CS Name: ::FixedPointUtilities::FixedPointCallback*
class CORDL_TYPE __FixedPointUtilities__FixedPointCallback : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_p offset 0x10
 __declspec(property(get=__get_m_p, put=__set_m_p)) ::Org::BouncyCastle::Math::EC::ECPoint*  m_p;

/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
constexpr operator  ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

constexpr void __set_m_p(::Org::BouncyCastle::Math::EC::ECPoint*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPoint* __get_m_p() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> __get_m_p() const;

static inline ::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint*  p) ;

/// @brief Method .ctor addr 0x103632c size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECPoint*  p) ;

/// @brief Method Precompute addr 0x10363bc size 0x434 virtual true final true
inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*  existing) ;

/// @brief Method CheckExisting addr 0x10367f0 size 0x38 virtual false final false
inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*  existingFP, int32_t  n) ;

/// @brief Method CheckTable addr 0x1036828 size 0xb0 virtual false final false
inline bool CheckTable(::Org::BouncyCastle::Math::EC::ECLookupTable*  table, int32_t  n) ;

// Ctor Parameters [CppParam { name: "", ty: "__FixedPointUtilities__FixedPointCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FixedPointUtilities__FixedPointCallback(__FixedPointUtilities__FixedPointCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FixedPointUtilities__FixedPointCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FixedPointUtilities__FixedPointCallback(__FixedPointUtilities__FixedPointCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FixedPointUtilities__FixedPointCallback()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
// Type: Org.BouncyCastle.Math.EC.Multiplier::FixedPointUtilities
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1532))
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::FixedPointUtilities*
class CORDL_TYPE FixedPointUtilities : public ::System::Object {
public:
// Declarations
using FixedPointCallback = ::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_PRECOMP_NAME(::StringW  value) ;

static inline ::StringW getStaticF_PRECOMP_NAME() ;

/// @brief Method GetCombSize addr 0x10360fc size 0x4c virtual false final false
static inline int32_t GetCombSize(::Org::BouncyCastle::Math::EC::ECCurve*  c) ;

/// @brief Method GetFixedPointPreCompInfo addr 0x10362b4 size 0x78 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* GetFixedPointPreCompInfo(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*  preCompInfo) ;

/// @brief Method Precompute addr 0x1036148 size 0x120 virtual false final false
static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::ECPoint*  p) ;

static inline ::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities* New_ctor() ;

/// @brief Method .ctor addr 0x10363b4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedPointUtilities(FixedPointUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedPointUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedPointUtilities(FixedPointUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FixedPointUtilities()  = default;
public:


// Fields

// Static field PRECOMP_NAME


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::FixedPointUtilities*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::__FixedPointUtilities__FixedPointCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "FixedPointUtilities/FixedPointCallback");
