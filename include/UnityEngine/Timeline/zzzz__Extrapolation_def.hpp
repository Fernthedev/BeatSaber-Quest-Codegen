#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Extrapolation)
namespace UnityEngine::Timeline {
class __Extrapolation____c;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class Extrapolation;
}
namespace UnityEngine::Timeline {
class __Extrapolation____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::Extrapolation);
MARK_REF_PTR_T(::UnityEngine::Timeline::__Extrapolation____c);
// Type: ::<>c
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13930))
// CS Name: ::Extrapolation::<>c*
class CORDL_TYPE __Extrapolation____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Timeline::__Extrapolation____c*  value) ;

static inline ::UnityEngine::Timeline::__Extrapolation____c* getStaticF___9() ;

static inline void setStaticF___9__2_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*  value) ;

static inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* getStaticF___9__2_0() ;

static inline ::UnityEngine::Timeline::__Extrapolation____c* New_ctor() ;

/// @brief Method .ctor addr 0x2c70bb0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SortClipsByStartTime>b__2_0 addr 0x2c70bb8 size 0x34 virtual false final false
inline int32_t _SortClipsByStartTime_b__2_0(::UnityEngine::Timeline::TimelineClip*  clip1, ::UnityEngine::Timeline::TimelineClip*  clip2) ;

// Ctor Parameters [CppParam { name: "", ty: "__Extrapolation____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Extrapolation____c(__Extrapolation____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Extrapolation____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Extrapolation____c(__Extrapolation____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Extrapolation____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__Extrapolation____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::Extrapolation
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13931))
// CS Name: ::UnityEngine.Timeline::Extrapolation*
class CORDL_TYPE Extrapolation : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Timeline::__Extrapolation____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_kMinExtrapolationTime(double_t  value) ;

static inline double_t getStaticF_kMinExtrapolationTime() ;

/// @brief Method CalculateExtrapolationTimes addr 0x2c70580 size 0x40c virtual false final false
static inline void CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset*  asset) ;

/// @brief Method SortClipsByStartTime addr 0x2c7098c size 0x13c virtual false final false
static inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*> SortClipsByStartTime(::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*>  clips) ;

// Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Extrapolation(Extrapolation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Extrapolation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Extrapolation(Extrapolation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Extrapolation()  = default;
public:


// Fields

// Static field kMinExtrapolationTime


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::Extrapolation, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::Extrapolation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Extrapolation*, "UnityEngine.Timeline", "Extrapolation");
NEED_NO_BOX(::UnityEngine::Timeline::__Extrapolation____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__Extrapolation____c*, "UnityEngine.Timeline", "Extrapolation/<>c");
