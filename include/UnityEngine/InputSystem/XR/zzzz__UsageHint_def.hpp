#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UsageHint)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct UsageHint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::UsageHint);
// Type: UnityEngine.InputSystem.XR::UsageHint
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6334))
// CS Name: ::UnityEngine.InputSystem.XR::UsageHint
struct CORDL_TYPE UsageHint : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field content offset 0x0
 __declspec(property(get=__get_content, put=__set_content)) ::StringW  content;

constexpr void __set_content(::StringW  value) ;

constexpr ::StringW& __get_content() ;

constexpr ::StringW const& __get_content() const;

// Ctor Parameters [CppParam { name: "content", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UsageHint(::StringW  content) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UsageHint(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UsageHint()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::UsageHint, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::UsageHint, "UnityEngine.InputSystem.XR", "UsageHint");
