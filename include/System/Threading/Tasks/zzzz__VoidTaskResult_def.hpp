#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VoidTaskResult)
// Forward declare root types
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::VoidTaskResult);
// Type: System.Threading.Tasks::VoidTaskResult
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2794))
// CS Name: ::System.Threading.Tasks::VoidTaskResult
struct CORDL_TYPE VoidTaskResult : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VoidTaskResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VoidTaskResult()  = default;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::VoidTaskResult, 0x1>, "Size mismatch!");

} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::VoidTaskResult, "System.Threading.Tasks", "VoidTaskResult");
