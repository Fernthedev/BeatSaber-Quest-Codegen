#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StackCrawlMark)
// Forward declare root types
namespace System::Threading {
struct StackCrawlMark;
}
// Write type traits
MARK_VAL_T(::System::Threading::StackCrawlMark);
// Type: System.Threading::StackCrawlMark
namespace System::Threading {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2724))
// CS Name: ::System.Threading::StackCrawlMark
struct CORDL_TYPE StackCrawlMark : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StackCrawlMark_Unwrapped
enum struct __StackCrawlMark_Unwrapped : int32_t {
__E_LookForMe = static_cast<int32_t>(0x0),
__E_LookForMyCaller = static_cast<int32_t>(0x1),
__E_LookForMyCallersCaller = static_cast<int32_t>(0x2),
__E_LookForThread = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LookForMe value: static_cast<int32_t>(0x0)
static ::System::Threading::StackCrawlMark const LookForMe;

/// @brief Field LookForMyCaller value: static_cast<int32_t>(0x1)
static ::System::Threading::StackCrawlMark const LookForMyCaller;

/// @brief Field LookForMyCallersCaller value: static_cast<int32_t>(0x2)
static ::System::Threading::StackCrawlMark const LookForMyCallersCaller;

/// @brief Field LookForThread value: static_cast<int32_t>(0x3)
static ::System::Threading::StackCrawlMark const LookForThread;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __StackCrawlMark_Unwrapped () const noexcept {
return std::bit_cast<__StackCrawlMark_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StackCrawlMark(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StackCrawlMark(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StackCrawlMark()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::StackCrawlMark, 0x4>, "Size mismatch!");

} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::StackCrawlMark, "System.Threading", "StackCrawlMark");
