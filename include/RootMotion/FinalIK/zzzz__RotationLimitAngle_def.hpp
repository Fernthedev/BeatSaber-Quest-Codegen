#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationLimitAngle)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitAngle;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::RotationLimitAngle);
// Type: RootMotion.FinalIK::RotationLimitAngle
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12622))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12623))
// CS Name: ::RootMotion.FinalIK::RotationLimitAngle*
class CORDL_TYPE RotationLimitAngle : public ::RootMotion::FinalIK::RotationLimit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::RootMotion::FinalIK::RotationLimit)]{};

/// @brief Field limit offset 0x38
 __declspec(property(get=__get_limit, put=__set_limit)) float_t  limit;

/// @brief Field twistLimit offset 0x3c
 __declspec(property(get=__get_twistLimit, put=__set_twistLimit)) float_t  twistLimit;

constexpr void __set_limit(float_t  value) ;

constexpr float_t& __get_limit() ;

constexpr float_t const& __get_limit() const;

constexpr void __set_twistLimit(float_t  value) ;

constexpr float_t& __get_twistLimit() ;

constexpr float_t const& __get_twistLimit() const;

/// @brief Method OpenUserManual addr 0x128f62c size 0x44 virtual false final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x128f670 size 0x44 virtual false final false
inline void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x128f6b4 size 0x44 virtual false final false
inline void SupportGroup() ;

/// @brief Method ASThread addr 0x128f6f8 size 0x44 virtual false final false
inline void ASThread() ;

/// @brief Method LimitRotation addr 0x128f73c size 0x38 virtual true final false
inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method LimitSwing addr 0x128f774 size 0x324 virtual false final false
inline ::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion  rotation) ;

static inline ::RootMotion::FinalIK::RotationLimitAngle* New_ctor() ;

/// @brief Method .ctor addr 0x128fa98 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitAngle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationLimitAngle(RotationLimitAngle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitAngle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationLimitAngle(RotationLimitAngle const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RotationLimitAngle()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::RotationLimitAngle, 0x40>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitAngle);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitAngle*, "RootMotion.FinalIK", "RotationLimitAngle");
