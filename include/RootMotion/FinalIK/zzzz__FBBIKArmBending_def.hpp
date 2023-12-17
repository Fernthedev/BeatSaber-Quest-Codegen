#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FBBIKArmBending)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class FBBIKArmBending;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::FBBIKArmBending);
// Type: RootMotion.FinalIK::FBBIKArmBending
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12545))
// CS Name: ::RootMotion.FinalIK::FBBIKArmBending*
class CORDL_TYPE FBBIKArmBending : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field ik offset 0x18
 __declspec(property(get=__get_ik, put=__set_ik)) ::RootMotion::FinalIK::FullBodyBipedIK*  ik;

/// @brief Field bendDirectionOffsetLeft offset 0x20
 __declspec(property(get=__get_bendDirectionOffsetLeft, put=__set_bendDirectionOffsetLeft)) ::UnityEngine::Vector3  bendDirectionOffsetLeft;

/// @brief Field bendDirectionOffsetRight offset 0x2c
 __declspec(property(get=__get_bendDirectionOffsetRight, put=__set_bendDirectionOffsetRight)) ::UnityEngine::Vector3  bendDirectionOffsetRight;

/// @brief Field characterSpaceBendOffsetLeft offset 0x38
 __declspec(property(get=__get_characterSpaceBendOffsetLeft, put=__set_characterSpaceBendOffsetLeft)) ::UnityEngine::Vector3  characterSpaceBendOffsetLeft;

/// @brief Field characterSpaceBendOffsetRight offset 0x44
 __declspec(property(get=__get_characterSpaceBendOffsetRight, put=__set_characterSpaceBendOffsetRight)) ::UnityEngine::Vector3  characterSpaceBendOffsetRight;

/// @brief Field leftHandTargetRotation offset 0x50
 __declspec(property(get=__get_leftHandTargetRotation, put=__set_leftHandTargetRotation)) ::UnityEngine::Quaternion  leftHandTargetRotation;

/// @brief Field rightHandTargetRotation offset 0x60
 __declspec(property(get=__get_rightHandTargetRotation, put=__set_rightHandTargetRotation)) ::UnityEngine::Quaternion  rightHandTargetRotation;

/// @brief Field initiated offset 0x70
 __declspec(property(get=__get_initiated, put=__set_initiated)) bool  initiated;

constexpr void __set_ik(::RootMotion::FinalIK::FullBodyBipedIK*  value) ;

constexpr ::RootMotion::FinalIK::FullBodyBipedIK* __get_ik() ;

constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> __get_ik() const;

constexpr void __set_bendDirectionOffsetLeft(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bendDirectionOffsetLeft() ;

constexpr ::UnityEngine::Vector3 const& __get_bendDirectionOffsetLeft() const;

constexpr void __set_bendDirectionOffsetRight(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_bendDirectionOffsetRight() ;

constexpr ::UnityEngine::Vector3 const& __get_bendDirectionOffsetRight() const;

constexpr void __set_characterSpaceBendOffsetLeft(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_characterSpaceBendOffsetLeft() ;

constexpr ::UnityEngine::Vector3 const& __get_characterSpaceBendOffsetLeft() const;

constexpr void __set_characterSpaceBendOffsetRight(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_characterSpaceBendOffsetRight() ;

constexpr ::UnityEngine::Vector3 const& __get_characterSpaceBendOffsetRight() const;

constexpr void __set_leftHandTargetRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_leftHandTargetRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_leftHandTargetRotation() const;

constexpr void __set_rightHandTargetRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rightHandTargetRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rightHandTargetRotation() const;

constexpr void __set_initiated(bool  value) ;

constexpr bool& __get_initiated() ;

constexpr bool const& __get_initiated() const;

/// @brief Method LateUpdate addr 0x1251204 size 0x49c virtual false final false
inline void LateUpdate() ;

/// @brief Method OnPostFBBIK addr 0x12516a0 size 0x194 virtual false final false
inline void OnPostFBBIK() ;

/// @brief Method OnDestroy addr 0x1251834 size 0x10c virtual false final false
inline void OnDestroy() ;

static inline ::RootMotion::FinalIK::FBBIKArmBending* New_ctor() ;

/// @brief Method .ctor addr 0x1251940 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FBBIKArmBending", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FBBIKArmBending(FBBIKArmBending && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FBBIKArmBending", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FBBIKArmBending(FBBIKArmBending const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FBBIKArmBending()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FBBIKArmBending, 0x78>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FBBIKArmBending);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBBIKArmBending*, "RootMotion.FinalIK", "FBBIKArmBending");
