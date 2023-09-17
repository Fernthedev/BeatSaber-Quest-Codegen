#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct ConsoleSpecialKey;
}
// Type: System::ConsoleSpecialKey
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2521))
// CS Name: System.ConsoleSpecialKey
struct CORDL_TYPE ConsoleSpecialKey : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConsoleSpecialKey(int32_t value__) noexcept;


                    constexpr ConsoleSpecialKey(ConsoleSpecialKey const&) = default;
                    constexpr ConsoleSpecialKey(ConsoleSpecialKey&&) = default;
                    constexpr ConsoleSpecialKey& operator=(ConsoleSpecialKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConsoleSpecialKey& operator=(ConsoleSpecialKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConsoleSpecialKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConsoleSpecialKey_Unwrapped : int32_t {
__ControlC = 0,
__ControlBreak = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConsoleSpecialKey_Unwrapped () const noexcept {
return std::bit_cast<__ConsoleSpecialKey_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ControlC offset 0
static ::System::ConsoleSpecialKey const ControlC;

/// @brief Field ControlBreak offset 0
static ::System::ConsoleSpecialKey const ControlBreak;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleSpecialKey, "System", "ConsoleSpecialKey");
