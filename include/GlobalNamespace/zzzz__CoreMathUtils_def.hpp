#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreMathUtils)
// Forward declare root types
namespace GlobalNamespace {
class CoreMathUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CoreMathUtils);
// Type: ::CoreMathUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16244))
// CS Name: ::CoreMathUtils*
class CORDL_TYPE CoreMathUtils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kHalfJumpDistanceEpsilon offset 0x0
static constexpr float_t  kHalfJumpDistanceEpsilon{0.001};

/// @brief Method CalculateHalfJumpDurationInBeats addr 0x122d9c0 size 0x40 virtual false final false
static inline float_t CalculateHalfJumpDurationInBeats(float_t  startHalfJumpDurationInBeats, float_t  maxHalfJumpDistance, float_t  noteJumpMovementSpeed, float_t  oneBeatDuration, float_t  noteJumpStartBeatOffset) ;

/// @brief Method __CalculateHalfJumpDurationInBeatsV2 addr 0x122da00 size 0x34 virtual false final false
static inline float_t __CalculateHalfJumpDurationInBeatsV2(float_t  startHalfJumpDurationInBeats, float_t  maxHalfJumpDistance, float_t  noteJumpMovementSpeed, float_t  oneBeatDuration, float_t  noteJumpStartBeatOffset) ;

/// @brief Method __CalculateHalfJumpDurationInBeatsV1 addr 0x122da34 size 0x48 virtual false final false
static inline int32_t __CalculateHalfJumpDurationInBeatsV1(float_t  startHalfJumpDurationInBeats, float_t  maxHalfJumpDistance, float_t  noteJumpMovementSpeed, float_t  oneBeatDuration, float_t  minHalfJumpDistance) ;

static inline ::GlobalNamespace::CoreMathUtils* New_ctor() ;

/// @brief Method .ctor addr 0x122da7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreMathUtils(CoreMathUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreMathUtils(CoreMathUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CoreMathUtils()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CoreMathUtils, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CoreMathUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreMathUtils*, "", "CoreMathUtils");
