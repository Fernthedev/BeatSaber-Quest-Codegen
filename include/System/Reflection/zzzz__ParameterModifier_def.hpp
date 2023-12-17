#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParameterModifier)
// Forward declare root types
namespace System::Reflection {
struct ParameterModifier;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ParameterModifier);
// Type: System.Reflection::ParameterModifier
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3484))
// CS Name: ::System.Reflection::ParameterModifier
struct CORDL_TYPE ParameterModifier : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _byRef offset 0x0
 __declspec(property(get=__get__byRef, put=__set__byRef)) ::ArrayW<bool,::Array<bool>*>  _byRef;

constexpr void __set__byRef(::ArrayW<bool,::Array<bool>*>  value) ;

constexpr ::ArrayW<bool,::Array<bool>*>& __get__byRef() ;

constexpr ::ArrayW<bool,::Array<bool>*> const& __get__byRef() const;

// Ctor Parameters [CppParam { name: "_byRef", ty: "::ArrayW<bool,::Array<bool>*>", modifiers: "", def_value: None }]
constexpr ParameterModifier(::ArrayW<bool,::Array<bool>*>  _byRef) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ParameterModifier(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ParameterModifier()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ParameterModifier, 0x8>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterModifier, "System.Reflection", "ParameterModifier");
