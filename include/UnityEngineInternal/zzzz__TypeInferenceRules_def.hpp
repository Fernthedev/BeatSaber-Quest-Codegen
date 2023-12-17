#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeInferenceRules)
// Forward declare root types
namespace UnityEngineInternal {
struct TypeInferenceRules;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::TypeInferenceRules);
// Type: UnityEngineInternal::TypeInferenceRules
namespace UnityEngineInternal {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9961))
// CS Name: ::UnityEngineInternal::TypeInferenceRules
struct CORDL_TYPE TypeInferenceRules : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TypeInferenceRules_Unwrapped
enum struct __TypeInferenceRules_Unwrapped : int32_t {
__E_TypeReferencedByFirstArgument = static_cast<int32_t>(0x0),
__E_TypeReferencedBySecondArgument = static_cast<int32_t>(0x1),
__E_ArrayOfTypeReferencedByFirstArgument = static_cast<int32_t>(0x2),
__E_TypeOfFirstArgument = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field TypeReferencedByFirstArgument value: static_cast<int32_t>(0x0)
static ::UnityEngineInternal::TypeInferenceRules const TypeReferencedByFirstArgument;

/// @brief Field TypeReferencedBySecondArgument value: static_cast<int32_t>(0x1)
static ::UnityEngineInternal::TypeInferenceRules const TypeReferencedBySecondArgument;

/// @brief Field ArrayOfTypeReferencedByFirstArgument value: static_cast<int32_t>(0x2)
static ::UnityEngineInternal::TypeInferenceRules const ArrayOfTypeReferencedByFirstArgument;

/// @brief Field TypeOfFirstArgument value: static_cast<int32_t>(0x3)
static ::UnityEngineInternal::TypeInferenceRules const TypeOfFirstArgument;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeInferenceRules_Unwrapped () const noexcept {
return std::bit_cast<__TypeInferenceRules_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeInferenceRules(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TypeInferenceRules(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TypeInferenceRules()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::TypeInferenceRules, 0x4>, "Size mismatch!");

} // namespace end def UnityEngineInternal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::TypeInferenceRules, "UnityEngineInternal", "TypeInferenceRules");
