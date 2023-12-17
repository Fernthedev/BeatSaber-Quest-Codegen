#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaValue)
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
struct YogaUnit;
}
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaValue);
// Type: UnityEngine.Yoga::YogaValue
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15364))
// CS Name: ::UnityEngine.Yoga::YogaValue
struct CORDL_TYPE YogaValue : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) float_t  value;

/// @brief Field unit offset 0x4
 __declspec(property(get=__get_unit, put=__set_unit)) ::UnityEngine::Yoga::YogaUnit  unit;

 __declspec(property(get=get_Unit)) ::UnityEngine::Yoga::YogaUnit  Unit;

 __declspec(property(get=get_Value)) float_t  Value;

constexpr void __set_value(float_t  value) ;

constexpr float_t& __get_value() ;

constexpr float_t const& __get_value() const;

constexpr void __set_unit(::UnityEngine::Yoga::YogaUnit  value) ;

constexpr ::UnityEngine::Yoga::YogaUnit& __get_unit() ;

constexpr ::UnityEngine::Yoga::YogaUnit const& __get_unit() const;

/// @brief Method get_Unit addr 0x2ea1fd4 size 0x8 virtual false final false
inline ::UnityEngine::Yoga::YogaUnit get_Unit() ;

/// @brief Method get_Value addr 0x2ea1fdc size 0x8 virtual false final false
inline float_t get_Value() ;

/// @brief Method Point addr 0x2ea5184 size 0x24 virtual false final false
static inline ::UnityEngine::Yoga::YogaValue Point(float_t  value) ;

/// @brief Method Equals addr 0x2ea51a8 size 0x60 virtual false final false
inline bool Equals(::UnityEngine::Yoga::YogaValue  other) ;

/// @brief Method Equals addr 0x2ea5208 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2ea5280 size 0x3c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Auto addr 0x2ea52bc size 0xc virtual false final false
static inline ::UnityEngine::Yoga::YogaValue Auto() ;

/// @brief Method Percent addr 0x2ea52c8 size 0x28 virtual false final false
static inline ::UnityEngine::Yoga::YogaValue Percent(float_t  value) ;

/// @brief Method op_Implicit addr 0x2ea52f0 size 0x2c virtual false final false
static inline ::UnityEngine::Yoga::YogaValue op_Implicit___UnityEngine__Yoga__YogaValue(float_t  pointValue) ;

// Ctor Parameters [CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "::UnityEngine::Yoga::YogaUnit", modifiers: "", def_value: None }]
constexpr YogaValue(float_t  value, ::UnityEngine::Yoga::YogaUnit  unit) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit YogaValue(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 YogaValue()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaValue, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaValue, "UnityEngine.Yoga", "YogaValue");
