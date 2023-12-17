#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFaceExpressions)
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceRegionConfidence;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpression;
}
namespace GlobalNamespace {
struct __OVRPlugin__FaceState;
}
namespace GlobalNamespace {
struct __OVRPermissionsRequester__Permission;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpressionsEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace GlobalNamespace {
class __OVRFaceExpressions__WeightProvider;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpression;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceRegionConfidence;
}
namespace GlobalNamespace {
class OVRFaceExpressions;
}
namespace GlobalNamespace {
class __OVRFaceExpressions__WeightProvider;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpressionsEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRFaceExpressions__FaceExpression);
MARK_VAL_T(::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence);
MARK_REF_PTR_T(::GlobalNamespace::OVRFaceExpressions);
MARK_REF_PTR_T(::GlobalNamespace::__OVRFaceExpressions__WeightProvider);
MARK_VAL_T(::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator);
// Type: ::WeightProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7546))
// CS Name: ::OVRFaceExpressions::WeightProvider*
class CORDL_TYPE __OVRFaceExpressions__WeightProvider {
public:
// Declarations
/// @brief Method GetWeight addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetWeight(::GlobalNamespace::__OVRFaceExpressions__FaceExpression  expression) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRFaceExpressions__WeightProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRFaceExpressions__WeightProvider(__OVRFaceExpressions__WeightProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRFaceExpressions__WeightProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRFaceExpressions__WeightProvider(__OVRFaceExpressions__WeightProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FaceRegionConfidence
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7547))
// CS Name: ::OVRFaceExpressions::FaceRegionConfidence
struct CORDL_TYPE __OVRFaceExpressions__FaceRegionConfidence : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRFaceExpressions__FaceRegionConfidence_Unwrapped
enum struct ____OVRFaceExpressions__FaceRegionConfidence_Unwrapped : int32_t {
__E_Lower = static_cast<int32_t>(0x0),
__E_Upper = static_cast<int32_t>(0x1),
__E_Max = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Lower value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence const Lower;

/// @brief Field Upper value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence const Upper;

/// @brief Field Max value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence const Max;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRFaceExpressions__FaceRegionConfidence_Unwrapped () const noexcept {
return std::bit_cast<____OVRFaceExpressions__FaceRegionConfidence_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRFaceExpressions__FaceRegionConfidence(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRFaceExpressions__FaceRegionConfidence(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRFaceExpressions__FaceRegionConfidence()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FaceExpression
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7548))
// CS Name: ::OVRFaceExpressions::FaceExpression
struct CORDL_TYPE __OVRFaceExpressions__FaceExpression : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRFaceExpressions__FaceExpression_Unwrapped
enum struct ____OVRFaceExpressions__FaceExpression_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_BrowLowererL = static_cast<int32_t>(0x0),
__E_BrowLowererR = static_cast<int32_t>(0x1),
__E_CheekPuffL = static_cast<int32_t>(0x2),
__E_CheekPuffR = static_cast<int32_t>(0x3),
__E_CheekRaiserL = static_cast<int32_t>(0x4),
__E_CheekRaiserR = static_cast<int32_t>(0x5),
__E_CheekSuckL = static_cast<int32_t>(0x6),
__E_CheekSuckR = static_cast<int32_t>(0x7),
__E_ChinRaiserB = static_cast<int32_t>(0x8),
__E_ChinRaiserT = static_cast<int32_t>(0x9),
__E_DimplerL = static_cast<int32_t>(0xa),
__E_DimplerR = static_cast<int32_t>(0xb),
__E_EyesClosedL = static_cast<int32_t>(0xc),
__E_EyesClosedR = static_cast<int32_t>(0xd),
__E_EyesLookDownL = static_cast<int32_t>(0xe),
__E_EyesLookDownR = static_cast<int32_t>(0xf),
__E_EyesLookLeftL = static_cast<int32_t>(0x10),
__E_EyesLookLeftR = static_cast<int32_t>(0x11),
__E_EyesLookRightL = static_cast<int32_t>(0x12),
__E_EyesLookRightR = static_cast<int32_t>(0x13),
__E_EyesLookUpL = static_cast<int32_t>(0x14),
__E_EyesLookUpR = static_cast<int32_t>(0x15),
__E_InnerBrowRaiserL = static_cast<int32_t>(0x16),
__E_InnerBrowRaiserR = static_cast<int32_t>(0x17),
__E_JawDrop = static_cast<int32_t>(0x18),
__E_JawSidewaysLeft = static_cast<int32_t>(0x19),
__E_JawSidewaysRight = static_cast<int32_t>(0x1a),
__E_JawThrust = static_cast<int32_t>(0x1b),
__E_LidTightenerL = static_cast<int32_t>(0x1c),
__E_LidTightenerR = static_cast<int32_t>(0x1d),
__E_LipCornerDepressorL = static_cast<int32_t>(0x1e),
__E_LipCornerDepressorR = static_cast<int32_t>(0x1f),
__E_LipCornerPullerL = static_cast<int32_t>(0x20),
__E_LipCornerPullerR = static_cast<int32_t>(0x21),
__E_LipFunnelerLB = static_cast<int32_t>(0x22),
__E_LipFunnelerLT = static_cast<int32_t>(0x23),
__E_LipFunnelerRB = static_cast<int32_t>(0x24),
__E_LipFunnelerRT = static_cast<int32_t>(0x25),
__E_LipPressorL = static_cast<int32_t>(0x26),
__E_LipPressorR = static_cast<int32_t>(0x27),
__E_LipPuckerL = static_cast<int32_t>(0x28),
__E_LipPuckerR = static_cast<int32_t>(0x29),
__E_LipStretcherL = static_cast<int32_t>(0x2a),
__E_LipStretcherR = static_cast<int32_t>(0x2b),
__E_LipSuckLB = static_cast<int32_t>(0x2c),
__E_LipSuckLT = static_cast<int32_t>(0x2d),
__E_LipSuckRB = static_cast<int32_t>(0x2e),
__E_LipSuckRT = static_cast<int32_t>(0x2f),
__E_LipTightenerL = static_cast<int32_t>(0x30),
__E_LipTightenerR = static_cast<int32_t>(0x31),
__E_LipsToward = static_cast<int32_t>(0x32),
__E_LowerLipDepressorL = static_cast<int32_t>(0x33),
__E_LowerLipDepressorR = static_cast<int32_t>(0x34),
__E_MouthLeft = static_cast<int32_t>(0x35),
__E_MouthRight = static_cast<int32_t>(0x36),
__E_NoseWrinklerL = static_cast<int32_t>(0x37),
__E_NoseWrinklerR = static_cast<int32_t>(0x38),
__E_OuterBrowRaiserL = static_cast<int32_t>(0x39),
__E_OuterBrowRaiserR = static_cast<int32_t>(0x3a),
__E_UpperLidRaiserL = static_cast<int32_t>(0x3b),
__E_UpperLidRaiserR = static_cast<int32_t>(0x3c),
__E_UpperLipRaiserL = static_cast<int32_t>(0x3d),
__E_UpperLipRaiserR = static_cast<int32_t>(0x3e),
__E_Max = static_cast<int32_t>(0x3f),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Invalid value: static_cast<int32_t>(0xffffffff)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const Invalid;

/// @brief Field BrowLowererL value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const BrowLowererL;

/// @brief Field BrowLowererR value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const BrowLowererR;

/// @brief Field CheekPuffL value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const CheekPuffL;

/// @brief Field CheekPuffR value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const CheekPuffR;

/// @brief Field CheekRaiserL value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const CheekRaiserL;

/// @brief Field CheekRaiserR value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const CheekRaiserR;

/// @brief Field CheekSuckL value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const CheekSuckL;

/// @brief Field CheekSuckR value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const CheekSuckR;

/// @brief Field ChinRaiserB value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const ChinRaiserB;

/// @brief Field ChinRaiserT value: static_cast<int32_t>(0x9)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const ChinRaiserT;

/// @brief Field DimplerL value: static_cast<int32_t>(0xa)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const DimplerL;

/// @brief Field DimplerR value: static_cast<int32_t>(0xb)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const DimplerR;

/// @brief Field EyesClosedL value: static_cast<int32_t>(0xc)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesClosedL;

/// @brief Field EyesClosedR value: static_cast<int32_t>(0xd)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesClosedR;

/// @brief Field EyesLookDownL value: static_cast<int32_t>(0xe)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookDownL;

/// @brief Field EyesLookDownR value: static_cast<int32_t>(0xf)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookDownR;

/// @brief Field EyesLookLeftL value: static_cast<int32_t>(0x10)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookLeftL;

/// @brief Field EyesLookLeftR value: static_cast<int32_t>(0x11)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookLeftR;

/// @brief Field EyesLookRightL value: static_cast<int32_t>(0x12)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookRightL;

/// @brief Field EyesLookRightR value: static_cast<int32_t>(0x13)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookRightR;

/// @brief Field EyesLookUpL value: static_cast<int32_t>(0x14)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookUpL;

/// @brief Field EyesLookUpR value: static_cast<int32_t>(0x15)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const EyesLookUpR;

/// @brief Field InnerBrowRaiserL value: static_cast<int32_t>(0x16)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const InnerBrowRaiserL;

/// @brief Field InnerBrowRaiserR value: static_cast<int32_t>(0x17)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const InnerBrowRaiserR;

/// @brief Field JawDrop value: static_cast<int32_t>(0x18)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const JawDrop;

/// @brief Field JawSidewaysLeft value: static_cast<int32_t>(0x19)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const JawSidewaysLeft;

/// @brief Field JawSidewaysRight value: static_cast<int32_t>(0x1a)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const JawSidewaysRight;

/// @brief Field JawThrust value: static_cast<int32_t>(0x1b)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const JawThrust;

/// @brief Field LidTightenerL value: static_cast<int32_t>(0x1c)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LidTightenerL;

/// @brief Field LidTightenerR value: static_cast<int32_t>(0x1d)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LidTightenerR;

/// @brief Field LipCornerDepressorL value: static_cast<int32_t>(0x1e)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipCornerDepressorL;

/// @brief Field LipCornerDepressorR value: static_cast<int32_t>(0x1f)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipCornerDepressorR;

/// @brief Field LipCornerPullerL value: static_cast<int32_t>(0x20)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipCornerPullerL;

/// @brief Field LipCornerPullerR value: static_cast<int32_t>(0x21)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipCornerPullerR;

/// @brief Field LipFunnelerLB value: static_cast<int32_t>(0x22)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipFunnelerLB;

/// @brief Field LipFunnelerLT value: static_cast<int32_t>(0x23)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipFunnelerLT;

/// @brief Field LipFunnelerRB value: static_cast<int32_t>(0x24)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipFunnelerRB;

/// @brief Field LipFunnelerRT value: static_cast<int32_t>(0x25)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipFunnelerRT;

/// @brief Field LipPressorL value: static_cast<int32_t>(0x26)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipPressorL;

/// @brief Field LipPressorR value: static_cast<int32_t>(0x27)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipPressorR;

/// @brief Field LipPuckerL value: static_cast<int32_t>(0x28)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipPuckerL;

/// @brief Field LipPuckerR value: static_cast<int32_t>(0x29)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipPuckerR;

/// @brief Field LipStretcherL value: static_cast<int32_t>(0x2a)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipStretcherL;

/// @brief Field LipStretcherR value: static_cast<int32_t>(0x2b)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipStretcherR;

/// @brief Field LipSuckLB value: static_cast<int32_t>(0x2c)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipSuckLB;

/// @brief Field LipSuckLT value: static_cast<int32_t>(0x2d)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipSuckLT;

/// @brief Field LipSuckRB value: static_cast<int32_t>(0x2e)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipSuckRB;

/// @brief Field LipSuckRT value: static_cast<int32_t>(0x2f)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipSuckRT;

/// @brief Field LipTightenerL value: static_cast<int32_t>(0x30)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipTightenerL;

/// @brief Field LipTightenerR value: static_cast<int32_t>(0x31)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipTightenerR;

/// @brief Field LipsToward value: static_cast<int32_t>(0x32)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LipsToward;

/// @brief Field LowerLipDepressorL value: static_cast<int32_t>(0x33)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LowerLipDepressorL;

/// @brief Field LowerLipDepressorR value: static_cast<int32_t>(0x34)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const LowerLipDepressorR;

/// @brief Field MouthLeft value: static_cast<int32_t>(0x35)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const MouthLeft;

/// @brief Field MouthRight value: static_cast<int32_t>(0x36)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const MouthRight;

/// @brief Field NoseWrinklerL value: static_cast<int32_t>(0x37)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const NoseWrinklerL;

/// @brief Field NoseWrinklerR value: static_cast<int32_t>(0x38)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const NoseWrinklerR;

/// @brief Field OuterBrowRaiserL value: static_cast<int32_t>(0x39)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const OuterBrowRaiserL;

/// @brief Field OuterBrowRaiserR value: static_cast<int32_t>(0x3a)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const OuterBrowRaiserR;

/// @brief Field UpperLidRaiserL value: static_cast<int32_t>(0x3b)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const UpperLidRaiserL;

/// @brief Field UpperLidRaiserR value: static_cast<int32_t>(0x3c)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const UpperLidRaiserR;

/// @brief Field UpperLipRaiserL value: static_cast<int32_t>(0x3d)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const UpperLipRaiserL;

/// @brief Field UpperLipRaiserR value: static_cast<int32_t>(0x3e)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const UpperLipRaiserR;

/// @brief Field Max value: static_cast<int32_t>(0x3f)
static ::GlobalNamespace::__OVRFaceExpressions__FaceExpression const Max;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRFaceExpressions__FaceExpression_Unwrapped () const noexcept {
return std::bit_cast<____OVRFaceExpressions__FaceExpression_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRFaceExpressions__FaceExpression(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRFaceExpressions__FaceExpression(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRFaceExpressions__FaceExpression()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRFaceExpressions__FaceExpression, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FaceExpressionsEnumerator
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7549))
// CS Name: ::OVRFaceExpressions::FaceExpressionsEnumerator
struct CORDL_TYPE __OVRFaceExpressions__FaceExpressionsEnumerator : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _faceExpressions offset 0x0
 __declspec(property(get=__get__faceExpressions, put=__set__faceExpressions)) ::ArrayW<float_t,::Array<float_t>*>  _faceExpressions;

/// @brief Field _index offset 0x8
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _count offset 0xc
 __declspec(property(get=__get__count, put=__set__count)) int32_t  _count;

 __declspec(property(get=get_Current)) float_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<float_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set__faceExpressions(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__faceExpressions() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__faceExpressions() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__count(int32_t  value) ;

constexpr int32_t& __get__count() ;

constexpr int32_t const& __get__count() const;

/// @brief Method .ctor addr 0x271d634 size 0x24 virtual false final false
inline void _ctor(::ArrayW<float_t,::Array<float_t>*>  array) ;

/// @brief Method MoveNext addr 0x271d760 size 0x1c virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x271d77c size 0x34 virtual true final true
inline float_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x271d7b0 size 0x60 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x271d810 size 0xc virtual true final true
inline void Reset() ;

/// @brief Method Dispose addr 0x271d81c size 0x4 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRFaceExpressions__FaceExpressionsEnumerator(::ArrayW<float_t,::Array<float_t>*>  _faceExpressions, int32_t  _index, int32_t  _count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRFaceExpressions__FaceExpressionsEnumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRFaceExpressions__FaceExpressionsEnumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRFaceExpressions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7679)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7550))
// CS Name: ::OVRFaceExpressions*
class CORDL_TYPE OVRFaceExpressions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FaceExpressionsEnumerator = ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator;

using FaceExpression = ::GlobalNamespace::__OVRFaceExpressions__FaceExpression;

using FaceRegionConfidence = ::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence;

using WeightProvider = ::GlobalNamespace::__OVRFaceExpressions__WeightProvider;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field FaceTrackingPermission value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRPermissionsRequester__Permission const FaceTrackingPermission;

/// @brief Field <ValidExpressions>k__BackingField offset 0x18
 __declspec(property(get=__get__ValidExpressions_k__BackingField, put=__set__ValidExpressions_k__BackingField)) bool  _ValidExpressions_k__BackingField;

/// @brief Field <EyeFollowingBlendshapesValid>k__BackingField offset 0x19
 __declspec(property(get=__get__EyeFollowingBlendshapesValid_k__BackingField, put=__set__EyeFollowingBlendshapesValid_k__BackingField)) bool  _EyeFollowingBlendshapesValid_k__BackingField;

/// @brief Field _currentFaceState offset 0x20
 __declspec(property(get=__get__currentFaceState, put=__set__currentFaceState)) ::GlobalNamespace::__OVRPlugin__FaceState  _currentFaceState;

/// @brief Field _onPermissionGranted offset 0x40
 __declspec(property(get=__get__onPermissionGranted, put=__set__onPermissionGranted)) ::System::Action_1<::StringW>*  _onPermissionGranted;

 __declspec(property(get=get_FaceTrackingEnabled)) bool  FaceTrackingEnabled;

 __declspec(property(get=get_ValidExpressions, put=set_ValidExpressions)) bool  ValidExpressions;

 __declspec(property(get=get_EyeFollowingBlendshapesValid, put=set_EyeFollowingBlendshapesValid)) bool  EyeFollowingBlendshapesValid;

 __declspec(property(get=get_Item)) float_t  Item[];

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::__OVRFaceExpressions__WeightProvider"
constexpr operator  ::GlobalNamespace::__OVRFaceExpressions__WeightProvider*() noexcept;

constexpr void __set__ValidExpressions_k__BackingField(bool  value) ;

constexpr bool& __get__ValidExpressions_k__BackingField() ;

constexpr bool const& __get__ValidExpressions_k__BackingField() const;

constexpr void __set__EyeFollowingBlendshapesValid_k__BackingField(bool  value) ;

constexpr bool& __get__EyeFollowingBlendshapesValid_k__BackingField() ;

constexpr bool const& __get__EyeFollowingBlendshapesValid_k__BackingField() const;

constexpr void __set__currentFaceState(::GlobalNamespace::__OVRPlugin__FaceState  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__FaceState& __get__currentFaceState() ;

constexpr ::GlobalNamespace::__OVRPlugin__FaceState const& __get__currentFaceState() const;

constexpr void __set__onPermissionGranted(::System::Action_1<::StringW>*  value) ;

constexpr ::System::Action_1<::StringW>* __get__onPermissionGranted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> __get__onPermissionGranted() const;

static inline void setStaticF__trackingInstanceCount(int32_t  value) ;

static inline int32_t getStaticF__trackingInstanceCount() ;

/// @brief Method get_FaceTrackingEnabled addr 0x271cd88 size 0x50 virtual false final false
inline bool get_FaceTrackingEnabled() ;

/// @brief Method get_ValidExpressions addr 0x271cdd8 size 0x8 virtual false final false
inline bool get_ValidExpressions() ;

/// @brief Method set_ValidExpressions addr 0x271cde0 size 0xc virtual false final false
inline void set_ValidExpressions(bool  value) ;

/// @brief Method get_EyeFollowingBlendshapesValid addr 0x271cdec size 0x8 virtual false final false
inline bool get_EyeFollowingBlendshapesValid() ;

/// @brief Method set_EyeFollowingBlendshapesValid addr 0x271cdf4 size 0xc virtual false final false
inline void set_EyeFollowingBlendshapesValid(bool  value) ;

/// @brief Method Awake addr 0x271ce00 size 0x7c virtual false final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x271ce7c size 0x78 virtual false final false
inline void OnEnable() ;

/// @brief Method OnPermissionGranted addr 0x271cfcc size 0x60 virtual false final false
inline void OnPermissionGranted(::StringW  permissionId) ;

/// @brief Method StartFaceTracking addr 0x271cef4 size 0xd8 virtual false final false
inline bool StartFaceTracking() ;

/// @brief Method OnDisable addr 0x271d02c size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x271d0b4 size 0xc virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x271d0c0 size 0x94 virtual false final false
inline void Update() ;

/// @brief Method get_Item addr 0x271d154 size 0x100 virtual false final false
inline float_t get_Item(::GlobalNamespace::__OVRFaceExpressions__FaceExpression  expression) ;

/// @brief Method GetWeight addr 0x271d2b4 size 0x4 virtual true final true
inline float_t GetWeight(::GlobalNamespace::__OVRFaceExpressions__FaceExpression  expression) ;

/// @brief Method TryGetFaceExpressionWeight addr 0x271d2b8 size 0x54 virtual false final false
inline bool TryGetFaceExpressionWeight(::GlobalNamespace::__OVRFaceExpressions__FaceExpression  expression, ByRef<float_t>  weight) ;

/// @brief Method TryGetWeightConfidence addr 0x271d30c size 0x54 virtual false final false
inline bool TryGetWeightConfidence(::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence  region, ByRef<float_t>  weightConfidence) ;

/// @brief Method CheckValidity addr 0x271d254 size 0x60 virtual false final false
inline void CheckValidity() ;

/// @brief Method CopyTo addr 0x271d360 size 0x250 virtual false final false
inline void CopyTo(::ArrayW<float_t,::Array<float_t>*>  array, int32_t  startIndex) ;

/// @brief Method ToArray addr 0x271d5b0 size 0x64 virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> ToArray() ;

/// @brief Method GetEnumerator addr 0x271d614 size 0x20 virtual false final false
inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Single>.GetEnumerator addr 0x271d658 size 0x74 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<float_t>* System_Collections_Generic_IEnumerable_System_Single__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x271d6cc size 0x74 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Count addr 0x271d740 size 0x18 virtual true final true
inline int32_t get_Count() ;

static inline ::GlobalNamespace::OVRFaceExpressions* New_ctor() ;

/// @brief Method .ctor addr 0x271d758 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRFaceExpressions(OVRFaceExpressions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRFaceExpressions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRFaceExpressions(OVRFaceExpressions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRFaceExpressions()  = default;
public:


// Fields

// Static field _trackingInstanceCount


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFaceExpressions, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRFaceExpressions__FaceExpression, "", "OVRFaceExpressions/FaceExpression");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRFaceExpressions__FaceRegionConfidence, "", "OVRFaceExpressions/FaceRegionConfidence");
NEED_NO_BOX(::GlobalNamespace::OVRFaceExpressions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions*, "", "OVRFaceExpressions");
NEED_NO_BOX(::GlobalNamespace::__OVRFaceExpressions__WeightProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRFaceExpressions__WeightProvider*, "", "OVRFaceExpressions/WeightProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRFaceExpressions__FaceExpressionsEnumerator, "", "OVRFaceExpressions/FaceExpressionsEnumerator");
