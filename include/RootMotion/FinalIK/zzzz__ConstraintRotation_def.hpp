#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
CORDL_MODULE_EXPORT(ConstraintRotation)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintRotation;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::ConstraintRotation);
// Type: RootMotion.FinalIK::ConstraintRotation
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12508))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12511))
// CS Name: ::RootMotion.FinalIK::ConstraintRotation*
class CORDL_TYPE ConstraintRotation : public ::RootMotion::FinalIK::Constraint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::RootMotion::FinalIK::Constraint)]{};

/// @brief Field rotation offset 0x1c
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

/// @brief Method UpdateConstraint addr 0x124294c size 0x7c virtual true final false
inline void UpdateConstraint() ;

static inline ::RootMotion::FinalIK::ConstraintRotation* New_ctor() ;

/// @brief Method .ctor addr 0x12429c8 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::RootMotion::FinalIK::ConstraintRotation* New_ctor(::UnityEngine::Transform*  transform) ;

/// @brief Method .ctor addr 0x12429d0 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::Transform*  transform) ;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstraintRotation(ConstraintRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintRotation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstraintRotation(ConstraintRotation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConstraintRotation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::ConstraintRotation, 0x30>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::ConstraintRotation);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::ConstraintRotation*, "RootMotion.FinalIK", "ConstraintRotation");
