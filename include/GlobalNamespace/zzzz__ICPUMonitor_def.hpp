#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ICPUMonitor)
namespace GlobalNamespace {
class IPollable;
}
// Forward declare root types
namespace GlobalNamespace {
class ICPUMonitor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ICPUMonitor);
// Type: ::ICPUMonitor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12784))
// CS Name: ::ICPUMonitor*
class CORDL_TYPE ICPUMonitor {
public:
// Declarations
 __declspec(property(get=get_utilization)) float_t  utilization;

/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr operator  ::GlobalNamespace::IPollable*() noexcept;

/// @brief Method get_utilization addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_utilization() ;

// Ctor Parameters [CppParam { name: "", ty: "ICPUMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ICPUMonitor(ICPUMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ICPUMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICPUMonitor(ICPUMonitor const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ICPUMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICPUMonitor*, "", "ICPUMonitor");
