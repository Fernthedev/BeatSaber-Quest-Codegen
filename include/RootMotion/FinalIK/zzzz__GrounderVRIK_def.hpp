#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GrounderVRIK)
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace RootMotion::FinalIK {
struct __IKSolverVR__PositionOffset;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class VRIK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderVRIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::GrounderVRIK);
// Type: RootMotion.FinalIK::GrounderVRIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12525))
// CS Name: ::RootMotion.FinalIK::GrounderVRIK*
class CORDL_TYPE GrounderVRIK : public ::RootMotion::FinalIK::Grounder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::RootMotion::FinalIK::Grounder)]{};

/// @brief Field ik offset 0x40
 __declspec(property(get=__get_ik, put=__set_ik)) ::RootMotion::FinalIK::VRIK*  ik;

/// @brief Field feet offset 0x48
 __declspec(property(get=__get_feet, put=__set_feet)) ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  feet;

constexpr void __set_ik(::RootMotion::FinalIK::VRIK*  value) ;

constexpr ::RootMotion::FinalIK::VRIK* __get_ik() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::VRIK*> __get_ik() const;

constexpr void __set_feet(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& __get_feet() ;

constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& __get_feet() const;

/// @brief Method OpenTutorial addr 0x124b1b0 size 0x44 virtual false final false
inline void OpenTutorial() ;

/// @brief Method OpenUserManual addr 0x124b1f4 size 0x44 virtual true final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x124b238 size 0x44 virtual true final false
inline void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x124b27c size 0x18 virtual true final false
inline void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x124b294 size 0x88 virtual false final false
inline bool IsReadyToInitiate() ;

/// @brief Method Update addr 0x124b31c size 0x54 virtual false final false
inline void Update() ;

/// @brief Method Initiate addr 0x124b370 size 0x238 virtual false final false
inline void Initiate() ;

/// @brief Method OnSolverUpdate addr 0x124b5a8 size 0x1f4 virtual false final false
inline void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x124b79c size 0x84 virtual false final false
inline void SetLegIK(::RootMotion::FinalIK::__IKSolverVR__PositionOffset  positionOffset, ::UnityEngine::Transform*  bone, ::RootMotion::FinalIK::__Grounding__Leg*  leg) ;

/// @brief Method OnPostSolverUpdate addr 0x124b820 size 0x29c virtual false final false
inline void OnPostSolverUpdate() ;

/// @brief Method OnDrawGizmosSelected addr 0x124babc size 0x134 virtual false final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnDestroy addr 0x124bbf0 size 0x198 virtual false final false
inline void OnDestroy() ;

static inline ::RootMotion::FinalIK::GrounderVRIK* New_ctor() ;

/// @brief Method .ctor addr 0x124bd88 size 0x58 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GrounderVRIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GrounderVRIK(GrounderVRIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrounderVRIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrounderVRIK(GrounderVRIK const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GrounderVRIK()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::GrounderVRIK, 0x50>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::GrounderVRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderVRIK*, "RootMotion.FinalIK", "GrounderVRIK");
