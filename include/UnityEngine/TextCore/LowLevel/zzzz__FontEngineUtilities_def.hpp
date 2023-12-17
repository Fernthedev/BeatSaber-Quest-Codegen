#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontEngineUtilities)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineUtilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::FontEngineUtilities);
// Type: UnityEngine.TextCore.LowLevel::FontEngineUtilities
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15538))
// CS Name: ::UnityEngine.TextCore.LowLevel::FontEngineUtilities
struct CORDL_TYPE FontEngineUtilities : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Method MaxValue addr 0x2d2231c size 0x20 virtual false final false
static inline int32_t MaxValue(int32_t  a, int32_t  b, int32_t  c) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontEngineUtilities(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontEngineUtilities()  = default;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontEngineUtilities, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontEngineUtilities, "UnityEngine.TextCore.LowLevel", "FontEngineUtilities");
