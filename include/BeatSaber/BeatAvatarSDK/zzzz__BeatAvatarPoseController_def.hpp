#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeatAvatarPoseController)
namespace UnityEngine {
struct Quaternion;
}
namespace BeatSaber::BeatAvatarSDK {
class HeadBodyOffsetSO;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class BeatAvatarPoseController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController);
// Type: BeatSaber.BeatAvatarSDK::BeatAvatarPoseController
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15693))
// CS Name: ::BeatSaber.BeatAvatarSDK::BeatAvatarPoseController*
class CORDL_TYPE BeatAvatarPoseController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _headTransform offset 0x18
 __declspec(property(get=__get__headTransform, put=__set__headTransform)) ::UnityEngine::Transform*  _headTransform;

/// @brief Field _leftHandTransform offset 0x20
 __declspec(property(get=__get__leftHandTransform, put=__set__leftHandTransform)) ::UnityEngine::Transform*  _leftHandTransform;

/// @brief Field _rightHandTransform offset 0x28
 __declspec(property(get=__get__rightHandTransform, put=__set__rightHandTransform)) ::UnityEngine::Transform*  _rightHandTransform;

/// @brief Field _bodyTransform offset 0x30
 __declspec(property(get=__get__bodyTransform, put=__set__bodyTransform)) ::UnityEngine::Transform*  _bodyTransform;

/// @brief Field _headBodyOffset offset 0x38
 __declspec(property(get=__get__headBodyOffset, put=__set__headBodyOffset)) ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*  _headBodyOffset;

 __declspec(property(get=get_bodyWorldPosition)) ::UnityEngine::Vector3  bodyWorldPosition;

constexpr void __set__headTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__headTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__headTransform() const;

constexpr void __set__leftHandTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__leftHandTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__leftHandTransform() const;

constexpr void __set__rightHandTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__rightHandTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__rightHandTransform() const;

constexpr void __set__bodyTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__bodyTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__bodyTransform() const;

constexpr void __set__headBodyOffset(::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*  value) ;

constexpr ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* __get__headBodyOffset() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*> __get__headBodyOffset() const;

/// @brief Method get_bodyWorldPosition addr 0xe1b04c size 0x1c virtual false final false
inline ::UnityEngine::Vector3 get_bodyWorldPosition() ;

/// @brief Method UpdateTransforms addr 0xe1b068 size 0xdc virtual false final false
inline void UpdateTransforms(::UnityEngine::Vector3  headPosition, ::UnityEngine::Vector3  leftHandPosition, ::UnityEngine::Vector3  rightHandPosition, ::UnityEngine::Quaternion  headRotation, ::UnityEngine::Quaternion  leftHandRotation, ::UnityEngine::Quaternion  rightHandRotation) ;

/// @brief Method UpdateBodyPosition addr 0xe1b144 size 0x1b0 virtual false final false
inline void UpdateBodyPosition() ;

static inline ::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController* New_ctor() ;

/// @brief Method .ctor addr 0xe1b2f4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarPoseController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatAvatarPoseController(BeatAvatarPoseController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatAvatarPoseController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatAvatarPoseController(BeatAvatarPoseController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatAvatarPoseController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController, 0x40>, "Size mismatch!");

} // namespace end def BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController*, "BeatSaber.BeatAvatarSDK", "BeatAvatarPoseController");
