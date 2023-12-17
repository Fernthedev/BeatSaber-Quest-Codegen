#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugScreenCapture)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Profiling::Experimental::DebugScreenCapture);
// Type: UnityEngine.Profiling.Experimental::DebugScreenCapture
namespace UnityEngine::Profiling::Experimental {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10300))
// CS Name: ::UnityEngine.Profiling.Experimental::DebugScreenCapture
struct CORDL_TYPE DebugScreenCapture : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <rawImageDataReference>k__BackingField offset 0x0
 __declspec(property(get=__get__rawImageDataReference_k__BackingField, put=__set__rawImageDataReference_k__BackingField)) ::Unity::Collections::NativeArray_1<uint8_t>  _rawImageDataReference_k__BackingField;

/// @brief Field <imageFormat>k__BackingField offset 0x10
 __declspec(property(get=__get__imageFormat_k__BackingField, put=__set__imageFormat_k__BackingField)) ::UnityEngine::TextureFormat  _imageFormat_k__BackingField;

/// @brief Field <width>k__BackingField offset 0x14
 __declspec(property(get=__get__width_k__BackingField, put=__set__width_k__BackingField)) int32_t  _width_k__BackingField;

/// @brief Field <height>k__BackingField offset 0x18
 __declspec(property(get=__get__height_k__BackingField, put=__set__height_k__BackingField)) int32_t  _height_k__BackingField;

 __declspec(property(put=set_rawImageDataReference)) ::Unity::Collections::NativeArray_1<uint8_t>  rawImageDataReference;

 __declspec(property(put=set_imageFormat)) ::UnityEngine::TextureFormat  imageFormat;

 __declspec(property(put=set_width)) int32_t  width;

 __declspec(property(put=set_height)) int32_t  height;

constexpr void __set__rawImageDataReference_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get__rawImageDataReference_k__BackingField() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get__rawImageDataReference_k__BackingField() const;

constexpr void __set__imageFormat_k__BackingField(::UnityEngine::TextureFormat  value) ;

constexpr ::UnityEngine::TextureFormat& __get__imageFormat_k__BackingField() ;

constexpr ::UnityEngine::TextureFormat const& __get__imageFormat_k__BackingField() const;

constexpr void __set__width_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__width_k__BackingField() ;

constexpr int32_t const& __get__width_k__BackingField() const;

constexpr void __set__height_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__height_k__BackingField() ;

constexpr int32_t const& __get__height_k__BackingField() const;

/// @brief Method set_rawImageDataReference addr 0x2ce70f0 size 0x8 virtual false final false
inline void set_rawImageDataReference(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

/// @brief Method set_imageFormat addr 0x2ce70f8 size 0x8 virtual false final false
inline void set_imageFormat(::UnityEngine::TextureFormat  value) ;

/// @brief Method set_width addr 0x2ce7100 size 0x8 virtual false final false
inline void set_width(int32_t  value) ;

/// @brief Method set_height addr 0x2ce7108 size 0x8 virtual false final false
inline void set_height(int32_t  value) ;

// Ctor Parameters [CppParam { name: "_rawImageDataReference_k__BackingField", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_imageFormat_k__BackingField", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "_width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebugScreenCapture(::Unity::Collections::NativeArray_1<uint8_t>  _rawImageDataReference_k__BackingField, ::UnityEngine::TextureFormat  _imageFormat_k__BackingField, int32_t  _width_k__BackingField, int32_t  _height_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DebugScreenCapture(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DebugScreenCapture()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Profiling::Experimental::DebugScreenCapture, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Profiling::Experimental
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Profiling::Experimental::DebugScreenCapture, "UnityEngine.Profiling.Experimental", "DebugScreenCapture");
