#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorSerializable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorSerializable);
// Type: ::ColorSerializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15043))
// CS Name: ::ColorSerializable
struct CORDL_TYPE ColorSerializable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _color offset 0x0
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ColorSerializable>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::ColorSerializable>*() ;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

/// @brief Method .ctor addr 0x12a87f0 size 0xc virtual false final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Method Serialize addr 0x12a87fc size 0x60 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a885c size 0x64 virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method op_Implicit addr 0x12a88c0 size 0x4 virtual false final false
static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorSerializable  c) ;

/// @brief Method op_Implicit addr 0x12a88c4 size 0x4 virtual false final false
static inline ::GlobalNamespace::ColorSerializable op_Implicit___GlobalNamespace__ColorSerializable(::UnityEngine::Color  c) ;

/// @brief Method Equals addr 0x12a88c8 size 0x13c virtual true final true
inline bool Equals(::GlobalNamespace::ColorSerializable  other) ;

/// @brief Method Equals addr 0x12a8a04 size 0x7c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x12a8a80 size 0x84 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x12a8b04 size 0x8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr ColorSerializable(::UnityEngine::Color  _color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ColorSerializable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ColorSerializable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSerializable, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSerializable, "", "ColorSerializable");
