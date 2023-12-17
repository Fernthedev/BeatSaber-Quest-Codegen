#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputedTransitionProperty)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::ComputedTransitionProperty);
// Type: UnityEngine.UIElements::ComputedTransitionProperty
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7287))
// CS Name: ::UnityEngine.UIElements::ComputedTransitionProperty
struct CORDL_TYPE ComputedTransitionProperty : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id;

/// @brief Field durationMs offset 0x4
 __declspec(property(get=__get_durationMs, put=__set_durationMs)) int32_t  durationMs;

/// @brief Field delayMs offset 0x8
 __declspec(property(get=__get_delayMs, put=__set_delayMs)) int32_t  delayMs;

/// @brief Field easingCurve offset 0x10
 __declspec(property(get=__get_easingCurve, put=__set_easingCurve)) ::System::Func_2<float_t,float_t>*  easingCurve;

constexpr void __set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId  value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId& __get_id() ;

constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId const& __get_id() const;

constexpr void __set_durationMs(int32_t  value) ;

constexpr int32_t& __get_durationMs() ;

constexpr int32_t const& __get_durationMs() const;

constexpr void __set_delayMs(int32_t  value) ;

constexpr int32_t& __get_delayMs() ;

constexpr int32_t const& __get_delayMs() const;

constexpr void __set_easingCurve(::System::Func_2<float_t,float_t>*  value) ;

constexpr ::System::Func_2<float_t,float_t>* __get_easingCurve() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t,float_t>*> __get_easingCurve() const;

// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: None }]
constexpr ComputedTransitionProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyId  id, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ComputedTransitionProperty(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ComputedTransitionProperty()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ComputedTransitionProperty, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ComputedTransitionProperty, "UnityEngine.UIElements", "ComputedTransitionProperty");
