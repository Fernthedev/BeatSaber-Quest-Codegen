#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
// Type: UnityEngine::MotionVectorGenerationMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10067))
// CS Name: UnityEngine.MotionVectorGenerationMode
struct CORDL_TYPE MotionVectorGenerationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MotionVectorGenerationMode(int32_t value__) noexcept;


                    constexpr MotionVectorGenerationMode(MotionVectorGenerationMode const&) = default;
                    constexpr MotionVectorGenerationMode(MotionVectorGenerationMode&&) = default;
                    constexpr MotionVectorGenerationMode& operator=(MotionVectorGenerationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MotionVectorGenerationMode& operator=(MotionVectorGenerationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MotionVectorGenerationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MotionVectorGenerationMode_Unwrapped : int32_t {
__Camera = 0,
__Object = 1,
__ForceNoMotion = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MotionVectorGenerationMode_Unwrapped () const noexcept {
return std::bit_cast<__MotionVectorGenerationMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Camera offset 0
static ::UnityEngine::MotionVectorGenerationMode const Camera;

/// @brief Field Object offset 0
static ::UnityEngine::MotionVectorGenerationMode const Object;

/// @brief Field ForceNoMotion offset 0
static ::UnityEngine::MotionVectorGenerationMode const ForceNoMotion;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MotionVectorGenerationMode, "UnityEngine", "MotionVectorGenerationMode");
