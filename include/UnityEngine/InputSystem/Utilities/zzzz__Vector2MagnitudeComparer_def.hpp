#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2MagnitudeComparer)
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct Vector2MagnitudeComparer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer);
// Type: UnityEngine.InputSystem.Utilities::Vector2MagnitudeComparer
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6661))
// CS Name: ::UnityEngine.InputSystem.Utilities::Vector2MagnitudeComparer
struct CORDL_TYPE Vector2MagnitudeComparer : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::Vector2>*() ;

/// @brief Method Compare addr 0x2b0f144 size 0x30 virtual true final true
inline int32_t Compare(::UnityEngine::Vector2  x, ::UnityEngine::Vector2  y) ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector2MagnitudeComparer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector2MagnitudeComparer()  = default;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Vector2MagnitudeComparer, "UnityEngine.InputSystem.Utilities", "Vector2MagnitudeComparer");
