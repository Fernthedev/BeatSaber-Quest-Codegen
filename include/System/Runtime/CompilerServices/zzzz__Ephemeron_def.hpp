#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Ephemeron)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct Ephemeron;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::Ephemeron);
// Type: System.Runtime.CompilerServices::Ephemeron
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3419))
// CS Name: ::System.Runtime.CompilerServices::Ephemeron
struct CORDL_TYPE Ephemeron : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key offset 0x0
 __declspec(property(get=__get_key, put=__set_key)) ::System::Object*  key;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::System::Object*  value;

constexpr void __set_key(::System::Object*  value) ;

constexpr ::System::Object* __get_key() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_key() const;

constexpr void __set_value(::System::Object*  value) ;

constexpr ::System::Object* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_value() const;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr Ephemeron(::System::Object*  key, ::System::Object*  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Ephemeron(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Ephemeron()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::Ephemeron, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::Ephemeron, "System.Runtime.CompilerServices", "Ephemeron");
