#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Serializable)
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct Vector3Serializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Vector3Serializable);
// Type: ::Vector3Serializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15039))
// CS Name: ::Vector3Serializable
struct CORDL_TYPE Vector3Serializable : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field _x offset 0x0
 __declspec(property(get=__get__x, put=__set__x)) int32_t  _x;

/// @brief Field _y offset 0x4
 __declspec(property(get=__get__y, put=__set__y)) int32_t  _y;

/// @brief Field _z offset 0x8
 __declspec(property(get=__get__z, put=__set__z)) int32_t  _z;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>*() ;

constexpr void __set__x(int32_t  value) ;

constexpr int32_t& __get__x() ;

constexpr int32_t const& __get__x() const;

constexpr void __set__y(int32_t  value) ;

constexpr int32_t& __get__y() ;

constexpr int32_t const& __get__y() const;

constexpr void __set__z(int32_t  value) ;

constexpr int32_t& __get__z() ;

constexpr int32_t const& __get__z() const;

/// @brief Method Serialize addr 0x12a45d0 size 0x54 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a4404 size 0x64 virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Equals addr 0x12a6aa8 size 0x34 virtual true final true
inline bool Equals(::GlobalNamespace::Vector3Serializable  other) ;

/// @brief Method Approximately addr 0x12a6adc size 0x60 virtual false final false
inline bool Approximately(::GlobalNamespace::Vector3Serializable  other) ;

/// @brief Method Equals addr 0x12a6b3c size 0x98 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x12a6bd4 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x12a6bfc size 0x1fc virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetSize addr 0x12a6df8 size 0x54 virtual false final false
inline int32_t GetSize() ;

/// @brief Method .ctor addr 0x12a6e70 size 0x288 virtual false final false
inline void _ctor(::UnityEngine::Vector3  v) ;

/// @brief Method .ctor addr 0x12a70f8 size 0xc virtual false final false
inline void _ctor(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method op_Implicit addr 0x12a7104 size 0x28 virtual false final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::GlobalNamespace::Vector3Serializable  v) ;

/// @brief Method op_Implicit addr 0x12a49e0 size 0x2c virtual false final false
static inline ::GlobalNamespace::Vector3Serializable op_Implicit___GlobalNamespace__Vector3Serializable(::UnityEngine::Vector3  v) ;

/// @brief Method op_Addition addr 0x12a712c size 0x1c virtual false final false
static inline ::GlobalNamespace::Vector3Serializable op_Addition(::GlobalNamespace::Vector3Serializable  a, ::GlobalNamespace::Vector3Serializable  b) ;

/// @brief Method op_Subtraction addr 0x12a7148 size 0x1c virtual false final false
static inline ::GlobalNamespace::Vector3Serializable op_Subtraction(::GlobalNamespace::Vector3Serializable  a, ::GlobalNamespace::Vector3Serializable  b) ;

// Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_z", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector3Serializable(int32_t  _x, int32_t  _y, int32_t  _z) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector3Serializable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector3Serializable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector3Serializable, 0xc>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3Serializable, "", "Vector3Serializable");
