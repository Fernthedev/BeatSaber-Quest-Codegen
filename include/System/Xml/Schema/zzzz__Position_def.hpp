#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Position)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
struct Position;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::Position);
// Type: System.Xml.Schema::Position
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11597))
// CS Name: ::System.Xml.Schema::Position
struct CORDL_TYPE Position : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field symbol offset 0x0
 __declspec(property(get=__get_symbol, put=__set_symbol)) int32_t  symbol;

/// @brief Field particle offset 0x8
 __declspec(property(get=__get_particle, put=__set_particle)) ::System::Object*  particle;

constexpr void __set_symbol(int32_t  value) ;

constexpr int32_t& __get_symbol() ;

constexpr int32_t const& __get_symbol() const;

constexpr void __set_particle(::System::Object*  value) ;

constexpr ::System::Object* __get_particle() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_particle() const;

/// @brief Method .ctor addr 0x28ada14 size 0xc virtual false final false
inline void _ctor(int32_t  symbol, ::System::Object*  particle) ;

// Ctor Parameters [CppParam { name: "symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "particle", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr Position(int32_t  symbol, ::System::Object*  particle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Position(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Position()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Position, 0x10>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Position, "System.Xml.Schema", "Position");
