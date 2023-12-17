#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorNoAlphaSerializable)
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorNoAlphaSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorNoAlphaSerializable);
// Type: ::ColorNoAlphaSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15045))
// CS Name: ::ColorNoAlphaSerializable
struct CORDL_TYPE ColorNoAlphaSerializable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _color offset 0x0
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>*() ;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

/// @brief Method .ctor addr 0x12a8d48 size 0xc virtual false final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Method Serialize addr 0x12a8d54 size 0x50 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a8da4 size 0x5c virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method op_Implicit addr 0x12a8e00 size 0x4 virtual false final false
static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorNoAlphaSerializable  c) ;

/// @brief Method op_Implicit addr 0x12a8e04 size 0x4 virtual false final false
static inline ::GlobalNamespace::ColorNoAlphaSerializable op_Implicit___GlobalNamespace__ColorNoAlphaSerializable(::UnityEngine::Color  c) ;

/// @brief Method Equals addr 0x12a8e08 size 0x104 virtual true final true
inline bool Equals(::GlobalNamespace::ColorNoAlphaSerializable  other) ;

/// @brief Method Equals addr 0x12a8f0c size 0x7c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x12a8f88 size 0x84 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x12a900c size 0x8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr ColorNoAlphaSerializable(::UnityEngine::Color  _color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorNoAlphaSerializable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorNoAlphaSerializable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorNoAlphaSerializable, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorNoAlphaSerializable, "", "ColorNoAlphaSerializable");
