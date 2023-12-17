#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BRECORD)
// Forward declare root types
namespace System {
struct BRECORD;
}
// Write type traits
MARK_VAL_T(::System::BRECORD);
// Type: System::BRECORD
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2641))
// CS Name: ::System::BRECORD
struct CORDL_TYPE BRECORD : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field pvRecord offset 0x0
 __declspec(property(get=__get_pvRecord, put=__set_pvRecord)) ::cordl_internals::intptr_t  pvRecord;

/// @brief Field pRecInfo offset 0x8
 __declspec(property(get=__get_pRecInfo, put=__set_pRecInfo)) ::cordl_internals::intptr_t  pRecInfo;

constexpr void __set_pvRecord(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_pvRecord() ;

constexpr ::cordl_internals::intptr_t const& __get_pvRecord() const;

constexpr void __set_pRecInfo(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_pRecInfo() ;

constexpr ::cordl_internals::intptr_t const& __get_pRecInfo() const;

// Ctor Parameters [CppParam { name: "pvRecord", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "pRecInfo", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr BRECORD(::cordl_internals::intptr_t  pvRecord, ::cordl_internals::intptr_t  pRecInfo) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BRECORD(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BRECORD()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::BRECORD, 0x10>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::BRECORD, "System", "BRECORD");
