#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRVEShaderInfoAllocator)
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct UIRVEShaderInfoAllocator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator);
// Type: UnityEngine.UIElements.UIR::UIRVEShaderInfoAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7377))
// CS Name: ::UnityEngine.UIElements.UIR::UIRVEShaderInfoAllocator
struct CORDL_TYPE UIRVEShaderInfoAllocator : public ::bs_hook::ValueTypeWrapper<0xd0> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field m_Storage offset 0x0
 __declspec(property(get=__get_m_Storage, put=__set_m_Storage)) ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*  m_Storage;

/// @brief Field m_TransformAllocator offset 0x8
 __declspec(property(get=__get_m_TransformAllocator, put=__set_m_TransformAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_TransformAllocator;

/// @brief Field m_ClipRectAllocator offset 0x28
 __declspec(property(get=__get_m_ClipRectAllocator, put=__set_m_ClipRectAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_ClipRectAllocator;

/// @brief Field m_OpacityAllocator offset 0x48
 __declspec(property(get=__get_m_OpacityAllocator, put=__set_m_OpacityAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_OpacityAllocator;

/// @brief Field m_ColorAllocator offset 0x68
 __declspec(property(get=__get_m_ColorAllocator, put=__set_m_ColorAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_ColorAllocator;

/// @brief Field m_TextSettingsAllocator offset 0x88
 __declspec(property(get=__get_m_TextSettingsAllocator, put=__set_m_TextSettingsAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_TextSettingsAllocator;

/// @brief Field m_StorageReallyCreated offset 0xa8
 __declspec(property(get=__get_m_StorageReallyCreated, put=__set_m_StorageReallyCreated)) bool  m_StorageReallyCreated;

/// @brief Field m_VertexTexturingEnabled offset 0xa9
 __declspec(property(get=__get_m_VertexTexturingEnabled, put=__set_m_VertexTexturingEnabled)) bool  m_VertexTexturingEnabled;

/// @brief Field m_Transforms offset 0xb0
 __declspec(property(get=__get_m_Transforms, put=__set_m_Transforms)) ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  m_Transforms;

/// @brief Field m_ClipRects offset 0xc0
 __declspec(property(get=__get_m_ClipRects, put=__set_m_ClipRects)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  m_ClipRects;

 __declspec(property(get=get_transformConstants)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>  transformConstants;

 __declspec(property(get=get_clipRectConstants)) ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>  clipRectConstants;

 __declspec(property(get=get_atlas)) ::UnityEngine::Texture*  atlas;

constexpr void __set_m_Storage(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*  value) ;

constexpr ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* __get_m_Storage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*> __get_m_Storage() const;

constexpr void __set_m_TransformAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32  value) ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __get_m_TransformAllocator() ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __get_m_TransformAllocator() const;

constexpr void __set_m_ClipRectAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32  value) ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __get_m_ClipRectAllocator() ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __get_m_ClipRectAllocator() const;

constexpr void __set_m_OpacityAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32  value) ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __get_m_OpacityAllocator() ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __get_m_OpacityAllocator() const;

constexpr void __set_m_ColorAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32  value) ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __get_m_ColorAllocator() ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __get_m_ColorAllocator() const;

constexpr void __set_m_TextSettingsAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32  value) ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __get_m_TextSettingsAllocator() ;

constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __get_m_TextSettingsAllocator() const;

constexpr void __set_m_StorageReallyCreated(bool  value) ;

constexpr bool& __get_m_StorageReallyCreated() ;

constexpr bool const& __get_m_StorageReallyCreated() const;

constexpr void __set_m_VertexTexturingEnabled(bool  value) ;

constexpr bool& __get_m_VertexTexturingEnabled() ;

constexpr bool const& __get_m_VertexTexturingEnabled() const;

constexpr void __set_m_Transforms(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>& __get_m_Transforms() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4> const& __get_m_Transforms() const;

constexpr void __set_m_ClipRects(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& __get_m_ClipRects() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> const& __get_m_ClipRects() const;

static inline void setStaticF_identityTransformTexel(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_identityTransformTexel() ;

static inline void setStaticF_infiniteClipRectTexel(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_infiniteClipRectTexel() ;

static inline void setStaticF_fullOpacityTexel(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_fullOpacityTexel() ;

static inline void setStaticF_clearColorTexel(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_clearColorTexel() ;

static inline void setStaticF_defaultTextCoreSettingsTexel(::UnityEngine::Vector2Int  value) ;

static inline ::UnityEngine::Vector2Int getStaticF_defaultTextCoreSettingsTexel() ;

static inline void setStaticF_identityTransformValue(::UnityEngine::Matrix4x4  value) ;

static inline ::UnityEngine::Matrix4x4 getStaticF_identityTransformValue() ;

static inline void setStaticF_identityTransformRow0Value(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_identityTransformRow0Value() ;

static inline void setStaticF_identityTransformRow1Value(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_identityTransformRow1Value() ;

static inline void setStaticF_identityTransformRow2Value(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_identityTransformRow2Value() ;

static inline void setStaticF_infiniteClipRectValue(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_infiniteClipRectValue() ;

static inline void setStaticF_fullOpacityValue(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_fullOpacityValue() ;

static inline void setStaticF_clearColorValue(::UnityEngine::Vector4  value) ;

static inline ::UnityEngine::Vector4 getStaticF_clearColorValue() ;

static inline void setStaticF_defaultTextCoreSettingsValue(::UnityEngine::UIElements::UIR::TextCoreSettings  value) ;

static inline ::UnityEngine::UIElements::UIR::TextCoreSettings getStaticF_defaultTextCoreSettingsValue() ;

static inline void setStaticF_identityTransform(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_identityTransform() ;

static inline void setStaticF_infiniteClipRect(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_infiniteClipRect() ;

static inline void setStaticF_fullOpacity(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_fullOpacity() ;

static inline void setStaticF_clearColor(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_clearColor() ;

static inline void setStaticF_defaultTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_defaultTextCoreSettings() ;

/// @brief Method get_pageWidth addr 0x2e88934 size 0x8 virtual false final false
static inline int32_t get_pageWidth() ;

/// @brief Method get_pageHeight addr 0x2e8893c size 0x8 virtual false final false
static inline int32_t get_pageHeight() ;

/// @brief Method AllocToTexelCoord addr 0x2e88944 size 0x50 virtual false final false
static inline ::UnityEngine::Vector2Int AllocToTexelCoord(ByRef<::UnityEngine::UIElements::UIR::BitmapAllocator32>  allocator, ::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method AllocToConstantBufferIndex addr 0x2e88994 size 0x68 virtual false final false
static inline int32_t AllocToConstantBufferIndex(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method AtlasRectMatchesPage addr 0x2e889fc size 0xf8 virtual false final false
static inline bool AtlasRectMatchesPage(ByRef<::UnityEngine::UIElements::UIR::BitmapAllocator32>  allocator, ::UnityEngine::UIElements::UIR::BMPAlloc  defAlloc, ::UnityEngine::RectInt  atlasRect) ;

/// @brief Method get_transformConstants addr 0x2e88af4 size 0x48 virtual false final false
inline ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> get_transformConstants() ;

/// @brief Method get_clipRectConstants addr 0x2e88b3c size 0x48 virtual false final false
inline ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> get_clipRectConstants() ;

/// @brief Method get_atlas addr 0x2e88b84 size 0x90 virtual false final false
inline ::UnityEngine::Texture* get_atlas() ;

/// @brief Method Construct addr 0x2e88c14 size 0x288 virtual false final false
inline void Construct() ;

/// @brief Method ReallyCreateStorage addr 0x2e88e9c size 0x42c virtual false final false
inline void ReallyCreateStorage() ;

/// @brief Method Dispose addr 0x2e89a6c size 0xd0 virtual false final false
inline void Dispose() ;

/// @brief Method IssuePendingStorageChanges addr 0x2e89ba8 size 0x18 virtual false final false
inline void IssuePendingStorageChanges() ;

/// @brief Method AllocTransform addr 0x2e89bc0 size 0xe8 virtual false final false
inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocTransform() ;

/// @brief Method AllocClipRect addr 0x2e89ca8 size 0xe8 virtual false final false
inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocClipRect() ;

/// @brief Method AllocOpacity addr 0x2e89d90 size 0x28 virtual false final false
inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocOpacity() ;

/// @brief Method AllocColor addr 0x2e89db8 size 0x28 virtual false final false
inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocColor() ;

/// @brief Method AllocTextCoreSettings addr 0x2e89de0 size 0x28 virtual false final false
inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocTextCoreSettings(::UnityEngine::UIElements::UIR::TextCoreSettings  settings) ;

/// @brief Method SetTransformValue addr 0x2e893f0 size 0x214 virtual false final false
inline void SetTransformValue(::UnityEngine::UIElements::UIR::BMPAlloc  alloc, ::UnityEngine::Matrix4x4  xform) ;

/// @brief Method SetClipRectValue addr 0x2e89604 size 0x138 virtual false final false
inline void SetClipRectValue(::UnityEngine::UIElements::UIR::BMPAlloc  alloc, ::UnityEngine::Vector4  clipRect) ;

/// @brief Method SetOpacityValue addr 0x2e8973c size 0xdc virtual false final false
inline void SetOpacityValue(::UnityEngine::UIElements::UIR::BMPAlloc  alloc, float_t  opacity) ;

/// @brief Method SetColorValue addr 0x2e89818 size 0xf0 virtual false final false
inline void SetColorValue(::UnityEngine::UIElements::UIR::BMPAlloc  alloc, ::UnityEngine::Color  color) ;

/// @brief Method SetTextCoreSettingValue addr 0x2e89908 size 0x164 virtual false final false
inline void SetTextCoreSettingValue(::UnityEngine::UIElements::UIR::BMPAlloc  alloc, ::UnityEngine::UIElements::UIR::TextCoreSettings  settings) ;

/// @brief Method FreeTransform addr 0x2e89e08 size 0x74 virtual false final false
inline void FreeTransform(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method FreeClipRect addr 0x2e89e7c size 0x74 virtual false final false
inline void FreeClipRect(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method FreeOpacity addr 0x2e89ef0 size 0x74 virtual false final false
inline void FreeOpacity(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method FreeColor addr 0x2e89f64 size 0x74 virtual false final false
inline void FreeColor(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method FreeTextCoreSettings addr 0x2e89fd8 size 0x74 virtual false final false
inline void FreeTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method TransformAllocToVertexData addr 0x2e8a04c size 0x120 virtual false final false
inline ::UnityEngine::Color32 TransformAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method ClipRectAllocToVertexData addr 0x2e8a16c size 0x120 virtual false final false
inline ::UnityEngine::Color32 ClipRectAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method OpacityAllocToVertexData addr 0x2e8a28c size 0xfc virtual false final false
inline ::UnityEngine::Color32 OpacityAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method ColorAllocToVertexData addr 0x2e8a388 size 0xfc virtual false final false
inline ::UnityEngine::Color32 ColorAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method TextCoreSettingsToVertexData addr 0x2e8a484 size 0xfc virtual false final false
inline ::UnityEngine::Color32 TextCoreSettingsToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

// Ctor Parameters [CppParam { name: "m_Storage", ty: "::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*", modifiers: "", def_value: None }, CppParam { name: "m_TransformAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_ClipRectAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_OpacityAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_ColorAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_TextSettingsAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_StorageReallyCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_VertexTexturingEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Transforms", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name: "m_ClipRects", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }]
constexpr UIRVEShaderInfoAllocator(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*  m_Storage, ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_TransformAllocator, ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_ClipRectAllocator, ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_OpacityAllocator, ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_ColorAllocator, ::UnityEngine::UIElements::UIR::BitmapAllocator32  m_TextSettingsAllocator, bool  m_StorageReallyCreated, bool  m_VertexTexturingEnabled, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>  m_Transforms, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  m_ClipRects) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UIRVEShaderInfoAllocator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xd0>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UIRVEShaderInfoAllocator()  = default;


// Fields

// Static field identityTransformTexel

// Static field infiniteClipRectTexel

// Static field fullOpacityTexel

// Static field clearColorTexel

// Static field defaultTextCoreSettingsTexel

// Static field identityTransformValue

// Static field identityTransformRow0Value

// Static field identityTransformRow1Value

// Static field identityTransformRow2Value

// Static field infiniteClipRectValue

// Static field fullOpacityValue

// Static field clearColorValue

// Static field defaultTextCoreSettingsValue

// Static field identityTransform

// Static field infiniteClipRect

// Static field fullOpacity

// Static field clearColor

// Static field defaultTextCoreSettings


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, 0xd0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, "UnityEngine.UIElements.UIR", "UIRVEShaderInfoAllocator");
