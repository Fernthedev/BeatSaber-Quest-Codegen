#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector4Serializable)
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct Vector4Serializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Vector4Serializable);
// Type: ::Vector4Serializable
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15040))
// CS Name: ::Vector4Serializable
struct CORDL_TYPE Vector4Serializable : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _x offset 0x0
 __declspec(property(get=__get__x, put=__set__x)) int32_t  _x;

/// @brief Field _y offset 0x4
 __declspec(property(get=__get__y, put=__set__y)) int32_t  _y;

/// @brief Field _z offset 0x8
 __declspec(property(get=__get__z, put=__set__z)) int32_t  _z;

/// @brief Field _w offset 0xc
 __declspec(property(get=__get__w, put=__set__w)) int32_t  _w;

/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr operator  ::LiteNetLib::Utils::INetSerializable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>*() ;

constexpr void __set__x(int32_t  value) ;

constexpr int32_t& __get__x() ;

constexpr int32_t const& __get__x() const;

constexpr void __set__y(int32_t  value) ;

constexpr int32_t& __get__y() ;

constexpr int32_t const& __get__y() const;

constexpr void __set__z(int32_t  value) ;

constexpr int32_t& __get__z() ;

constexpr int32_t const& __get__z() const;

constexpr void __set__w(int32_t  value) ;

constexpr int32_t& __get__w() ;

constexpr int32_t const& __get__w() const;

/// @brief Method Serialize addr 0x12a7164 size 0x68 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method Deserialize addr 0x12a71cc size 0x7c virtual true final true
inline void Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Equals addr 0x12a7248 size 0x44 virtual true final true
inline bool Equals(::GlobalNamespace::Vector4Serializable  other) ;

/// @brief Method Approximately addr 0x12a728c size 0x74 virtual false final false
inline bool Approximately(::GlobalNamespace::Vector4Serializable  other) ;

/// @brief Method Equals addr 0x12a7300 size 0xa8 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x12a73a8 size 0x1c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x12a73c4 size 0x25c virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetSize addr 0x12a7620 size 0x6c virtual false final false
inline int32_t GetSize() ;

/// @brief Method .ctor addr 0x12a768c size 0x34c virtual false final false
inline void _ctor(::UnityEngine::Vector4  v) ;

/// @brief Method .ctor addr 0x12a79d8 size 0x8 virtual false final false
inline void _ctor(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method op_Implicit addr 0x12a79e0 size 0x34 virtual false final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::GlobalNamespace::Vector4Serializable  v) ;

/// @brief Method op_Implicit addr 0x12a7a14 size 0x24 virtual false final false
static inline ::GlobalNamespace::Vector4Serializable op_Implicit___GlobalNamespace__Vector4Serializable(::UnityEngine::Vector4  v) ;

/// @brief Method op_Addition addr 0x12a7a38 size 0x2c virtual false final false
static inline ::GlobalNamespace::Vector4Serializable op_Addition(::GlobalNamespace::Vector4Serializable  a, ::GlobalNamespace::Vector4Serializable  b) ;

/// @brief Method op_Subtraction addr 0x12a7a64 size 0x2c virtual false final false
static inline ::GlobalNamespace::Vector4Serializable op_Subtraction(::GlobalNamespace::Vector4Serializable  a, ::GlobalNamespace::Vector4Serializable  b) ;

// Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_z", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_w", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector4Serializable(int32_t  _x, int32_t  _y, int32_t  _z, int32_t  _w) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Vector4Serializable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Vector4Serializable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector4Serializable, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector4Serializable, "", "Vector4Serializable");
