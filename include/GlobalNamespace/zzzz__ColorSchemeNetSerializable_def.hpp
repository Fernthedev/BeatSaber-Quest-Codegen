#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ColorSchemeNetSerializable)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct ColorNoAlphaSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSchemeNetSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorSchemeNetSerializable);
// Type: ::ColorSchemeNetSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12690))
// CS Name: ::ColorSchemeNetSerializable
struct CORDL_TYPE ColorSchemeNetSerializable : public ::bs_hook::ValueTypeWrapper<0x70> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field saberAColor offset 0x0
 __declspec(property(get=__get_saberAColor, put=__set_saberAColor)) ::GlobalNamespace::ColorNoAlphaSerializable  saberAColor;

/// @brief Field saberBColor offset 0x10
 __declspec(property(get=__get_saberBColor, put=__set_saberBColor)) ::GlobalNamespace::ColorNoAlphaSerializable  saberBColor;

/// @brief Field obstaclesColor offset 0x20
 __declspec(property(get=__get_obstaclesColor, put=__set_obstaclesColor)) ::GlobalNamespace::ColorNoAlphaSerializable  obstaclesColor;

/// @brief Field environmentColor0 offset 0x30
 __declspec(property(get=__get_environmentColor0, put=__set_environmentColor0)) ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor0;

/// @brief Field environmentColor1 offset 0x40
 __declspec(property(get=__get_environmentColor1, put=__set_environmentColor1)) ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor1;

/// @brief Field environmentColor0Boost offset 0x50
 __declspec(property(get=__get_environmentColor0Boost, put=__set_environmentColor0Boost)) ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor0Boost;

/// @brief Field environmentColor1Boost offset 0x60
 __declspec(property(get=__get_environmentColor1Boost, put=__set_environmentColor1Boost)) ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor1Boost;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() ;

constexpr void __set_saberAColor(::GlobalNamespace::ColorNoAlphaSerializable  value) ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable& __get_saberAColor() ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable const& __get_saberAColor() const;

constexpr void __set_saberBColor(::GlobalNamespace::ColorNoAlphaSerializable  value) ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable& __get_saberBColor() ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable const& __get_saberBColor() const;

constexpr void __set_obstaclesColor(::GlobalNamespace::ColorNoAlphaSerializable  value) ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable& __get_obstaclesColor() ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable const& __get_obstaclesColor() const;

constexpr void __set_environmentColor0(::GlobalNamespace::ColorNoAlphaSerializable  value) ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable& __get_environmentColor0() ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable const& __get_environmentColor0() const;

constexpr void __set_environmentColor1(::GlobalNamespace::ColorNoAlphaSerializable  value) ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable& __get_environmentColor1() ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable const& __get_environmentColor1() const;

constexpr void __set_environmentColor0Boost(::GlobalNamespace::ColorNoAlphaSerializable  value) ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable& __get_environmentColor0Boost() ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable const& __get_environmentColor0Boost() const;

constexpr void __set_environmentColor1Boost(::GlobalNamespace::ColorNoAlphaSerializable  value) ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable& __get_environmentColor1Boost() ;

constexpr ::GlobalNamespace::ColorNoAlphaSerializable const& __get_environmentColor1Boost() const;

/// @brief Method .ctor addr 0xe2a7b8 size 0x180 virtual false final false
inline void _ctor(::UnityEngine::Color  saberAColor, ::UnityEngine::Color  saberBColor, ::UnityEngine::Color  obstaclesColor, ::UnityEngine::Color  environmentColor0, ::UnityEngine::Color  environmentColor1, ::UnityEngine::Color  environmentColor0Boost, ::UnityEngine::Color  environmentColor1Boost) ;

/// @brief Method Serialize addr 0xe2a938 size 0x80 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0xe2a9b8 size 0x80 virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

// Ctor Parameters [CppParam { name: "saberAColor", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "saberBColor", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "obstaclesColor", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor0", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor1", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor0Boost", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor1Boost", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }]
constexpr ColorSchemeNetSerializable(::GlobalNamespace::ColorNoAlphaSerializable  saberAColor, ::GlobalNamespace::ColorNoAlphaSerializable  saberBColor, ::GlobalNamespace::ColorNoAlphaSerializable  obstaclesColor, ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor0, ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor1, ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor0Boost, ::GlobalNamespace::ColorNoAlphaSerializable  environmentColor1Boost) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorSchemeNetSerializable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x70>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorSchemeNetSerializable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeNetSerializable, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeNetSerializable, "", "ColorSchemeNetSerializable");
