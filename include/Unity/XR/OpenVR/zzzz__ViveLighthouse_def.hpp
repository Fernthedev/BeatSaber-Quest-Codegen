#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
CORDL_MODULE_EXPORT(ViveLighthouse)
// Forward declare root types
namespace Unity::XR::OpenVR {
class ViveLighthouse;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::OpenVR::ViveLighthouse);
// Type: Unity.XR.OpenVR::ViveLighthouse
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6289))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6118))
// CS Name: ::Unity.XR.OpenVR::ViveLighthouse*
class CORDL_TYPE ViveLighthouse : public ::UnityEngine::InputSystem::TrackedDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x178};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x178 - sizeof(::UnityEngine::InputSystem::TrackedDevice)]{};

static inline ::Unity::XR::OpenVR::ViveLighthouse* New_ctor() ;

/// @brief Method .ctor addr 0x2a345bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ViveLighthouse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ViveLighthouse(ViveLighthouse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ViveLighthouse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ViveLighthouse(ViveLighthouse const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ViveLighthouse()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::OpenVR::ViveLighthouse, 0x178>, "Size mismatch!");

} // namespace end def Unity::XR::OpenVR
NEED_NO_BOX(::Unity::XR::OpenVR::ViveLighthouse);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::ViveLighthouse*, "Unity.XR.OpenVR", "ViveLighthouse");
