#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_TimelineOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_TimelineOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_TimelineOptions);
// Type: HoudiniEngineUnity::HAPI_TimelineOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9730))
// CS Name: ::HoudiniEngineUnity::HAPI_TimelineOptions
struct CORDL_TYPE HAPI_TimelineOptions : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field fps offset 0x0
 __declspec(property(get=__get_fps, put=__set_fps)) float_t  fps;

/// @brief Field startTime offset 0x4
 __declspec(property(get=__get_startTime, put=__set_startTime)) float_t  startTime;

/// @brief Field endTime offset 0x8
 __declspec(property(get=__get_endTime, put=__set_endTime)) float_t  endTime;

constexpr void __set_fps(float_t  value) ;

constexpr float_t& __get_fps() ;

constexpr float_t const& __get_fps() const;

constexpr void __set_startTime(float_t  value) ;

constexpr float_t& __get_startTime() ;

constexpr float_t const& __get_startTime() const;

constexpr void __set_endTime(float_t  value) ;

constexpr float_t& __get_endTime() ;

constexpr float_t const& __get_endTime() const;

// Ctor Parameters [CppParam { name: "fps", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_TimelineOptions(float_t  fps, float_t  startTime, float_t  endTime) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_TimelineOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_TimelineOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_TimelineOptions, 0xc>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_TimelineOptions, "HoudiniEngineUnity", "HAPI_TimelineOptions");
