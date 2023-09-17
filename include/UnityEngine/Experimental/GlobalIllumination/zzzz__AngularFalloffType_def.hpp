#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct AngularFalloffType;
}
// Type: UnityEngine.Experimental.GlobalIllumination::AngularFalloffType
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10325))
// CS Name: UnityEngine.Experimental.GlobalIllumination.AngularFalloffType
struct CORDL_TYPE AngularFalloffType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AngularFalloffType(uint8_t value__) noexcept;


                    constexpr AngularFalloffType(AngularFalloffType const&) = default;
                    constexpr AngularFalloffType(AngularFalloffType&&) = default;
                    constexpr AngularFalloffType& operator=(AngularFalloffType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AngularFalloffType& operator=(AngularFalloffType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AngularFalloffType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AngularFalloffType_Unwrapped : uint8_t {
__LUT = 0u,
__AnalyticAndInnerAngle = 1u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AngularFalloffType_Unwrapped () const noexcept {
return std::bit_cast<__AngularFalloffType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field LUT offset 0
static ::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType const LUT;

/// @brief Field AnalyticAndInnerAngle offset 0
static ::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType const AnalyticAndInnerAngle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType, "UnityEngine.Experimental.GlobalIllumination", "AngularFalloffType");
