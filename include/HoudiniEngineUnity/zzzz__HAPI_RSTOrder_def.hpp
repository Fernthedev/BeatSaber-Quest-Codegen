#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_RSTOrder;
}
// Type: HoudiniEngineUnity::HAPI_RSTOrder
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9655))
// CS Name: HoudiniEngineUnity.HAPI_RSTOrder
struct CORDL_TYPE HAPI_RSTOrder : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_RSTOrder(int32_t value__) noexcept;


                    constexpr HAPI_RSTOrder(HAPI_RSTOrder const&) = default;
                    constexpr HAPI_RSTOrder(HAPI_RSTOrder&&) = default;
                    constexpr HAPI_RSTOrder& operator=(HAPI_RSTOrder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_RSTOrder& operator=(HAPI_RSTOrder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_RSTOrder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_RSTOrder_Unwrapped : int32_t {
__HAPI_TRS = 0,
__HAPI_TSR = 1,
__HAPI_RTS = 2,
__HAPI_RST = 3,
__HAPI_STR = 4,
__HAPI_SRT = 5,
__HAPI_RSTORDER_DEFAULT = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_RSTOrder_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_RSTOrder_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_TRS offset 0
static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_TRS;

/// @brief Field HAPI_TSR offset 0
static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_TSR;

/// @brief Field HAPI_RTS offset 0
static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_RTS;

/// @brief Field HAPI_RST offset 0
static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_RST;

/// @brief Field HAPI_STR offset 0
static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_STR;

/// @brief Field HAPI_SRT offset 0
static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_SRT;

/// @brief Field HAPI_RSTORDER_DEFAULT offset 0
static ::HoudiniEngineUnity::HAPI_RSTOrder const HAPI_RSTORDER_DEFAULT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_RSTOrder, "HoudiniEngineUnity", "HAPI_RSTOrder");
