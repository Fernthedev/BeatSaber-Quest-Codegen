#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InteractionTarget)
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __InteractionObject__WeightCurve__Type;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __InteractionTarget__Multiplier;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class __InteractionTarget__Multiplier;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionTarget);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTarget__Multiplier);
// Type: ::Multiplier
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12607))
// CS Name: ::InteractionTarget::Multiplier*
class CORDL_TYPE __InteractionTarget__Multiplier : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field curve offset 0x10
 __declspec(property(get=__get_curve, put=__set_curve)) ::GlobalNamespace::__InteractionObject__WeightCurve__Type  curve;

/// @brief Field multiplier offset 0x14
 __declspec(property(get=__get_multiplier, put=__set_multiplier)) float_t  multiplier;

constexpr void __set_curve(::GlobalNamespace::__InteractionObject__WeightCurve__Type  value) ;

constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type& __get_curve() ;

constexpr ::GlobalNamespace::__InteractionObject__WeightCurve__Type const& __get_curve() const;

constexpr void __set_multiplier(float_t  value) ;

constexpr float_t& __get_multiplier() ;

constexpr float_t const& __get_multiplier() const;

static inline ::RootMotion::FinalIK::__InteractionTarget__Multiplier* New_ctor() ;

/// @brief Method .ctor addr 0x128b7b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__InteractionTarget__Multiplier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InteractionTarget__Multiplier(__InteractionTarget__Multiplier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InteractionTarget__Multiplier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InteractionTarget__Multiplier(__InteractionTarget__Multiplier const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InteractionTarget__Multiplier()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTarget__Multiplier, 0x18>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionTarget
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12608))
// CS Name: ::RootMotion.FinalIK::InteractionTarget*
class CORDL_TYPE InteractionTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Multiplier = ::RootMotion::FinalIK::__InteractionTarget__Multiplier;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field effectorType offset 0x18
 __declspec(property(get=__get_effectorType, put=__set_effectorType)) ::RootMotion::FinalIK::FullBodyBipedEffector  effectorType;

/// @brief Field multipliers offset 0x20
 __declspec(property(get=__get_multipliers, put=__set_multipliers)) ::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*>  multipliers;

/// @brief Field interactionSpeedMlp offset 0x28
 __declspec(property(get=__get_interactionSpeedMlp, put=__set_interactionSpeedMlp)) float_t  interactionSpeedMlp;

/// @brief Field pivot offset 0x30
 __declspec(property(get=__get_pivot, put=__set_pivot)) ::UnityEngine::Transform*  pivot;

/// @brief Field twistAxis offset 0x38
 __declspec(property(get=__get_twistAxis, put=__set_twistAxis)) ::UnityEngine::Vector3  twistAxis;

/// @brief Field twistWeight offset 0x44
 __declspec(property(get=__get_twistWeight, put=__set_twistWeight)) float_t  twistWeight;

/// @brief Field swingWeight offset 0x48
 __declspec(property(get=__get_swingWeight, put=__set_swingWeight)) float_t  swingWeight;

/// @brief Field rotateOnce offset 0x4c
 __declspec(property(get=__get_rotateOnce, put=__set_rotateOnce)) bool  rotateOnce;

/// @brief Field defaultLocalRotation offset 0x50
 __declspec(property(get=__get_defaultLocalRotation, put=__set_defaultLocalRotation)) ::UnityEngine::Quaternion  defaultLocalRotation;

/// @brief Field lastPivot offset 0x60
 __declspec(property(get=__get_lastPivot, put=__set_lastPivot)) ::UnityEngine::Transform*  lastPivot;

constexpr void __set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector  value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effectorType() ;

constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effectorType() const;

constexpr void __set_multipliers(::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*>  value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*>& __get_multipliers() ;

constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTarget__Multiplier*,::Array<::RootMotion::FinalIK::__InteractionTarget__Multiplier*>*> const& __get_multipliers() const;

constexpr void __set_interactionSpeedMlp(float_t  value) ;

constexpr float_t& __get_interactionSpeedMlp() ;

constexpr float_t const& __get_interactionSpeedMlp() const;

constexpr void __set_pivot(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_pivot() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_pivot() const;

constexpr void __set_twistAxis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_twistAxis() ;

constexpr ::UnityEngine::Vector3 const& __get_twistAxis() const;

constexpr void __set_twistWeight(float_t  value) ;

constexpr float_t& __get_twistWeight() ;

constexpr float_t const& __get_twistWeight() const;

constexpr void __set_swingWeight(float_t  value) ;

constexpr float_t& __get_swingWeight() ;

constexpr float_t const& __get_swingWeight() const;

constexpr void __set_rotateOnce(bool  value) ;

constexpr bool& __get_rotateOnce() ;

constexpr bool const& __get_rotateOnce() const;

constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_defaultLocalRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_defaultLocalRotation() const;

constexpr void __set_lastPivot(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_lastPivot() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_lastPivot() const;

/// @brief Method OpenUserManual addr 0x128b520 size 0x44 virtual false final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x128b564 size 0x44 virtual false final false
inline void OpenScriptReference() ;

/// @brief Method OpenTutorial1 addr 0x128b5a8 size 0x44 virtual false final false
inline void OpenTutorial1() ;

/// @brief Method OpenTutorial2 addr 0x128b5ec size 0x44 virtual false final false
inline void OpenTutorial2() ;

/// @brief Method OpenTutorial3 addr 0x128b630 size 0x44 virtual false final false
inline void OpenTutorial3() ;

/// @brief Method OpenTutorial4 addr 0x128b674 size 0x44 virtual false final false
inline void OpenTutorial4() ;

/// @brief Method SupportGroup addr 0x128b6b8 size 0x44 virtual false final false
inline void SupportGroup() ;

/// @brief Method ASThread addr 0x128b6fc size 0x44 virtual false final false
inline void ASThread() ;

/// @brief Method GetValue addr 0x1286dbc size 0x64 virtual false final false
inline float_t GetValue(::GlobalNamespace::__InteractionObject__WeightCurve__Type  curveType) ;

/// @brief Method ResetRotation addr 0x1285fa0 size 0x8c virtual false final false
inline void ResetRotation() ;

/// @brief Method RotateTo addr 0x12847b4 size 0x4a4 virtual false final false
inline void RotateTo(::UnityEngine::Vector3  position) ;

static inline ::RootMotion::FinalIK::InteractionTarget* New_ctor() ;

/// @brief Method .ctor addr 0x128b740 size 0x70 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InteractionTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionTarget(InteractionTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionTarget(InteractionTarget const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InteractionTarget()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionTarget, 0x68>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTarget);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTarget*, "RootMotion.FinalIK", "InteractionTarget");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTarget__Multiplier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTarget__Multiplier*, "RootMotion.FinalIK", "InteractionTarget/Multiplier");
