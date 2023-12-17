#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PosePrediction)
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class PosePrediction;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PosePrediction);
// Type: ::PosePrediction
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12976))
// CS Name: ::PosePrediction*
class CORDL_TYPE PosePrediction : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method PredictPose addr 0xe59ff0 size 0xf0 virtual false final false
static inline ::UnityEngine::Pose PredictPose(::UnityEngine::Pose  prev, int64_t  prevTime, ::UnityEngine::Pose  curr, int64_t  currTime, int64_t  time) ;

/// @brief Method InterpolatePose addr 0xe5a0e0 size 0x2cc virtual false final false
static inline ::UnityEngine::Pose InterpolatePose(::UnityEngine::Pose  prev, ::UnityEngine::Pose  curr, float_t  t) ;

/// @brief Method PredictPoseSerializable addr 0xe5a3ac size 0xe0 virtual false final false
static inline ::GlobalNamespace::PoseSerializable PredictPoseSerializable(::GlobalNamespace::PoseSerializable  prev, int64_t  prevTime, ::GlobalNamespace::PoseSerializable  curr, int64_t  currTime, int64_t  time) ;

/// @brief Method InterpolatePoseSerializable addr 0xe5a48c size 0xf0 virtual false final false
static inline ::GlobalNamespace::PoseSerializable InterpolatePoseSerializable(::GlobalNamespace::PoseSerializable  a, ::GlobalNamespace::PoseSerializable  b, float_t  t) ;

static inline ::GlobalNamespace::PosePrediction* New_ctor() ;

/// @brief Method .ctor addr 0xe5a57c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PosePrediction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PosePrediction(PosePrediction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PosePrediction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PosePrediction(PosePrediction const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PosePrediction()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PosePrediction, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PosePrediction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosePrediction*, "", "PosePrediction");
