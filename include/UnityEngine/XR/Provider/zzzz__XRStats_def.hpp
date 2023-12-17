#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRStats)
namespace UnityEngine {
class IntegratedSubsystem;
}
// Forward declare root types
namespace UnityEngine::XR::Provider {
class XRStats;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Provider::XRStats);
// Type: UnityEngine.XR.Provider::XRStats
namespace UnityEngine::XR::Provider {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15645))
// CS Name: ::UnityEngine.XR.Provider::XRStats*
class CORDL_TYPE XRStats : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method TryGetStat addr 0x2eb40c0 size 0x5c virtual false final false
static inline bool TryGetStat(::UnityEngine::IntegratedSubsystem*  xrSubsystem, ::StringW  tag, ByRef<float_t>  value) ;

/// @brief Method TryGetStat_Internal addr 0x2eb411c size 0x54 virtual false final false
static inline bool TryGetStat_Internal(::cordl_internals::intptr_t  ptr, ::StringW  tag, ByRef<float_t>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "XRStats", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRStats(XRStats && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRStats", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRStats(XRStats const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRStats()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Provider::XRStats, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR::Provider
NEED_NO_BOX(::UnityEngine::XR::Provider::XRStats);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Provider::XRStats*, "UnityEngine.XR.Provider", "XRStats");
