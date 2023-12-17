#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendMessageOptions)
// Forward declare root types
namespace UnityEngine {
struct SendMessageOptions;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SendMessageOptions);
// Type: UnityEngine::SendMessageOptions
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10031))
// CS Name: ::UnityEngine::SendMessageOptions
struct CORDL_TYPE SendMessageOptions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SendMessageOptions_Unwrapped
enum struct __SendMessageOptions_Unwrapped : int32_t {
__E_RequireReceiver = static_cast<int32_t>(0x0),
__E_DontRequireReceiver = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field RequireReceiver value: static_cast<int32_t>(0x0)
static ::UnityEngine::SendMessageOptions const RequireReceiver;

/// @brief Field DontRequireReceiver value: static_cast<int32_t>(0x1)
static ::UnityEngine::SendMessageOptions const DontRequireReceiver;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SendMessageOptions_Unwrapped () const noexcept {
return std::bit_cast<__SendMessageOptions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SendMessageOptions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SendMessageOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SendMessageOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SendMessageOptions, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SendMessageOptions, "UnityEngine", "SendMessageOptions");
