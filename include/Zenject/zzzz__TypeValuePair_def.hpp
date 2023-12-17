#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TypeValuePair)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
struct TypeValuePair;
}
// Write type traits
MARK_VAL_T(::Zenject::TypeValuePair);
// Type: Zenject::TypeValuePair
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11114))
// CS Name: ::Zenject::TypeValuePair
struct CORDL_TYPE TypeValuePair : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Type offset 0x0
 __declspec(property(get=__get_Type, put=__set_Type)) ::System::Type*  Type;

/// @brief Field Value offset 0x8
 __declspec(property(get=__get_Value, put=__set_Value)) ::System::Object*  Value;

constexpr void __set_Type(::System::Type*  value) ;

constexpr ::System::Type* __get_Type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_Type() const;

constexpr void __set_Value(::System::Object*  value) ;

constexpr ::System::Object* __get_Value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_Value() const;

/// @brief Method .ctor addr 0x2eeb834 size 0x8 virtual false final false
inline void _ctor(::System::Type*  type, ::System::Object*  value) ;

// Ctor Parameters [CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr TypeValuePair(::System::Type*  Type, ::System::Object*  Value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TypeValuePair(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TypeValuePair()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::TypeValuePair, 0x10>, "Size mismatch!");

} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TypeValuePair, "Zenject", "TypeValuePair");
