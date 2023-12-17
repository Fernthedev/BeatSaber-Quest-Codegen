#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexAttributeDescriptor)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VertexAttributeDescriptor);
// Type: UnityEngine.Rendering::VertexAttributeDescriptor
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10345))
// CS Name: ::UnityEngine.Rendering::VertexAttributeDescriptor
struct CORDL_TYPE VertexAttributeDescriptor : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <attribute>k__BackingField offset 0x0
 __declspec(property(get=__get__attribute_k__BackingField, put=__set__attribute_k__BackingField)) ::UnityEngine::Rendering::VertexAttribute  _attribute_k__BackingField;

/// @brief Field <format>k__BackingField offset 0x4
 __declspec(property(get=__get__format_k__BackingField, put=__set__format_k__BackingField)) ::UnityEngine::Rendering::VertexAttributeFormat  _format_k__BackingField;

/// @brief Field <dimension>k__BackingField offset 0x8
 __declspec(property(get=__get__dimension_k__BackingField, put=__set__dimension_k__BackingField)) int32_t  _dimension_k__BackingField;

/// @brief Field <stream>k__BackingField offset 0xc
 __declspec(property(get=__get__stream_k__BackingField, put=__set__stream_k__BackingField)) int32_t  _stream_k__BackingField;

 __declspec(property(get=get_attribute, put=set_attribute)) ::UnityEngine::Rendering::VertexAttribute  attribute;

 __declspec(property(get=get_format, put=set_format)) ::UnityEngine::Rendering::VertexAttributeFormat  format;

 __declspec(property(get=get_dimension, put=set_dimension)) int32_t  dimension;

 __declspec(property(get=get_stream, put=set_stream)) int32_t  stream;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*() ;

constexpr void __set__attribute_k__BackingField(::UnityEngine::Rendering::VertexAttribute  value) ;

constexpr ::UnityEngine::Rendering::VertexAttribute& __get__attribute_k__BackingField() ;

constexpr ::UnityEngine::Rendering::VertexAttribute const& __get__attribute_k__BackingField() const;

constexpr void __set__format_k__BackingField(::UnityEngine::Rendering::VertexAttributeFormat  value) ;

constexpr ::UnityEngine::Rendering::VertexAttributeFormat& __get__format_k__BackingField() ;

constexpr ::UnityEngine::Rendering::VertexAttributeFormat const& __get__format_k__BackingField() const;

constexpr void __set__dimension_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__dimension_k__BackingField() ;

constexpr int32_t const& __get__dimension_k__BackingField() const;

constexpr void __set__stream_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__stream_k__BackingField() ;

constexpr int32_t const& __get__stream_k__BackingField() const;

/// @brief Method get_attribute addr 0x2cebfd4 size 0x8 virtual false final false
inline ::UnityEngine::Rendering::VertexAttribute get_attribute() ;

/// @brief Method set_attribute addr 0x2cebfdc size 0x8 virtual false final false
inline void set_attribute(::UnityEngine::Rendering::VertexAttribute  value) ;

/// @brief Method get_format addr 0x2cebfe4 size 0x8 virtual false final false
inline ::UnityEngine::Rendering::VertexAttributeFormat get_format() ;

/// @brief Method set_format addr 0x2cebfec size 0x8 virtual false final false
inline void set_format(::UnityEngine::Rendering::VertexAttributeFormat  value) ;

/// @brief Method get_dimension addr 0x2cebff4 size 0x8 virtual false final false
inline int32_t get_dimension() ;

/// @brief Method set_dimension addr 0x2cebffc size 0x8 virtual false final false
inline void set_dimension(int32_t  value) ;

/// @brief Method get_stream addr 0x2cec004 size 0x8 virtual false final false
inline int32_t get_stream() ;

/// @brief Method set_stream addr 0x2cec00c size 0x8 virtual false final false
inline void set_stream(int32_t  value) ;

/// @brief Method .ctor addr 0x2cec014 size 0xc virtual false final false
inline void _ctor(::UnityEngine::Rendering::VertexAttribute  attribute, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dimension, int32_t  stream) ;

/// @brief Method ToString addr 0x2cec020 size 0x1d4 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2cec1f4 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2cec21c size 0xa8 virtual true final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals addr 0x2cec2c4 size 0x44 virtual true final true
inline bool Equals(::UnityEngine::Rendering::VertexAttributeDescriptor  other) ;

// Ctor Parameters [CppParam { name: "_attribute_k__BackingField", ty: "::UnityEngine::Rendering::VertexAttribute", modifiers: "", def_value: None }, CppParam { name: "_format_k__BackingField", ty: "::UnityEngine::Rendering::VertexAttributeFormat", modifiers: "", def_value: None }, CppParam { name: "_dimension_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_stream_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexAttributeDescriptor(::UnityEngine::Rendering::VertexAttribute  _attribute_k__BackingField, ::UnityEngine::Rendering::VertexAttributeFormat  _format_k__BackingField, int32_t  _dimension_k__BackingField, int32_t  _stream_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VertexAttributeDescriptor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VertexAttributeDescriptor()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VertexAttributeDescriptor, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeDescriptor, "UnityEngine.Rendering", "VertexAttributeDescriptor");
