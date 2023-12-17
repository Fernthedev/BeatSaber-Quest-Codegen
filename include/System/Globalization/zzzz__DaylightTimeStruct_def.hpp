#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DaylightTimeStruct)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
struct DaylightTimeStruct;
}
// Write type traits
MARK_VAL_T(::System::Globalization::DaylightTimeStruct);
// Type: System.Globalization::DaylightTimeStruct
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3672))
// CS Name: ::System.Globalization::DaylightTimeStruct
struct CORDL_TYPE DaylightTimeStruct : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Start offset 0x0
 __declspec(property(get=__get_Start, put=__set_Start)) ::System::DateTime  Start;

/// @brief Field End offset 0x8
 __declspec(property(get=__get_End, put=__set_End)) ::System::DateTime  End;

/// @brief Field Delta offset 0x10
 __declspec(property(get=__get_Delta, put=__set_Delta)) ::System::TimeSpan  Delta;

constexpr void __set_Start(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_Start() ;

constexpr ::System::DateTime const& __get_Start() const;

constexpr void __set_End(::System::DateTime  value) ;

constexpr ::System::DateTime& __get_End() ;

constexpr ::System::DateTime const& __get_End() const;

constexpr void __set_Delta(::System::TimeSpan  value) ;

constexpr ::System::TimeSpan& __get_Delta() ;

constexpr ::System::TimeSpan const& __get_Delta() const;

/// @brief Method .ctor addr 0x2554c40 size 0xc virtual false final false
inline void _ctor(::System::DateTime  start, ::System::DateTime  end, ::System::TimeSpan  delta) ;

// Ctor Parameters [CppParam { name: "Start", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "End", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "Delta", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
constexpr DaylightTimeStruct(::System::DateTime  Start, ::System::DateTime  End, ::System::TimeSpan  Delta) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DaylightTimeStruct(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DaylightTimeStruct()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DaylightTimeStruct, 0x18>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DaylightTimeStruct, "System.Globalization", "DaylightTimeStruct");
