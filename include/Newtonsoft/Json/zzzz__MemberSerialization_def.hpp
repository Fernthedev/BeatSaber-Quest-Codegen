#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct MemberSerialization;
}
// Type: Newtonsoft.Json::MemberSerialization
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11763))
// CS Name: Newtonsoft.Json.MemberSerialization
struct CORDL_TYPE MemberSerialization : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MemberSerialization(int32_t value__) noexcept;


                    constexpr MemberSerialization(MemberSerialization const&) = default;
                    constexpr MemberSerialization(MemberSerialization&&) = default;
                    constexpr MemberSerialization& operator=(MemberSerialization const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MemberSerialization& operator=(MemberSerialization&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MemberSerialization(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MemberSerialization_Unwrapped : int32_t {
__OptOut = 0,
__OptIn = 1,
__Fields = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MemberSerialization_Unwrapped () const noexcept {
return std::bit_cast<__MemberSerialization_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OptOut offset 0
static ::Newtonsoft::Json::MemberSerialization const OptOut;

/// @brief Field OptIn offset 0
static ::Newtonsoft::Json::MemberSerialization const OptIn;

/// @brief Field Fields offset 0
static ::Newtonsoft::Json::MemberSerialization const Fields;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::MemberSerialization, "Newtonsoft.Json", "MemberSerialization");
