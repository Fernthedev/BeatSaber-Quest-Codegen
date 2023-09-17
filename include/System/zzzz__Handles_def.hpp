#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct Handles;
}
// Type: System::Handles
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2647))
// CS Name: System.Handles
struct CORDL_TYPE Handles : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Handles(int32_t value__) noexcept;


                    constexpr Handles(Handles const&) = default;
                    constexpr Handles(Handles&&) = default;
                    constexpr Handles& operator=(Handles const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Handles& operator=(Handles&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Handles(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Handles_Unwrapped : int32_t {
__STD_INPUT = -10,
__STD_OUTPUT = -11,
__STD_ERROR = -12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Handles_Unwrapped () const noexcept {
return std::bit_cast<__Handles_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field STD_INPUT offset 0
static ::System::Handles const STD_INPUT;

/// @brief Field STD_OUTPUT offset 0
static ::System::Handles const STD_OUTPUT;

/// @brief Field STD_ERROR offset 0
static ::System::Handles const STD_ERROR;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Handles, "System", "Handles");
