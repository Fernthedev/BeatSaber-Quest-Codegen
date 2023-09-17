#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Zenject {
struct BindingInheritanceMethods;
}
// Type: Zenject::BindingInheritanceMethods
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10887))
// CS Name: Zenject.BindingInheritanceMethods
struct CORDL_TYPE BindingInheritanceMethods : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BindingInheritanceMethods(int32_t value__) noexcept;


                    constexpr BindingInheritanceMethods(BindingInheritanceMethods const&) = default;
                    constexpr BindingInheritanceMethods(BindingInheritanceMethods&&) = default;
                    constexpr BindingInheritanceMethods& operator=(BindingInheritanceMethods const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BindingInheritanceMethods& operator=(BindingInheritanceMethods&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BindingInheritanceMethods(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BindingInheritanceMethods_Unwrapped : int32_t {
__None = 0,
__CopyIntoAll = 1,
__CopyDirectOnly = 2,
__MoveIntoAll = 3,
__MoveDirectOnly = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BindingInheritanceMethods_Unwrapped () const noexcept {
return std::bit_cast<__BindingInheritanceMethods_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Zenject::BindingInheritanceMethods const None;

/// @brief Field CopyIntoAll offset 0
static ::Zenject::BindingInheritanceMethods const CopyIntoAll;

/// @brief Field CopyDirectOnly offset 0
static ::Zenject::BindingInheritanceMethods const CopyDirectOnly;

/// @brief Field MoveIntoAll offset 0
static ::Zenject::BindingInheritanceMethods const MoveIntoAll;

/// @brief Field MoveDirectOnly offset 0
static ::Zenject::BindingInheritanceMethods const MoveDirectOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingInheritanceMethods, "Zenject", "BindingInheritanceMethods");
