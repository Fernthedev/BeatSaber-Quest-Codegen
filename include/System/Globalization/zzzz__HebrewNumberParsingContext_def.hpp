#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumberParsingContext)
namespace System::Globalization {
struct __HebrewNumber__HS;
}
// Forward declare root types
namespace System::Globalization {
struct HebrewNumberParsingContext;
}
// Write type traits
MARK_VAL_T(::System::Globalization::HebrewNumberParsingContext);
// Type: System.Globalization::HebrewNumberParsingContext
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3673))
// CS Name: ::System.Globalization::HebrewNumberParsingContext
struct CORDL_TYPE HebrewNumberParsingContext : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field state offset 0x0
 __declspec(property(get=__get_state, put=__set_state)) ::System::Globalization::__HebrewNumber__HS  state;

/// @brief Field result offset 0x4
 __declspec(property(get=__get_result, put=__set_result)) int32_t  result;

constexpr void __set_state(::System::Globalization::__HebrewNumber__HS  value) ;

constexpr ::System::Globalization::__HebrewNumber__HS& __get_state() ;

constexpr ::System::Globalization::__HebrewNumber__HS const& __get_state() const;

constexpr void __set_result(int32_t  value) ;

constexpr int32_t& __get_result() ;

constexpr int32_t const& __get_result() const;

/// @brief Method .ctor addr 0x2552e60 size 0xc virtual false final false
inline void _ctor(int32_t  result) ;

// Ctor Parameters [CppParam { name: "state", ty: "::System::Globalization::__HebrewNumber__HS", modifiers: "", def_value: None }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HebrewNumberParsingContext(::System::Globalization::__HebrewNumber__HS  state, int32_t  result) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HebrewNumberParsingContext(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HebrewNumberParsingContext()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumberParsingContext, 0x8>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumberParsingContext, "System.Globalization", "HebrewNumberParsingContext");
