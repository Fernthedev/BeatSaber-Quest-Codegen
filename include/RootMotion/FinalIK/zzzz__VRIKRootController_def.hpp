#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRIKRootController)
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __VRIKCalibrator__CalibrationData;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class VRIKRootController;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::VRIKRootController);
// Type: RootMotion.FinalIK::VRIKRootController
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12674))
// CS Name: ::RootMotion.FinalIK::VRIKRootController*
class CORDL_TYPE VRIKRootController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field <pelvisTargetRight>k__BackingField offset 0x18
 __declspec(property(get=__get__pelvisTargetRight_k__BackingField, put=__set__pelvisTargetRight_k__BackingField)) ::UnityEngine::Vector3  _pelvisTargetRight_k__BackingField;

/// @brief Field pelvisTarget offset 0x28
 __declspec(property(get=__get_pelvisTarget, put=__set_pelvisTarget)) ::UnityEngine::Transform*  pelvisTarget;

/// @brief Field leftFootTarget offset 0x30
 __declspec(property(get=__get_leftFootTarget, put=__set_leftFootTarget)) ::UnityEngine::Transform*  leftFootTarget;

/// @brief Field rightFootTarget offset 0x38
 __declspec(property(get=__get_rightFootTarget, put=__set_rightFootTarget)) ::UnityEngine::Transform*  rightFootTarget;

/// @brief Field ik offset 0x40
 __declspec(property(get=__get_ik, put=__set_ik)) ::RootMotion::FinalIK::VRIK*  ik;

 __declspec(property(get=get_pelvisTargetRight, put=set_pelvisTargetRight)) ::UnityEngine::Vector3  pelvisTargetRight;

constexpr void __set__pelvisTargetRight_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__pelvisTargetRight_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __get__pelvisTargetRight_k__BackingField() const;

constexpr void __set_pelvisTarget(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_pelvisTarget() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_pelvisTarget() const;

constexpr void __set_leftFootTarget(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_leftFootTarget() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_leftFootTarget() const;

constexpr void __set_rightFootTarget(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_rightFootTarget() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_rightFootTarget() const;

constexpr void __set_ik(::RootMotion::FinalIK::VRIK*  value) ;

constexpr ::RootMotion::FinalIK::VRIK* __get_ik() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::VRIK*> __get_ik() const;

/// @brief Method get_pelvisTargetRight addr 0x129d7ac size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_pelvisTargetRight() ;

/// @brief Method set_pelvisTargetRight addr 0x129d7b8 size 0xc virtual false final false
inline void set_pelvisTargetRight(::UnityEngine::Vector3  value) ;

/// @brief Method Awake addr 0x129d7c4 size 0xf4 virtual false final false
inline void Awake() ;

/// @brief Method Calibrate addr 0x129c490 size 0x1c0 virtual false final false
inline void Calibrate() ;

/// @brief Method Calibrate addr 0x129d2a0 size 0x158 virtual false final false
inline void Calibrate(::RootMotion::FinalIK::__VRIKCalibrator__CalibrationData*  data) ;

/// @brief Method OnPreUpdate addr 0x129d8b8 size 0x3c8 virtual false final false
inline void OnPreUpdate() ;

/// @brief Method OnDestroy addr 0x129dc80 size 0x10c virtual false final false
inline void OnDestroy() ;

static inline ::RootMotion::FinalIK::VRIKRootController* New_ctor() ;

/// @brief Method .ctor addr 0x129dd8c size 0x1008 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VRIKRootController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRIKRootController(VRIKRootController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRIKRootController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRIKRootController(VRIKRootController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VRIKRootController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::VRIKRootController, 0x48>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::VRIKRootController);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKRootController*, "RootMotion.FinalIK", "VRIKRootController");
