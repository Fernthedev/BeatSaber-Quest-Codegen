#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EventDebuggerLogExecuteDefaultAction)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDebuggerLogExecuteDefaultAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EventDebuggerLogExecuteDefaultAction);
// Type: UnityEngine.UIElements::EventDebuggerLogExecuteDefaultAction
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7353))
// CS Name: ::UnityEngine.UIElements::EventDebuggerLogExecuteDefaultAction
struct CORDL_TYPE EventDebuggerLogExecuteDefaultAction : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method .ctor addr 0x2e83508 size 0x4 virtual false final false
inline void _ctor(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method Dispose addr 0x2e8350c size 0x4 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EventDebuggerLogExecuteDefaultAction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EventDebuggerLogExecuteDefaultAction()  = default;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EventDebuggerLogExecuteDefaultAction, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDebuggerLogExecuteDefaultAction, "UnityEngine.UIElements", "EventDebuggerLogExecuteDefaultAction");
