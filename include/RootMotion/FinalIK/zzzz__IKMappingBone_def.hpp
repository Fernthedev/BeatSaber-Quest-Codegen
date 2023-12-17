#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKMappingBone)
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class __IKMapping__BoneMap;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKMappingBone;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKMappingBone);
// Type: RootMotion.FinalIK::IKMappingBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12555))
// CS Name: ::RootMotion.FinalIK::IKMappingBone*
class CORDL_TYPE IKMappingBone : public ::RootMotion::FinalIK::IKMapping {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::RootMotion::FinalIK::IKMapping)]{};

/// @brief Field bone offset 0x10
 __declspec(property(get=__get_bone, put=__set_bone)) ::UnityEngine::Transform*  bone;

/// @brief Field maintainRotationWeight offset 0x18
 __declspec(property(get=__get_maintainRotationWeight, put=__set_maintainRotationWeight)) float_t  maintainRotationWeight;

/// @brief Field boneMap offset 0x20
 __declspec(property(get=__get_boneMap, put=__set_boneMap)) ::RootMotion::FinalIK::__IKMapping__BoneMap*  boneMap;

constexpr void __set_bone(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_bone() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_bone() const;

constexpr void __set_maintainRotationWeight(float_t  value) ;

constexpr float_t& __get_maintainRotationWeight() ;

constexpr float_t const& __get_maintainRotationWeight() const;

constexpr void __set_boneMap(::RootMotion::FinalIK::__IKMapping__BoneMap*  value) ;

constexpr ::RootMotion::FinalIK::__IKMapping__BoneMap* __get_boneMap() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKMapping__BoneMap*> __get_boneMap() const;

/// @brief Method IsValid addr 0x125c120 size 0x9c virtual true final false
inline bool IsValid(::RootMotion::FinalIK::IKSolver*  solver, ByRef<::StringW>  message) ;

static inline ::RootMotion::FinalIK::IKMappingBone* New_ctor() ;

/// @brief Method .ctor addr 0x125c1bc size 0x84 virtual false final false
inline void _ctor() ;

static inline ::RootMotion::FinalIK::IKMappingBone* New_ctor(::UnityEngine::Transform*  bone) ;

/// @brief Method .ctor addr 0x125c240 size 0x98 virtual false final false
inline void _ctor(::UnityEngine::Transform*  bone) ;

/// @brief Method StoreDefaultLocalState addr 0x125c2d8 size 0x18 virtual false final false
inline void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x125c2f0 size 0x1c virtual false final false
inline void FixTransforms() ;

/// @brief Method Initiate addr 0x125c30c size 0x8c virtual true final false
inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody*  solver) ;

/// @brief Method ReadPose addr 0x125c398 size 0x18 virtual false final false
inline void ReadPose() ;

/// @brief Method WritePose addr 0x125c3b0 size 0x24 virtual false final false
inline void WritePose(float_t  solverWeight) ;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingBone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKMappingBone(IKMappingBone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingBone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKMappingBone(IKMappingBone const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IKMappingBone()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKMappingBone, 0x28>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingBone*, "RootMotion.FinalIK", "IKMappingBone");
