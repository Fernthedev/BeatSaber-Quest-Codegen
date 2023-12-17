#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__RotationLimit_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationLimitHinge)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class RotationLimitHinge;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::RotationLimitHinge);
// Type: RootMotion.FinalIK::RotationLimitHinge
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12622))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12624))
// CS Name: ::RootMotion.FinalIK::RotationLimitHinge*
class CORDL_TYPE RotationLimitHinge : public ::RootMotion::FinalIK::RotationLimit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::RootMotion::FinalIK::RotationLimit)]{};

/// @brief Field useLimits offset 0x38
 __declspec(property(get=__get_useLimits, put=__set_useLimits)) bool  useLimits;

/// @brief Field min offset 0x3c
 __declspec(property(get=__get_min, put=__set_min)) float_t  min;

/// @brief Field max offset 0x40
 __declspec(property(get=__get_max, put=__set_max)) float_t  max;

/// @brief Field zeroAxisDisplayOffset offset 0x44
 __declspec(property(get=__get_zeroAxisDisplayOffset, put=__set_zeroAxisDisplayOffset)) float_t  zeroAxisDisplayOffset;

/// @brief Field lastRotation offset 0x48
 __declspec(property(get=__get_lastRotation, put=__set_lastRotation)) ::UnityEngine::Quaternion  lastRotation;

/// @brief Field lastAngle offset 0x58
 __declspec(property(get=__get_lastAngle, put=__set_lastAngle)) float_t  lastAngle;

constexpr void __set_useLimits(bool  value) ;

constexpr bool& __get_useLimits() ;

constexpr bool const& __get_useLimits() const;

constexpr void __set_min(float_t  value) ;

constexpr float_t& __get_min() ;

constexpr float_t const& __get_min() const;

constexpr void __set_max(float_t  value) ;

constexpr float_t& __get_max() ;

constexpr float_t const& __get_max() const;

constexpr void __set_zeroAxisDisplayOffset(float_t  value) ;

constexpr float_t& __get_zeroAxisDisplayOffset() ;

constexpr float_t const& __get_zeroAxisDisplayOffset() const;

constexpr void __set_lastRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_lastRotation() ;

constexpr ::UnityEngine::Quaternion const& __get_lastRotation() const;

constexpr void __set_lastAngle(float_t  value) ;

constexpr float_t& __get_lastAngle() ;

constexpr float_t const& __get_lastAngle() const;

/// @brief Method OpenUserManual addr 0x128faa8 size 0x44 virtual false final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x128faec size 0x44 virtual false final false
inline void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x128fb30 size 0x44 virtual false final false
inline void SupportGroup() ;

/// @brief Method ASThread addr 0x128fb74 size 0x44 virtual false final false
inline void ASThread() ;

/// @brief Method LimitRotation addr 0x128fbb8 size 0x1c virtual true final false
inline ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion  rotation) ;

/// @brief Method LimitHinge addr 0x128fbd4 size 0x248 virtual false final false
inline ::UnityEngine::Quaternion LimitHinge(::UnityEngine::Quaternion  rotation) ;

static inline ::RootMotion::FinalIK::RotationLimitHinge* New_ctor() ;

/// @brief Method .ctor addr 0x128fe1c size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitHinge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationLimitHinge(RotationLimitHinge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationLimitHinge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationLimitHinge(RotationLimitHinge const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RotationLimitHinge()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::RotationLimitHinge, 0x60>, "Size mismatch!");

} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitHinge);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitHinge*, "RootMotion.FinalIK", "RotationLimitHinge");
