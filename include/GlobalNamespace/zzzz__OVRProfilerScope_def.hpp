#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRProfilerScope)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRProfilerScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRProfilerScope);
// Type: ::OVRProfilerScope
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8154))
// CS Name: ::OVRProfilerScope
struct CORDL_TYPE OVRProfilerScope : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method .ctor addr 0x27b90ec size 0x4 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method System.IDisposable.Dispose addr 0x27b90f0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRProfilerScope(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRProfilerScope()  = default;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRProfilerScope, 0x1>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRProfilerScope, "", "OVRProfilerScope");
