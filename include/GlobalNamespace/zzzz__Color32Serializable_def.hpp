#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Color32Serializable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color32;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace System {
class Object;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct Color32Serializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Color32Serializable);
// Type: ::Color32Serializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15044))
// CS Name: ::Color32Serializable
struct CORDL_TYPE Color32Serializable : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _color offset 0x0
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color32  _color;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Color32Serializable>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::Color32Serializable>*() ;

constexpr void __set__color(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get__color() ;

constexpr ::UnityEngine::Color32 const& __get__color() const;

/// @brief Method .ctor addr 0x12a8b0c size 0x8 virtual false final false
inline void _ctor(::UnityEngine::Color32  color) ;

/// @brief Method Serialize addr 0x12a8b14 size 0x60 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a8b74 size 0x64 virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method op_Implicit addr 0x12a8bd8 size 0x8 virtual false final false
static inline ::UnityEngine::Color32 op_Implicit___UnityEngine__Color32(::GlobalNamespace::Color32Serializable  c) ;

/// @brief Method op_Implicit addr 0x12a8be0 size 0x8 virtual false final false
static inline ::GlobalNamespace::Color32Serializable op_Implicit___GlobalNamespace__Color32Serializable(::UnityEngine::Color32  c) ;

/// @brief Method Equals addr 0x12a8be8 size 0x48 virtual true final true
inline bool Equals(::GlobalNamespace::Color32Serializable  other) ;

/// @brief Method Equals addr 0x12a8c30 size 0xa8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x12a8cd8 size 0x68 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x12a8d40 size 0x8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }]
constexpr Color32Serializable(::UnityEngine::Color32  _color) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Color32Serializable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Color32Serializable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Color32Serializable, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Color32Serializable, "", "Color32Serializable");
