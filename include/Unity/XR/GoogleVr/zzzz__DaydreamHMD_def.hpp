#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(DaydreamHMD)
// Forward declare root types
namespace Unity::XR::GoogleVr {
class DaydreamHMD;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::GoogleVr::DaydreamHMD);
// Type: Unity.XR.GoogleVr::DaydreamHMD
namespace Unity::XR::GoogleVr {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6324))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6122))
// CS Name: ::Unity.XR.GoogleVr::DaydreamHMD*
class CORDL_TYPE DaydreamHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1a8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1a8 - sizeof(::UnityEngine::InputSystem::XR::XRHMD)]{};

static inline ::Unity::XR::GoogleVr::DaydreamHMD* New_ctor() ;

/// @brief Method .ctor addr 0x2a34b38 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DaydreamHMD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DaydreamHMD(DaydreamHMD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DaydreamHMD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DaydreamHMD(DaydreamHMD const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DaydreamHMD()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::GoogleVr::DaydreamHMD, 0x1a8>, "Size mismatch!");

} // namespace end def Unity::XR::GoogleVr
NEED_NO_BOX(::Unity::XR::GoogleVr::DaydreamHMD);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::GoogleVr::DaydreamHMD*, "Unity.XR.GoogleVr", "DaydreamHMD");
