#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DrivenRectTransformTracker)
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct DrivenTransformProperties;
}
// Forward declare root types
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
// Write type traits
MARK_VAL_T(::UnityEngine::DrivenRectTransformTracker);
// Type: UnityEngine::DrivenRectTransformTracker
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10278))
// CS Name: ::UnityEngine::DrivenRectTransformTracker
struct CORDL_TYPE DrivenRectTransformTracker : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Method Add addr 0x2ce2798 size 0x4 virtual false final false
inline void Add(::UnityEngine::Object*  driver, ::UnityEngine::RectTransform*  rectTransform, ::UnityEngine::DrivenTransformProperties  drivenProperties) ;

/// @brief Method Clear addr 0x2ce279c size 0x4 virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DrivenRectTransformTracker(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DrivenRectTransformTracker()  = default;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DrivenRectTransformTracker, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DrivenRectTransformTracker, "UnityEngine", "DrivenRectTransformTracker");
