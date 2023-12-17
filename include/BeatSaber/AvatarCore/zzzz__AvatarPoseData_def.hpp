#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AvatarPoseData)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct AvatarPoseData;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarPoseData);
// Type: BeatSaber.AvatarCore::AvatarPoseData
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15174))
// CS Name: ::BeatSaber.AvatarCore::AvatarPoseData
struct CORDL_TYPE AvatarPoseData : public ::bs_hook::ValueTypeWrapper<0x54> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x54};

/// @brief Field headPose offset 0x0
 __declspec(property(get=__get_headPose, put=__set_headPose)) ::UnityEngine::Pose  headPose;

/// @brief Field leftHandPose offset 0x1c
 __declspec(property(get=__get_leftHandPose, put=__set_leftHandPose)) ::UnityEngine::Pose  leftHandPose;

/// @brief Field rightHandPose offset 0x38
 __declspec(property(get=__get_rightHandPose, put=__set_rightHandPose)) ::UnityEngine::Pose  rightHandPose;

constexpr void __set_headPose(::UnityEngine::Pose  value) ;

constexpr ::UnityEngine::Pose& __get_headPose() ;

constexpr ::UnityEngine::Pose const& __get_headPose() const;

constexpr void __set_leftHandPose(::UnityEngine::Pose  value) ;

constexpr ::UnityEngine::Pose& __get_leftHandPose() ;

constexpr ::UnityEngine::Pose const& __get_leftHandPose() const;

constexpr void __set_rightHandPose(::UnityEngine::Pose  value) ;

constexpr ::UnityEngine::Pose& __get_rightHandPose() ;

constexpr ::UnityEngine::Pose const& __get_rightHandPose() const;

/// @brief Method .ctor addr 0xe0bd6c size 0x4c virtual false final false
inline void _ctor(::UnityEngine::Pose  headPose, ::UnityEngine::Pose  leftHandPose, ::UnityEngine::Pose  rightHandPose) ;

// Ctor Parameters [CppParam { name: "headPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "leftHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }, CppParam { name: "rightHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: None }]
constexpr AvatarPoseData(::UnityEngine::Pose  headPose, ::UnityEngine::Pose  leftHandPose, ::UnityEngine::Pose  rightHandPose) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AvatarPoseData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x54>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AvatarPoseData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarPoseData, 0x54>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarPoseData, "BeatSaber.AvatarCore", "AvatarPoseData");
